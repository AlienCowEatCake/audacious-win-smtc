// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Media_1_H
#define WINRT_Windows_Media_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Media.0.h"
WINRT_EXPORT namespace winrt::Windows::Media
{
    struct WINRT_IMPL_EMPTY_BASES IAudioBuffer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioBuffer>,
        impl::require<winrt::Windows::Media::IAudioBuffer, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        IAudioBuffer(std::nullptr_t = nullptr) noexcept {}
        IAudioBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAudioFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrame>,
        impl::require<winrt::Windows::Media::IAudioFrame, winrt::Windows::Foundation::IClosable, winrt::Windows::Media::IMediaFrame>
    {
        IAudioFrame(std::nullptr_t = nullptr) noexcept {}
        IAudioFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAudioFrameFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAudioFrameFactory>
    {
        IAudioFrameFactory(std::nullptr_t = nullptr) noexcept {}
        IAudioFrameFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAutoRepeatModeChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAutoRepeatModeChangeRequestedEventArgs>
    {
        IAutoRepeatModeChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IAutoRepeatModeChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IImageDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IImageDisplayProperties>
    {
        IImageDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IImageDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaControl :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaControl>
    {
        IMediaControl(std::nullptr_t = nullptr) noexcept {}
        IMediaControl(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaExtension :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtension>
    {
        IMediaExtension(std::nullptr_t = nullptr) noexcept {}
        IMediaExtension(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaExtensionManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtensionManager>
    {
        IMediaExtensionManager(std::nullptr_t = nullptr) noexcept {}
        IMediaExtensionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaExtensionManager2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaExtensionManager2>,
        impl::require<winrt::Windows::Media::IMediaExtensionManager2, winrt::Windows::Media::IMediaExtensionManager>
    {
        IMediaExtensionManager2(std::nullptr_t = nullptr) noexcept {}
        IMediaExtensionManager2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaFrame>,
        impl::require<winrt::Windows::Media::IMediaFrame, winrt::Windows::Foundation::IClosable>
    {
        IMediaFrame(std::nullptr_t = nullptr) noexcept {}
        IMediaFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaMarker :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarker>
    {
        IMediaMarker(std::nullptr_t = nullptr) noexcept {}
        IMediaMarker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaMarkerTypesStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarkerTypesStatics>
    {
        IMediaMarkerTypesStatics(std::nullptr_t = nullptr) noexcept {}
        IMediaMarkerTypesStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaMarkers :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaMarkers>
    {
        IMediaMarkers(std::nullptr_t = nullptr) noexcept {}
        IMediaMarkers(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaProcessingTriggerDetails :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaProcessingTriggerDetails>
    {
        IMediaProcessingTriggerDetails(std::nullptr_t = nullptr) noexcept {}
        IMediaProcessingTriggerDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaTimelineController :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineController>
    {
        IMediaTimelineController(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaTimelineController2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineController2>
    {
        IMediaTimelineController2(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineController2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMediaTimelineControllerFailedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMediaTimelineControllerFailedEventArgs>
    {
        IMediaTimelineControllerFailedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IMediaTimelineControllerFailedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMusicDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties>
    {
        IMusicDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMusicDisplayProperties2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties2>
    {
        IMusicDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IMusicDisplayProperties3 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IMusicDisplayProperties3>
    {
        IMusicDisplayProperties3(std::nullptr_t = nullptr) noexcept {}
        IMusicDisplayProperties3(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPlaybackPositionChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackPositionChangeRequestedEventArgs>
    {
        IPlaybackPositionChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPlaybackPositionChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPlaybackRateChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPlaybackRateChangeRequestedEventArgs>
    {
        IPlaybackRateChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IPlaybackRateChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IShuffleEnabledChangeRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IShuffleEnabledChangeRequestedEventArgs>
    {
        IShuffleEnabledChangeRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        IShuffleEnabledChangeRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControls :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControls>
    {
        ISystemMediaTransportControls(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControls(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControls2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControls2>
    {
        ISystemMediaTransportControls2(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControls2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControlsButtonPressedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsButtonPressedEventArgs>
    {
        ISystemMediaTransportControlsButtonPressedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsButtonPressedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControlsDisplayUpdater :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsDisplayUpdater>
    {
        ISystemMediaTransportControlsDisplayUpdater(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsDisplayUpdater(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControlsPropertyChangedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsPropertyChangedEventArgs>
    {
        ISystemMediaTransportControlsPropertyChangedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsPropertyChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControlsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsStatics>
    {
        ISystemMediaTransportControlsStatics(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISystemMediaTransportControlsTimelineProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISystemMediaTransportControlsTimelineProperties>
    {
        ISystemMediaTransportControlsTimelineProperties(std::nullptr_t = nullptr) noexcept {}
        ISystemMediaTransportControlsTimelineProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoDisplayProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoDisplayProperties>
    {
        IVideoDisplayProperties(std::nullptr_t = nullptr) noexcept {}
        IVideoDisplayProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoDisplayProperties2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoDisplayProperties2>
    {
        IVideoDisplayProperties2(std::nullptr_t = nullptr) noexcept {}
        IVideoDisplayProperties2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoEffectsStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoEffectsStatics>
    {
        IVideoEffectsStatics(std::nullptr_t = nullptr) noexcept {}
        IVideoEffectsStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrame>,
        impl::require<winrt::Windows::Media::IVideoFrame, winrt::Windows::Foundation::IClosable, winrt::Windows::Media::IMediaFrame>
    {
        IVideoFrame(std::nullptr_t = nullptr) noexcept {}
        IVideoFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoFrame2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrame2>
    {
        IVideoFrame2(std::nullptr_t = nullptr) noexcept {}
        IVideoFrame2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoFrameFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrameFactory>
    {
        IVideoFrameFactory(std::nullptr_t = nullptr) noexcept {}
        IVideoFrameFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IVideoFrameStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IVideoFrameStatics>
    {
        IVideoFrameStatics(std::nullptr_t = nullptr) noexcept {}
        IVideoFrameStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
