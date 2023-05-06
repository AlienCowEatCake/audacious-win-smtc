// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_UserActivities_2_H
#define WINRT_Windows_ApplicationModel_UserActivities_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Security.Credentials.1.h"
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.ApplicationModel.UserActivities.1.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::UserActivities
{
    struct WINRT_IMPL_EMPTY_BASES UserActivity : winrt::Windows::ApplicationModel::UserActivities::IUserActivity,
        impl::require<UserActivity, winrt::Windows::ApplicationModel::UserActivities::IUserActivity2, winrt::Windows::ApplicationModel::UserActivities::IUserActivity3>
    {
        UserActivity(std::nullptr_t) noexcept {}
        UserActivity(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivity(ptr, take_ownership_from_abi) {}
        explicit UserActivity(param::hstring const& activityId);
        static auto TryParseFromJson(param::hstring const& json);
        static auto TryParseFromJsonArray(param::hstring const& json);
        static auto ToJsonArray(param::iterable<winrt::Windows::ApplicationModel::UserActivities::UserActivity> const& activities);
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityAttribution : winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution
    {
        UserActivityAttribution(std::nullptr_t) noexcept {}
        UserActivityAttribution(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityAttribution(ptr, take_ownership_from_abi) {}
        UserActivityAttribution();
        explicit UserActivityAttribution(winrt::Windows::Foundation::Uri const& iconUri);
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityChannel : winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel,
        impl::require<UserActivityChannel, winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel2>
    {
        UserActivityChannel(std::nullptr_t) noexcept {}
        UserActivityChannel(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityChannel(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto DisableAutoSessionCreation();
        static auto TryGetForWebAccount(winrt::Windows::Security::Credentials::WebAccount const& account);
        static auto GetForUser(winrt::Windows::System::User const& user);
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityContentInfo : winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo
    {
        UserActivityContentInfo(std::nullptr_t) noexcept {}
        UserActivityContentInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityContentInfo(ptr, take_ownership_from_abi) {}
        static auto FromJson(param::hstring const& value);
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityRequest : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest
    {
        UserActivityRequest(std::nullptr_t) noexcept {}
        UserActivityRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityRequestManager : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager
    {
        UserActivityRequestManager(std::nullptr_t) noexcept {}
        UserActivityRequestManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityRequestedEventArgs : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs
    {
        UserActivityRequestedEventArgs(std::nullptr_t) noexcept {}
        UserActivityRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivitySession : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession,
        impl::require<UserActivitySession, winrt::Windows::Foundation::IClosable>
    {
        UserActivitySession(std::nullptr_t) noexcept {}
        UserActivitySession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySession(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivitySessionHistoryItem : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem
    {
        UserActivitySessionHistoryItem(std::nullptr_t) noexcept {}
        UserActivitySessionHistoryItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivitySessionHistoryItem(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserActivityVisualElements : winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements,
        impl::require<UserActivityVisualElements, winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements2>
    {
        UserActivityVisualElements(std::nullptr_t) noexcept {}
        UserActivityVisualElements(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::ApplicationModel::UserActivities::IUserActivityVisualElements(ptr, take_ownership_from_abi) {}
    };
}
#endif
