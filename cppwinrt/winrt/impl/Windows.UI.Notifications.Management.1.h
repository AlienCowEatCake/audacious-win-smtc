// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_UI_Notifications_Management_1_H
#define WINRT_Windows_UI_Notifications_Management_1_H
#include "winrt/impl/Windows.UI.Notifications.Management.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Notifications::Management
{
    struct WINRT_IMPL_EMPTY_BASES IUserNotificationListener :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListener>
    {
        IUserNotificationListener(std::nullptr_t = nullptr) noexcept {}
        IUserNotificationListener(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IUserNotificationListenerStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IUserNotificationListenerStatics>
    {
        IUserNotificationListenerStatics(std::nullptr_t = nullptr) noexcept {}
        IUserNotificationListenerStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
