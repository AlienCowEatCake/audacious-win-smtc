// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_System_2_H
#define WINRT_Windows_System_2_H
#include "winrt/impl/Windows.Foundation.1.h"
#include "winrt/impl/Windows.Foundation.Collections.1.h"
#include "winrt/impl/Windows.Storage.1.h"
#include "winrt/impl/Windows.System.RemoteSystems.1.h"
#include "winrt/impl/Windows.System.1.h"
WINRT_EXPORT namespace winrt::Windows::System
{
    struct DispatcherQueueHandler : winrt::Windows::Foundation::IUnknown
    {
        DispatcherQueueHandler(std::nullptr_t = nullptr) noexcept {}
        DispatcherQueueHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> DispatcherQueueHandler(L lambda);
        template <typename F> DispatcherQueueHandler(F* function);
        template <typename O, typename M> DispatcherQueueHandler(O* object, M method);
        template <typename O, typename M> DispatcherQueueHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> DispatcherQueueHandler(weak_ref<O>&& object, M method);
        auto operator()() const;
    };
    struct WINRT_IMPL_EMPTY_BASES AppActivationResult : winrt::Windows::System::IAppActivationResult
    {
        AppActivationResult(std::nullptr_t) noexcept {}
        AppActivationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppActivationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppDiagnosticInfo : winrt::Windows::System::IAppDiagnosticInfo,
        impl::require<AppDiagnosticInfo, winrt::Windows::System::IAppDiagnosticInfo2, winrt::Windows::System::IAppDiagnosticInfo3>
    {
        AppDiagnosticInfo(std::nullptr_t) noexcept {}
        AppDiagnosticInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppDiagnosticInfo(ptr, take_ownership_from_abi) {}
        static auto RequestInfoAsync();
        static auto CreateWatcher();
        static auto RequestAccessAsync();
        static auto RequestInfoForPackageAsync(param::hstring const& packageFamilyName);
        static auto RequestInfoForAppAsync();
        static auto RequestInfoForAppAsync(param::hstring const& appUserModelId);
    };
    struct WINRT_IMPL_EMPTY_BASES AppDiagnosticInfoWatcher : winrt::Windows::System::IAppDiagnosticInfoWatcher
    {
        AppDiagnosticInfoWatcher(std::nullptr_t) noexcept {}
        AppDiagnosticInfoWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppDiagnosticInfoWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppDiagnosticInfoWatcherEventArgs : winrt::Windows::System::IAppDiagnosticInfoWatcherEventArgs
    {
        AppDiagnosticInfoWatcherEventArgs(std::nullptr_t) noexcept {}
        AppDiagnosticInfoWatcherEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppDiagnosticInfoWatcherEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppExecutionStateChangeResult : winrt::Windows::System::IAppExecutionStateChangeResult
    {
        AppExecutionStateChangeResult(std::nullptr_t) noexcept {}
        AppExecutionStateChangeResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppExecutionStateChangeResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppMemoryReport : winrt::Windows::System::IAppMemoryReport,
        impl::require<AppMemoryReport, winrt::Windows::System::IAppMemoryReport2>
    {
        AppMemoryReport(std::nullptr_t) noexcept {}
        AppMemoryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppMemoryReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppMemoryUsageLimitChangingEventArgs : winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs
    {
        AppMemoryUsageLimitChangingEventArgs(std::nullptr_t) noexcept {}
        AppMemoryUsageLimitChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppMemoryUsageLimitChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupBackgroundTaskReport : winrt::Windows::System::IAppResourceGroupBackgroundTaskReport
    {
        AppResourceGroupBackgroundTaskReport(std::nullptr_t) noexcept {}
        AppResourceGroupBackgroundTaskReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupBackgroundTaskReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupInfo : winrt::Windows::System::IAppResourceGroupInfo,
        impl::require<AppResourceGroupInfo, winrt::Windows::System::IAppResourceGroupInfo2>
    {
        AppResourceGroupInfo(std::nullptr_t) noexcept {}
        AppResourceGroupInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupInfoWatcher : winrt::Windows::System::IAppResourceGroupInfoWatcher
    {
        AppResourceGroupInfoWatcher(std::nullptr_t) noexcept {}
        AppResourceGroupInfoWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupInfoWatcher(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupInfoWatcherEventArgs : winrt::Windows::System::IAppResourceGroupInfoWatcherEventArgs
    {
        AppResourceGroupInfoWatcherEventArgs(std::nullptr_t) noexcept {}
        AppResourceGroupInfoWatcherEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupInfoWatcherEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupInfoWatcherExecutionStateChangedEventArgs : winrt::Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs
    {
        AppResourceGroupInfoWatcherExecutionStateChangedEventArgs(std::nullptr_t) noexcept {}
        AppResourceGroupInfoWatcherExecutionStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupInfoWatcherExecutionStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupMemoryReport : winrt::Windows::System::IAppResourceGroupMemoryReport
    {
        AppResourceGroupMemoryReport(std::nullptr_t) noexcept {}
        AppResourceGroupMemoryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupMemoryReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppResourceGroupStateReport : winrt::Windows::System::IAppResourceGroupStateReport
    {
        AppResourceGroupStateReport(std::nullptr_t) noexcept {}
        AppResourceGroupStateReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppResourceGroupStateReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppUriHandlerHost : winrt::Windows::System::IAppUriHandlerHost
    {
        AppUriHandlerHost(std::nullptr_t) noexcept {}
        AppUriHandlerHost(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppUriHandlerHost(ptr, take_ownership_from_abi) {}
        AppUriHandlerHost();
        explicit AppUriHandlerHost(param::hstring const& name);
    };
    struct WINRT_IMPL_EMPTY_BASES AppUriHandlerRegistration : winrt::Windows::System::IAppUriHandlerRegistration
    {
        AppUriHandlerRegistration(std::nullptr_t) noexcept {}
        AppUriHandlerRegistration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppUriHandlerRegistration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES AppUriHandlerRegistrationManager : winrt::Windows::System::IAppUriHandlerRegistrationManager
    {
        AppUriHandlerRegistrationManager(std::nullptr_t) noexcept {}
        AppUriHandlerRegistrationManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IAppUriHandlerRegistrationManager(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(winrt::Windows::System::User const& user);
    };
    struct DateTimeSettings
    {
        DateTimeSettings() = delete;
        static auto SetSystemDateTime(winrt::Windows::Foundation::DateTime const& utcDateTime);
    };
    struct WINRT_IMPL_EMPTY_BASES DispatcherQueue : winrt::Windows::System::IDispatcherQueue,
        impl::require<DispatcherQueue, winrt::Windows::System::IDispatcherQueue2>
    {
        DispatcherQueue(std::nullptr_t) noexcept {}
        DispatcherQueue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IDispatcherQueue(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentThread();
    };
    struct WINRT_IMPL_EMPTY_BASES DispatcherQueueController : winrt::Windows::System::IDispatcherQueueController
    {
        DispatcherQueueController(std::nullptr_t) noexcept {}
        DispatcherQueueController(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IDispatcherQueueController(ptr, take_ownership_from_abi) {}
        static auto CreateOnDedicatedThread();
    };
    struct WINRT_IMPL_EMPTY_BASES DispatcherQueueShutdownStartingEventArgs : winrt::Windows::System::IDispatcherQueueShutdownStartingEventArgs
    {
        DispatcherQueueShutdownStartingEventArgs(std::nullptr_t) noexcept {}
        DispatcherQueueShutdownStartingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IDispatcherQueueShutdownStartingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DispatcherQueueTimer : winrt::Windows::System::IDispatcherQueueTimer
    {
        DispatcherQueueTimer(std::nullptr_t) noexcept {}
        DispatcherQueueTimer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IDispatcherQueueTimer(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES FolderLauncherOptions : winrt::Windows::System::IFolderLauncherOptions,
        impl::require<FolderLauncherOptions, winrt::Windows::System::ILauncherViewOptions>
    {
        FolderLauncherOptions(std::nullptr_t) noexcept {}
        FolderLauncherOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IFolderLauncherOptions(ptr, take_ownership_from_abi) {}
        FolderLauncherOptions();
    };
    struct KnownUserProperties
    {
        KnownUserProperties() = delete;
        [[nodiscard]] static auto DisplayName();
        [[nodiscard]] static auto FirstName();
        [[nodiscard]] static auto LastName();
        [[nodiscard]] static auto ProviderName();
        [[nodiscard]] static auto AccountName();
        [[nodiscard]] static auto GuestHost();
        [[nodiscard]] static auto PrincipalName();
        [[nodiscard]] static auto DomainName();
        [[nodiscard]] static auto SessionInitiationProtocolUri();
    };
    struct WINRT_IMPL_EMPTY_BASES LaunchUriResult : winrt::Windows::System::ILaunchUriResult
    {
        LaunchUriResult(std::nullptr_t) noexcept {}
        LaunchUriResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::ILaunchUriResult(ptr, take_ownership_from_abi) {}
    };
    struct Launcher
    {
        Launcher() = delete;
        static auto LaunchFileAsync(winrt::Windows::Storage::IStorageFile const& file);
        static auto LaunchFileAsync(winrt::Windows::Storage::IStorageFile const& file, winrt::Windows::System::LauncherOptions const& options);
        static auto LaunchUriAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto LaunchUriAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options);
        static auto LaunchUriForResultsAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options);
        static auto LaunchUriForResultsAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options, winrt::Windows::Foundation::Collections::ValueSet const& inputData);
        static auto LaunchUriAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options, winrt::Windows::Foundation::Collections::ValueSet const& inputData);
        static auto QueryUriSupportAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LaunchQuerySupportType const& launchQuerySupportType);
        static auto QueryUriSupportAsync(winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LaunchQuerySupportType const& launchQuerySupportType, param::hstring const& packageFamilyName);
        static auto QueryFileSupportAsync(winrt::Windows::Storage::StorageFile const& file);
        static auto QueryFileSupportAsync(winrt::Windows::Storage::StorageFile const& file, param::hstring const& packageFamilyName);
        static auto FindUriSchemeHandlersAsync(param::hstring const& scheme);
        static auto FindUriSchemeHandlersAsync(param::hstring const& scheme, winrt::Windows::System::LaunchQuerySupportType const& launchQuerySupportType);
        static auto FindFileHandlersAsync(param::hstring const& extension);
        static auto LaunchFolderAsync(winrt::Windows::Storage::IStorageFolder const& folder);
        static auto LaunchFolderAsync(winrt::Windows::Storage::IStorageFolder const& folder, winrt::Windows::System::FolderLauncherOptions const& options);
        static auto QueryAppUriSupportAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto QueryAppUriSupportAsync(winrt::Windows::Foundation::Uri const& uri, param::hstring const& packageFamilyName);
        static auto FindAppUriHandlersAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto LaunchUriForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Foundation::Uri const& uri);
        static auto LaunchUriForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options);
        static auto LaunchUriForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options, winrt::Windows::Foundation::Collections::ValueSet const& inputData);
        static auto LaunchUriForResultsForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options);
        static auto LaunchUriForResultsForUserAsync(winrt::Windows::System::User const& user, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::LauncherOptions const& options, winrt::Windows::Foundation::Collections::ValueSet const& inputData);
        static auto LaunchFolderPathAsync(param::hstring const& path);
        static auto LaunchFolderPathAsync(param::hstring const& path, winrt::Windows::System::FolderLauncherOptions const& options);
        static auto LaunchFolderPathForUserAsync(winrt::Windows::System::User const& user, param::hstring const& path);
        static auto LaunchFolderPathForUserAsync(winrt::Windows::System::User const& user, param::hstring const& path, winrt::Windows::System::FolderLauncherOptions const& options);
    };
    struct WINRT_IMPL_EMPTY_BASES LauncherOptions : winrt::Windows::System::ILauncherOptions,
        impl::require<LauncherOptions, winrt::Windows::System::ILauncherOptions2, winrt::Windows::System::ILauncherOptions3, winrt::Windows::System::ILauncherOptions4, winrt::Windows::System::ILauncherViewOptions>
    {
        LauncherOptions(std::nullptr_t) noexcept {}
        LauncherOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::ILauncherOptions(ptr, take_ownership_from_abi) {}
        LauncherOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES LauncherUIOptions : winrt::Windows::System::ILauncherUIOptions
    {
        LauncherUIOptions(std::nullptr_t) noexcept {}
        LauncherUIOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::ILauncherUIOptions(ptr, take_ownership_from_abi) {}
    };
    struct MemoryManager
    {
        MemoryManager() = delete;
        [[nodiscard]] static auto AppMemoryUsage();
        [[nodiscard]] static auto AppMemoryUsageLimit();
        [[nodiscard]] static auto AppMemoryUsageLevel();
        static auto AppMemoryUsageIncreased(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using AppMemoryUsageIncreased_revoker = impl::factory_event_revoker<winrt::Windows::System::IMemoryManagerStatics, &impl::abi_t<winrt::Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageIncreased>;
        [[nodiscard]] static auto AppMemoryUsageIncreased(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto AppMemoryUsageIncreased(winrt::event_token const& token);
        static auto AppMemoryUsageDecreased(winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        using AppMemoryUsageDecreased_revoker = impl::factory_event_revoker<winrt::Windows::System::IMemoryManagerStatics, &impl::abi_t<winrt::Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageDecreased>;
        [[nodiscard]] static auto AppMemoryUsageDecreased(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::Foundation::IInspectable> const& handler);
        static auto AppMemoryUsageDecreased(winrt::event_token const& token);
        static auto AppMemoryUsageLimitChanging(winrt::Windows::Foundation::EventHandler<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler);
        using AppMemoryUsageLimitChanging_revoker = impl::factory_event_revoker<winrt::Windows::System::IMemoryManagerStatics, &impl::abi_t<winrt::Windows::System::IMemoryManagerStatics>::remove_AppMemoryUsageLimitChanging>;
        [[nodiscard]] static auto AppMemoryUsageLimitChanging(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::System::AppMemoryUsageLimitChangingEventArgs> const& handler);
        static auto AppMemoryUsageLimitChanging(winrt::event_token const& token);
        static auto GetAppMemoryReport();
        static auto GetProcessMemoryReport();
        static auto TrySetAppMemoryUsageLimit(uint64_t value);
        [[nodiscard]] static auto ExpectedAppMemoryUsageLimit();
    };
    struct ProcessLauncher
    {
        ProcessLauncher() = delete;
        static auto RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args);
        static auto RunToCompletionAsync(param::hstring const& fileName, param::hstring const& args, winrt::Windows::System::ProcessLauncherOptions const& options);
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessLauncherOptions : winrt::Windows::System::IProcessLauncherOptions
    {
        ProcessLauncherOptions(std::nullptr_t) noexcept {}
        ProcessLauncherOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IProcessLauncherOptions(ptr, take_ownership_from_abi) {}
        ProcessLauncherOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessLauncherResult : winrt::Windows::System::IProcessLauncherResult
    {
        ProcessLauncherResult(std::nullptr_t) noexcept {}
        ProcessLauncherResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IProcessLauncherResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessMemoryReport : winrt::Windows::System::IProcessMemoryReport
    {
        ProcessMemoryReport(std::nullptr_t) noexcept {}
        ProcessMemoryReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IProcessMemoryReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProtocolForResultsOperation : winrt::Windows::System::IProtocolForResultsOperation
    {
        ProtocolForResultsOperation(std::nullptr_t) noexcept {}
        ProtocolForResultsOperation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IProtocolForResultsOperation(ptr, take_ownership_from_abi) {}
    };
    struct RemoteLauncher
    {
        RemoteLauncher() = delete;
        static auto LaunchUriAsync(winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, winrt::Windows::Foundation::Uri const& uri);
        static auto LaunchUriAsync(winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::RemoteLauncherOptions const& options);
        static auto LaunchUriAsync(winrt::Windows::System::RemoteSystems::RemoteSystemConnectionRequest const& remoteSystemConnectionRequest, winrt::Windows::Foundation::Uri const& uri, winrt::Windows::System::RemoteLauncherOptions const& options, winrt::Windows::Foundation::Collections::ValueSet const& inputData);
    };
    struct WINRT_IMPL_EMPTY_BASES RemoteLauncherOptions : winrt::Windows::System::IRemoteLauncherOptions
    {
        RemoteLauncherOptions(std::nullptr_t) noexcept {}
        RemoteLauncherOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IRemoteLauncherOptions(ptr, take_ownership_from_abi) {}
        RemoteLauncherOptions();
    };
    struct ShutdownManager
    {
        ShutdownManager() = delete;
        static auto BeginShutdown(winrt::Windows::System::ShutdownKind const& shutdownKind, winrt::Windows::Foundation::TimeSpan const& timeout);
        static auto CancelShutdown();
        static auto IsPowerStateSupported(winrt::Windows::System::PowerState const& powerState);
        static auto EnterPowerState(winrt::Windows::System::PowerState const& powerState);
        static auto EnterPowerState(winrt::Windows::System::PowerState const& powerState, winrt::Windows::Foundation::TimeSpan const& wakeUpAfter);
    };
    struct TimeZoneSettings
    {
        TimeZoneSettings() = delete;
        [[nodiscard]] static auto CurrentTimeZoneDisplayName();
        [[nodiscard]] static auto SupportedTimeZoneDisplayNames();
        [[nodiscard]] static auto CanChangeTimeZone();
        static auto ChangeTimeZoneByDisplayName(param::hstring const& timeZoneDisplayName);
        static auto AutoUpdateTimeZoneAsync(winrt::Windows::Foundation::TimeSpan const& timeout);
    };
    struct WINRT_IMPL_EMPTY_BASES User : winrt::Windows::System::IUser
    {
        User(std::nullptr_t) noexcept {}
        User(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUser(ptr, take_ownership_from_abi) {}
        static auto CreateWatcher();
        static auto FindAllAsync();
        static auto FindAllAsync(winrt::Windows::System::UserType const& type);
        static auto FindAllAsync(winrt::Windows::System::UserType const& type, winrt::Windows::System::UserAuthenticationStatus const& status);
        static auto GetFromId(param::hstring const& nonRoamableId);
    };
    struct WINRT_IMPL_EMPTY_BASES UserAuthenticationStatusChangeDeferral : winrt::Windows::System::IUserAuthenticationStatusChangeDeferral
    {
        UserAuthenticationStatusChangeDeferral(std::nullptr_t) noexcept {}
        UserAuthenticationStatusChangeDeferral(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserAuthenticationStatusChangeDeferral(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserAuthenticationStatusChangingEventArgs : winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs
    {
        UserAuthenticationStatusChangingEventArgs(std::nullptr_t) noexcept {}
        UserAuthenticationStatusChangingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserAuthenticationStatusChangingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserChangedEventArgs : winrt::Windows::System::IUserChangedEventArgs,
        impl::require<UserChangedEventArgs, winrt::Windows::System::IUserChangedEventArgs2>
    {
        UserChangedEventArgs(std::nullptr_t) noexcept {}
        UserChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct UserDeviceAssociation
    {
        UserDeviceAssociation() = delete;
        static auto FindUserFromDeviceId(param::hstring const& deviceId);
        static auto UserDeviceAssociationChanged(winrt::Windows::Foundation::EventHandler<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> const& handler);
        using UserDeviceAssociationChanged_revoker = impl::factory_event_revoker<winrt::Windows::System::IUserDeviceAssociationStatics, &impl::abi_t<winrt::Windows::System::IUserDeviceAssociationStatics>::remove_UserDeviceAssociationChanged>;
        [[nodiscard]] static auto UserDeviceAssociationChanged(auto_revoke_t, winrt::Windows::Foundation::EventHandler<winrt::Windows::System::UserDeviceAssociationChangedEventArgs> const& handler);
        static auto UserDeviceAssociationChanged(winrt::event_token const& token);
    };
    struct WINRT_IMPL_EMPTY_BASES UserDeviceAssociationChangedEventArgs : winrt::Windows::System::IUserDeviceAssociationChangedEventArgs
    {
        UserDeviceAssociationChangedEventArgs(std::nullptr_t) noexcept {}
        UserDeviceAssociationChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserDeviceAssociationChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES UserPicker : winrt::Windows::System::IUserPicker
    {
        UserPicker(std::nullptr_t) noexcept {}
        UserPicker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserPicker(ptr, take_ownership_from_abi) {}
        UserPicker();
        static auto IsSupported();
    };
    struct WINRT_IMPL_EMPTY_BASES UserWatcher : winrt::Windows::System::IUserWatcher
    {
        UserWatcher(std::nullptr_t) noexcept {}
        UserWatcher(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::IUserWatcher(ptr, take_ownership_from_abi) {}
    };
}
#endif
