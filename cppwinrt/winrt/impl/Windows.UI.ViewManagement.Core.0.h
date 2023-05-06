// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_UI_ViewManagement_Core_0_H
#define WINRT_Windows_UI_ViewManagement_Core_0_H
WINRT_EXPORT namespace winrt::Windows::Foundation
{
    struct EventRegistrationToken;
    struct Rect;
    template <typename TSender, typename TResult> struct WINRT_IMPL_EMPTY_BASES TypedEventHandler;
}
WINRT_EXPORT namespace winrt::Windows::UI
{
    struct UIContext;
}
WINRT_EXPORT namespace winrt::Windows::UI::ViewManagement::Core
{
    enum class CoreInputViewKind : int32_t
    {
        Default = 0,
        Keyboard = 1,
        Handwriting = 2,
        Emoji = 3,
        Symbols = 4,
    };
    enum class CoreInputViewOcclusionKind : int32_t
    {
        Docked = 0,
        Floating = 1,
        Overlay = 2,
    };
    enum class CoreInputViewXYFocusTransferDirection : int32_t
    {
        Up = 0,
        Right = 1,
        Down = 2,
        Left = 3,
    };
    struct ICoreInputView;
    struct ICoreInputView2;
    struct ICoreInputView3;
    struct ICoreInputView4;
    struct ICoreInputViewHidingEventArgs;
    struct ICoreInputViewOcclusion;
    struct ICoreInputViewOcclusionsChangedEventArgs;
    struct ICoreInputViewShowingEventArgs;
    struct ICoreInputViewStatics;
    struct ICoreInputViewStatics2;
    struct ICoreInputViewTransferringXYFocusEventArgs;
    struct IUISettingsController;
    struct IUISettingsControllerStatics;
    struct CoreInputView;
    struct CoreInputViewHidingEventArgs;
    struct CoreInputViewOcclusion;
    struct CoreInputViewOcclusionsChangedEventArgs;
    struct CoreInputViewShowingEventArgs;
    struct CoreInputViewTransferringXYFocusEventArgs;
    struct UISettingsController;
}
namespace winrt::impl
{
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputView>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputView3>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::IUISettingsController>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>{ using type = interface_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputView>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::UISettingsController>{ using type = class_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind>{ using type = enum_category; };
    template <> struct category<winrt::Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection>{ using type = enum_category; };
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputView> = L"Windows.UI.ViewManagement.Core.CoreInputView";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewHidingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusion";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionsChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewShowingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> = L"Windows.UI.ViewManagement.Core.CoreInputViewTransferringXYFocusEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::UISettingsController> = L"Windows.UI.ViewManagement.Core.UISettingsController";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewKind> = L"Windows.UI.ViewManagement.Core.CoreInputViewKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionKind> = L"Windows.UI.ViewManagement.Core.CoreInputViewOcclusionKind";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection> = L"Windows.UI.ViewManagement.Core.CoreInputViewXYFocusTransferDirection";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView> = L"Windows.UI.ViewManagement.Core.ICoreInputView";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2> = L"Windows.UI.ViewManagement.Core.ICoreInputView2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView3> = L"Windows.UI.ViewManagement.Core.ICoreInputView3";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4> = L"Windows.UI.ViewManagement.Core.ICoreInputView4";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewHidingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion> = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusion";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewOcclusionsChangedEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewShowingEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics> = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics2> = L"Windows.UI.ViewManagement.Core.ICoreInputViewStatics2";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs> = L"Windows.UI.ViewManagement.Core.ICoreInputViewTransferringXYFocusEventArgs";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::IUISettingsController> = L"Windows.UI.ViewManagement.Core.IUISettingsController";
    template <> inline constexpr auto& name_v<winrt::Windows::UI::ViewManagement::Core::IUISettingsControllerStatics> = L"Windows.UI.ViewManagement.Core.IUISettingsControllerStatics";
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView>{ 0xC770CD7A,0x7001,0x4C32,{ 0xBF,0x94,0x25,0xC1,0xF5,0x54,0xCB,0xF1 } }; // C770CD7A-7001-4C32-BF94-25C1F554CBF1
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>{ 0x0ED726C1,0xE09A,0x4AE8,{ 0xAE,0xDF,0xDF,0xA4,0x85,0x7D,0x1A,0x01 } }; // 0ED726C1-E09A-4AE8-AEDF-DFA4857D1A01
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView3>{ 0xBC941653,0x3AB9,0x4849,{ 0x8F,0x58,0x46,0xE7,0xF0,0x35,0x3C,0xFC } }; // BC941653-3AB9-4849-8F58-46E7F0353CFC
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>{ 0x002863D6,0xD9EF,0x57EB,{ 0x8C,0xEF,0x77,0xF6,0xCE,0x1B,0x7E,0xE7 } }; // 002863D6-D9EF-57EB-8CEF-77F6CE1B7EE7
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>{ 0xEADA47BD,0xBAC5,0x5336,{ 0x84,0x8D,0x41,0x08,0x35,0x84,0xDA,0xAD } }; // EADA47BD-BAC5-5336-848D-41083584DAAD
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>{ 0xCC36CE06,0x3865,0x4177,{ 0xB5,0xF5,0x8B,0x65,0xE0,0xB9,0xCE,0x84 } }; // CC36CE06-3865-4177-B5F5-8B65E0B9CE84
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>{ 0xBE1027E8,0xB3EE,0x4DF7,{ 0x95,0x54,0x89,0xCD,0xC6,0x60,0x82,0xC2 } }; // BE1027E8-B3EE-4DF7-9554-89CDC66082C2
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>{ 0xCA52261B,0xFB9E,0x5DAF,{ 0xA9,0x8C,0x26,0x2B,0x8B,0x76,0xAF,0x50 } }; // CA52261B-FB9E-5DAF-A98C-262B8B76AF50
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics>{ 0x7D9B97CD,0xEDBE,0x49CF,{ 0xA5,0x4F,0x33,0x7D,0xE0,0x52,0x90,0x7F } }; // 7D9B97CD-EDBE-49CF-A54F-337DE052907F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>{ 0x7EBC0862,0xD049,0x4E52,{ 0x87,0xB0,0x1E,0x90,0xE9,0x8C,0x49,0xED } }; // 7EBC0862-D049-4E52-87B0-1E90E98C49ED
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>{ 0x04DE169F,0xBA02,0x4850,{ 0x8B,0x55,0xD8,0x2D,0x03,0xBA,0x6D,0x7F } }; // 04DE169F-BA02-4850-8B55-D82D03BA6D7F
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::IUISettingsController>{ 0x78A51AC4,0x15C0,0x5A1B,{ 0xA7,0x5B,0xAC,0xBF,0x9C,0xB8,0xBB,0x9E } }; // 78A51AC4-15C0-5A1B-A75B-ACBF9CB8BB9E
    template <> inline constexpr guid guid_v<winrt::Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>{ 0xEB3C68CC,0xC220,0x578C,{ 0x81,0x19,0x7D,0xB3,0x24,0xED,0x26,0xA6 } }; // EB3C68CC-C220-578C-8119-7DB324ED26A6
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputView>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputView; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusion>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs>{ using type = winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs; };
    template <> struct default_interface<winrt::Windows::UI::ViewManagement::Core::UISettingsController>{ using type = winrt::Windows::UI::ViewManagement::Core::IUISettingsController; };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_OcclusionsChanged(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_OcclusionsChanged(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall GetCoreInputViewOcclusions(void**) noexcept = 0;
            virtual int32_t __stdcall TryShowPrimaryView(bool*) noexcept = 0;
            virtual int32_t __stdcall TryHidePrimaryView(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_XYFocusTransferringFromPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferringFromPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_XYFocusTransferredToPrimaryView(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_XYFocusTransferredToPrimaryView(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall TryTransferXYFocusToPrimaryView(winrt::Windows::Foundation::Rect, int32_t, bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall TryShow(bool*) noexcept = 0;
            virtual int32_t __stdcall TryShowWithKind(int32_t, bool*) noexcept = 0;
            virtual int32_t __stdcall TryHide(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall add_PrimaryViewShowing(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrimaryViewShowing(winrt::event_token) noexcept = 0;
            virtual int32_t __stdcall add_PrimaryViewHiding(void*, winrt::event_token*) noexcept = 0;
            virtual int32_t __stdcall remove_PrimaryViewHiding(winrt::event_token) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_OccludingRect(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_OcclusionKind(int32_t*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Occlusions(void**) noexcept = 0;
            virtual int32_t __stdcall get_Handled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_Handled(bool) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall TryCancel(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetForCurrentView(void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall GetForUIContext(void*, void**) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall get_Origin(winrt::Windows::Foundation::Rect*) noexcept = 0;
            virtual int32_t __stdcall get_Direction(int32_t*) noexcept = 0;
            virtual int32_t __stdcall put_TransferHandled(bool) noexcept = 0;
            virtual int32_t __stdcall get_TransferHandled(bool*) noexcept = 0;
            virtual int32_t __stdcall put_KeepPrimaryViewVisible(bool) noexcept = 0;
            virtual int32_t __stdcall get_KeepPrimaryViewVisible(bool*) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::IUISettingsController>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall SetAdvancedEffectsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetAnimationsEnabled(bool) noexcept = 0;
            virtual int32_t __stdcall SetAutoHideScrollBars(bool) noexcept = 0;
            virtual int32_t __stdcall SetMessageDuration(uint32_t) noexcept = 0;
            virtual int32_t __stdcall SetTextScaleFactor(double) noexcept = 0;
        };
    };
    template <> struct abi<winrt::Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>
    {
        struct WINRT_IMPL_NOVTABLE type : inspectable_abi
        {
            virtual int32_t __stdcall RequestDefaultAsync(void**) noexcept = 0;
        };
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView
    {
        auto OcclusionsChanged(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        using OcclusionsChanged_revoker = impl::event_revoker<winrt::Windows::UI::ViewManagement::Core::ICoreInputView, &impl::abi_t<winrt::Windows::UI::ViewManagement::Core::ICoreInputView>::remove_OcclusionsChanged>;
        [[nodiscard]] auto OcclusionsChanged(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewOcclusionsChangedEventArgs> const& handler) const;
        auto OcclusionsChanged(winrt::event_token const& token) const noexcept;
        auto GetCoreInputViewOcclusions() const;
        auto TryShowPrimaryView() const;
        auto TryHidePrimaryView() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputView>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView2
    {
        auto XYFocusTransferringFromPrimaryView(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        using XYFocusTransferringFromPrimaryView_revoker = impl::event_revoker<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferringFromPrimaryView>;
        [[nodiscard]] auto XYFocusTransferringFromPrimaryView(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewTransferringXYFocusEventArgs> const& handler) const;
        auto XYFocusTransferringFromPrimaryView(winrt::event_token const& token) const noexcept;
        auto XYFocusTransferredToPrimaryView(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::Foundation::IInspectable> const& handler) const;
        using XYFocusTransferredToPrimaryView_revoker = impl::event_revoker<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2, &impl::abi_t<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>::remove_XYFocusTransferredToPrimaryView>;
        [[nodiscard]] auto XYFocusTransferredToPrimaryView(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::Foundation::IInspectable> const& handler) const;
        auto XYFocusTransferredToPrimaryView(winrt::event_token const& token) const noexcept;
        auto TryTransferXYFocusToPrimaryView(winrt::Windows::Foundation::Rect const& origin, winrt::Windows::UI::ViewManagement::Core::CoreInputViewXYFocusTransferDirection const& direction) const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputView2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView3
    {
        auto TryShow() const;
        auto TryShow(winrt::Windows::UI::ViewManagement::Core::CoreInputViewKind const& type) const;
        auto TryHide() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputView3>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView3<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputView4
    {
        auto PrimaryViewShowing(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs> const& handler) const;
        using PrimaryViewShowing_revoker = impl::event_revoker<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4, &impl::abi_t<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>::remove_PrimaryViewShowing>;
        [[nodiscard]] auto PrimaryViewShowing(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewShowingEventArgs> const& handler) const;
        auto PrimaryViewShowing(winrt::event_token const& token) const noexcept;
        auto PrimaryViewHiding(winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs> const& handler) const;
        using PrimaryViewHiding_revoker = impl::event_revoker<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4, &impl::abi_t<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>::remove_PrimaryViewHiding>;
        [[nodiscard]] auto PrimaryViewHiding(auto_revoke_t, winrt::Windows::Foundation::TypedEventHandler<winrt::Windows::UI::ViewManagement::Core::CoreInputView, winrt::Windows::UI::ViewManagement::Core::CoreInputViewHidingEventArgs> const& handler) const;
        auto PrimaryViewHiding(winrt::event_token const& token) const noexcept;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputView4>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputView4<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewHidingEventArgs
    {
        auto TryCancel() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewHidingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewHidingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion
    {
        [[nodiscard]] auto OccludingRect() const;
        [[nodiscard]] auto OcclusionKind() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusion>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusion<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs
    {
        [[nodiscard]] auto Occlusions() const;
        [[nodiscard]] auto Handled() const;
        auto Handled(bool value) const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewOcclusionsChangedEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewOcclusionsChangedEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewShowingEventArgs
    {
        auto TryCancel() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewShowingEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewShowingEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics
    {
        auto GetForCurrentView() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2
    {
        auto GetForUIContext(winrt::Windows::UI::UIContext const& context) const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewStatics2>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewStatics2<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs
    {
        [[nodiscard]] auto Origin() const;
        [[nodiscard]] auto Direction() const;
        auto TransferHandled(bool value) const;
        [[nodiscard]] auto TransferHandled() const;
        auto KeepPrimaryViewVisible(bool value) const;
        [[nodiscard]] auto KeepPrimaryViewVisible() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::ICoreInputViewTransferringXYFocusEventArgs>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_ICoreInputViewTransferringXYFocusEventArgs<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_IUISettingsController
    {
        auto SetAdvancedEffectsEnabled(bool value) const;
        auto SetAnimationsEnabled(bool value) const;
        auto SetAutoHideScrollBars(bool value) const;
        auto SetMessageDuration(uint32_t value) const;
        auto SetTextScaleFactor(double value) const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::IUISettingsController>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_IUISettingsController<D>;
    };
    template <typename D>
    struct consume_Windows_UI_ViewManagement_Core_IUISettingsControllerStatics
    {
        auto RequestDefaultAsync() const;
    };
    template <> struct consume<winrt::Windows::UI::ViewManagement::Core::IUISettingsControllerStatics>
    {
        template <typename D> using type = consume_Windows_UI_ViewManagement_Core_IUISettingsControllerStatics<D>;
    };
}
#endif
