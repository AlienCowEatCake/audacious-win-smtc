#include <cstdint>
#include <cstdlib>
#include <cstring>
#include <exception>
#include <string>
#include <string_view>

#include <windows.h>

#include <systemmediatransportcontrolsinterop.h>

#include <winrt/Windows.Foundation.Collections.h>
#include <winrt/Windows.Foundation.h>
#include <winrt/Windows.Media.h>
#include <winrt/Windows.Storage.Streams.h>
#include <winrt/Windows.Storage.h>

#include <QApplication>
#include <QBuffer>
#include <QByteArray>
#include <QDebug>
#include <QIcon>
#include <QPixmap>
#include <QString>
#include <QWidget>

#include <libaudcore/drct.h>
#include <libaudcore/hook.h>
#include <libaudcore/plugin.h>
#include <libaudcore/runtime.h>

#include <libaudqt/libaudqt.h>

using winrt::Windows::Media::MediaPlaybackStatus;
using winrt::Windows::Media::SystemMediaTransportControls;
using winrt::Windows::Media::SystemMediaTransportControlsButton;
using winrt::Windows::Media::SystemMediaTransportControlsButtonPressedEventArgs;
using winrt::Windows::Storage::Streams::DataWriter;
using winrt::Windows::Storage::Streams::InMemoryRandomAccessStream;
using winrt::Windows::Storage::Streams::RandomAccessStreamReference;

class WinSMTC : public GeneralPlugin
{
public:
#if !defined(PLUGIN_VERSION)
#define PLUGIN_VERSION ""
#endif
    static constexpr PluginInfo info = {
        "WinSMTC", "WinSMTC",
        "Windows System Media Transport Controls (SMTC) Plugin for "
        "Audacious " PLUGIN_VERSION "\n"
        "https://github.com/AlienCowEatCake/audacious-win-smtc\n\n"
        "Copyright (C) 2023-2025 Peter S. Zhigalov",
        Q_NULLPTR, PluginQtOnly};

    WinSMTC() : GeneralPlugin(info, true)
    {
#define ENABLE_HOOK_TRACE 0
#if defined(ENABLE_HOOK_TRACE) && (ENABLE_HOOK_TRACE)
#define HOOK_TRACE(X)                                                          \
    hook_associate(                                                            \
        X, [](void *, void *) { qWarning("Hook triggered: %s", (X)); },        \
        Q_NULLPTR)
#else
#define HOOK_TRACE(X)
#endif
        HOOK_TRACE("art ready");
        HOOK_TRACE("dock plugin disabled");
        HOOK_TRACE("dock plugin enabled");
        HOOK_TRACE("enable record");
        HOOK_TRACE("playback stop");
        HOOK_TRACE("playlist activate");
        HOOK_TRACE("playlist add complete");
        HOOK_TRACE("playlist position");
        HOOK_TRACE("playlist set playing");
        HOOK_TRACE("playlist update");
        HOOK_TRACE("quit");
        HOOK_TRACE("set chardet_detector");
        HOOK_TRACE("set chardet_fallback");
        HOOK_TRACE("set equalizer_active");
        HOOK_TRACE("set equalizer_bands");
        HOOK_TRACE("set equalizer_preamp");
        HOOK_TRACE("set generic_title_format");
        HOOK_TRACE("set leading_zero");
        HOOK_TRACE("set metadata_fallbacks");
        HOOK_TRACE("set metadata_on_play");
        HOOK_TRACE("set record");
        HOOK_TRACE("set record_stream");
        HOOK_TRACE("set show_hours");
        HOOK_TRACE("set show_numbers_in_pl");
        HOOK_TRACE("ui hide progress");
        HOOK_TRACE("ui show error");
        HOOK_TRACE("ui show info");
        HOOK_TRACE("ui show progress 2");
        HOOK_TRACE("ui show progress");

        HOOK_TRACE("audqt log entry");
        HOOK_TRACE("info change");
        HOOK_TRACE("playback pause");
        HOOK_TRACE("playback ready");
        HOOK_TRACE("playback seek");
        HOOK_TRACE("playback unpause");
        HOOK_TRACE("playlist scan complete");
        HOOK_TRACE("quit");
        HOOK_TRACE("title change");
        HOOK_TRACE("tuple change");
        HOOK_TRACE("ui show error");
#undef HOOK_TRACE
    }

    ~WinSMTC()
    {
        smtc_cleanup();
    }

    bool init() Q_DECL_OVERRIDE
    {
        smtc_init();
        if (aud_drct_get_ready())
            on_playback_ready();
        return true;
    }

    void cleanup() Q_DECL_OVERRIDE
    {
        smtc_cleanup();
    }

    void on_playback_ready()
    {
        if (!ensure_smtc_inited())
            return;

        try
        {
            auto updater = m_smtc.DisplayUpdater();
            updater.ClearAll();
            updater.Type(winrt::Windows::Media::MediaPlaybackType::Music);

            auto m = updater.MusicProperties();
            Tuple t = aud_drct_get_tuple();
            if (t.valid())
            {
                if (t.is_set(Tuple::Title) &&
                    t.get_value_type(Tuple::Title) == Tuple::String)
                {
                    const String s = t.get_str(Tuple::Title);
                    m.Title(winrt::to_hstring(std::string_view(s)));
                }
                else
                {
                    const String s = aud_drct_get_filename();
                    m.Title(winrt::to_hstring(std::string_view(s)));
                }
                if (t.is_set(Tuple::Artist) &&
                    t.get_value_type(Tuple::Artist) == Tuple::String)
                {
                    const String s = t.get_str(Tuple::Artist);
                    m.Artist(winrt::to_hstring(std::string_view(s)));
                }
                if (t.is_set(Tuple::Album) &&
                    t.get_value_type(Tuple::Album) == Tuple::String)
                {
                    const String s = t.get_str(Tuple::Album);
                    m.AlbumTitle(winrt::to_hstring(std::string_view(s)));
                }
                if (t.is_set(Tuple::AlbumArtist) &&
                    t.get_value_type(Tuple::AlbumArtist) == Tuple::String)
                {
                    const String s = t.get_str(Tuple::AlbumArtist);
                    m.AlbumArtist(winrt::to_hstring(std::string_view(s)));
                }
                if (t.is_set(Tuple::Genre) &&
                    t.get_value_type(Tuple::Genre) == Tuple::String)
                {
                    const String s = t.get_str(Tuple::Genre);
                    m.Genres().Append(winrt::to_hstring(std::string_view(s)));
                }
                if (t.is_set(Tuple::Track) &&
                    t.get_value_type(Tuple::Track) == Tuple::Int)
                {
                    const int i = t.get_int(Tuple::Track);
                    m.TrackNumber(i);
                }
            }
            else
            {
                const String s = aud_drct_get_filename();
                m.Title(winrt::to_hstring(std::string_view(s)));
            }

            try
            {
                const QByteArray thumbnail_data = get_thumbnail_data();
                if (!thumbnail_data.isEmpty())
                {
                    InMemoryRandomAccessStream thumbnail_stream;
                    DataWriter writer(thumbnail_stream);
                    const uint8_t * begin = reinterpret_cast<const uint8_t *>(
                        thumbnail_data.constData());
                    writer.WriteBytes(winrt::array_view<const uint8_t>(
                        begin, begin + thumbnail_data.size()));
                    writer.StoreAsync().get();
                    writer.FlushAsync().get();
                    writer.DetachStream();
                    writer.DetachBuffer();
                    thumbnail_stream.Seek(0);
                    auto thumbnail =
                        RandomAccessStreamReference::CreateFromStream(
                            thumbnail_stream);
                    updater.Thumbnail(thumbnail);
                }
            }
            catch (...)
            {
                log_exception(__FUNCTION__);
            }

            updater.Update();

            m_smtc.IsEnabled(true);

            if (aud_drct_get_paused())
                m_smtc.PlaybackStatus(MediaPlaybackStatus::Paused);
            else
                m_smtc.PlaybackStatus(MediaPlaybackStatus::Playing);
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

    void on_playback_pause()
    {
        if (!ensure_smtc_inited())
            return;

        try
        {
            m_smtc.PlaybackStatus(MediaPlaybackStatus::Paused);
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

    void on_playback_unpause()
    {
        if (!ensure_smtc_inited())
            return;

        try
        {
            m_smtc.PlaybackStatus(MediaPlaybackStatus::Playing);
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

    void on_playback_seek()
    {
        if (!ensure_smtc_inited())
            return;

        try
        {
            if (aud_drct_get_paused())
                m_smtc.PlaybackStatus(MediaPlaybackStatus::Paused);
            else
                m_smtc.PlaybackStatus(MediaPlaybackStatus::Playing);
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

    void on_playback_stop()
    {
        if (!ensure_smtc_inited())
            return;

        try
        {
            m_smtc.PlaybackStatus(MediaPlaybackStatus::Stopped);
            m_smtc.IsEnabled(false);
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

private:
    QWidget * get_window() const
    {
        if (!qApp)
            return Q_NULLPTR;
        return qApp->activeWindow();
    }

    void log_exception(const char * const function) const
    {
        try
        {
            throw;
        }
        catch (const winrt::hresult_error & ex)
        {
            qWarning("Exception in %s (hresult %x)", function, ex.code().value);
        }
        catch (const std::exception & ex)
        {
            qWarning("Exception in %s (exception %s)", function, ex.what());
        }
        catch (...)
        {
            qWarning("Exception in %s (unknown exception)", function);
        }
    }

    bool ensure_smtc_inited()
    {
        if (!m_fully_inited)
            smtc_init();

        return m_fully_inited;
    }

    void smtc_init()
    {
        smtc_cleanup();

        m_window = get_window();
        if (!m_window)
            return;

        m_windowConnection = QObject::connect(m_window, &QObject::destroyed,
                                              [this] { smtc_cleanup(); });

        try
        {
            winrt::init_apartment(winrt::apartment_type::single_threaded);
            m_apartment_inited = true;
        }
        catch (...)
        {
        }

        try
        {
            auto smtcInterop = winrt::get_activation_factory<
                SystemMediaTransportControls,
                ISystemMediaTransportControlsInterop>();
            HWND hwnd = reinterpret_cast<HWND>(m_window->winId());
            HRESULT hr = smtcInterop->GetForWindow(
                hwnd, winrt::guid_of<SystemMediaTransportControls>(),
                winrt::put_abi(m_smtc));
            if (FAILED(hr))
            {
                winrt::throw_hresult(hr);
            }

            m_smtc.IsPlayEnabled(true);
            m_smtc.IsPauseEnabled(true);
            m_smtc.IsStopEnabled(true);
            m_smtc.IsPreviousEnabled(true);
            m_smtc.IsNextEnabled(true);

            m_smtc.ButtonPressed(
                [](const SystemMediaTransportControls & sender,
                   const SystemMediaTransportControlsButtonPressedEventArgs &
                       args)
                {
                    using Button = SystemMediaTransportControlsButton;
                    Q_UNUSED(sender);
                    switch (args.Button())
                    {
                    case Button::Play:
                        aud_drct_play();
                        break;
                    case Button::Pause:
                        aud_drct_pause();
                        break;
                    case Button::Stop:
                        aud_drct_stop();
                        break;
                    case Button::FastForward:
                    case Button::Next:
                        aud_drct_pl_next();
                        break;
                    case Button::Rewind:
                    case Button::Previous:
                        aud_drct_pl_prev();
                        break;
                    default:
                        break;
                    }
                });

            m_smtc.IsEnabled(false);

            m_fully_inited = true;
        }
        catch (...)
        {
            log_exception(__FUNCTION__);
        }
    }

    void smtc_cleanup()
    {
        if (m_fully_inited)
        {
            m_fully_inited = false;
        }

        if (m_smtc)
        {
            try
            {
                m_smtc.IsEnabled(false);
                m_smtc = {Q_NULLPTR};
            }
            catch (...)
            {
                log_exception(__FUNCTION__);
            }
        }

        if (m_windowConnection)
        {
            QObject::disconnect(m_windowConnection);
            m_windowConnection = {};
        }

        if (m_window)
        {
            m_window = Q_NULLPTR;
        }

        if (m_apartment_inited)
        {
            try
            {
                winrt::uninit_apartment();
            }
            catch (...)
            {
            }
            m_apartment_inited = false;
        }
    }

    QByteArray get_thumbnail_data() const
    {
        constexpr int max_ico_size = 256;
        QPixmap art = audqt::art_request_current(0, 0);
        if (art.isNull())
            art = m_window->windowIcon().pixmap(max_ico_size);
        if (art.isNull())
            art = qApp->windowIcon().pixmap(max_ico_size);
        if (art.isNull())
            return {};

        QByteArray ba;
        QBuffer buffer(&ba);
        buffer.open(QIODevice::WriteOnly);
        art.save(&buffer, "PNG");
        buffer.close();
        return ba;
    }

private:
    QWidget * m_window{Q_NULLPTR};
    QMetaObject::Connection m_windowConnection;
    bool m_apartment_inited{false};
    SystemMediaTransportControls m_smtc{Q_NULLPTR};
    bool m_fully_inited{false};
    const HookReceiver<WinSMTC> m_hooks[5]{
        {"playback ready", this, &WinSMTC::on_playback_ready},
        {"playback pause", this, &WinSMTC::on_playback_pause},
        {"playback unpause", this, &WinSMTC::on_playback_unpause},
        {"playback seek", this, &WinSMTC::on_playback_seek},
        {"playback stop", this, &WinSMTC::on_playback_stop},
    };
};

EXPORT WinSMTC aud_plugin_instance;
