// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Networking_Connectivity_2_H
#define WINRT_Windows_Networking_Connectivity_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Networking.2.h"
#include "winrt/impl/Windows.Networking.Connectivity.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::Connectivity
{
    struct NetworkStatusChangedEventHandler : winrt::Windows::Foundation::IUnknown
    {
        NetworkStatusChangedEventHandler(std::nullptr_t = nullptr) noexcept {}
        NetworkStatusChangedEventHandler(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IUnknown(ptr, take_ownership_from_abi) {}
        template <typename L> NetworkStatusChangedEventHandler(L lambda);
        template <typename F> NetworkStatusChangedEventHandler(F* function);
        template <typename O, typename M> NetworkStatusChangedEventHandler(O* object, M method);
        template <typename O, typename M> NetworkStatusChangedEventHandler(com_ptr<O>&& object, M method);
        template <typename O, typename M> NetworkStatusChangedEventHandler(weak_ref<O>&& object, M method);
        auto operator()(winrt::Windows::Foundation::IInspectable const& sender) const;
    };
    struct NetworkUsageStates
    {
        winrt::Windows::Networking::Connectivity::TriStates Roaming;
        winrt::Windows::Networking::Connectivity::TriStates Shared;
    };
    inline bool operator==(NetworkUsageStates const& left, NetworkUsageStates const& right) noexcept
    {
        return left.Roaming == right.Roaming && left.Shared == right.Shared;
    }
    inline bool operator!=(NetworkUsageStates const& left, NetworkUsageStates const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES AttributedNetworkUsage : winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage
    {
        AttributedNetworkUsage(std::nullptr_t) noexcept {}
        AttributedNetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IAttributedNetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CellularApnContext : winrt::Windows::Networking::Connectivity::ICellularApnContext,
        impl::require<CellularApnContext, winrt::Windows::Networking::Connectivity::ICellularApnContext2>
    {
        CellularApnContext(std::nullptr_t) noexcept {}
        CellularApnContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::ICellularApnContext(ptr, take_ownership_from_abi) {}
        CellularApnContext();
    };
    struct WINRT_IMPL_EMPTY_BASES ConnectionCost : winrt::Windows::Networking::Connectivity::IConnectionCost,
        impl::require<ConnectionCost, winrt::Windows::Networking::Connectivity::IConnectionCost2>
    {
        ConnectionCost(std::nullptr_t) noexcept {}
        ConnectionCost(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IConnectionCost(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConnectionProfile : winrt::Windows::Networking::Connectivity::IConnectionProfile,
        impl::require<ConnectionProfile, winrt::Windows::Networking::Connectivity::IConnectionProfile2, winrt::Windows::Networking::Connectivity::IConnectionProfile3, winrt::Windows::Networking::Connectivity::IConnectionProfile4, winrt::Windows::Networking::Connectivity::IConnectionProfile5, winrt::Windows::Networking::Connectivity::IConnectionProfile6>
    {
        ConnectionProfile(std::nullptr_t) noexcept {}
        ConnectionProfile(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IConnectionProfile(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConnectionProfileFilter : winrt::Windows::Networking::Connectivity::IConnectionProfileFilter,
        impl::require<ConnectionProfileFilter, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter2, winrt::Windows::Networking::Connectivity::IConnectionProfileFilter3>
    {
        ConnectionProfileFilter(std::nullptr_t) noexcept {}
        ConnectionProfileFilter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IConnectionProfileFilter(ptr, take_ownership_from_abi) {}
        ConnectionProfileFilter();
    };
    struct WINRT_IMPL_EMPTY_BASES ConnectionSession : winrt::Windows::Networking::Connectivity::IConnectionSession
    {
        ConnectionSession(std::nullptr_t) noexcept {}
        ConnectionSession(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IConnectionSession(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ConnectivityInterval : winrt::Windows::Networking::Connectivity::IConnectivityInterval
    {
        ConnectivityInterval(std::nullptr_t) noexcept {}
        ConnectivityInterval(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IConnectivityInterval(ptr, take_ownership_from_abi) {}
    };
    struct ConnectivityManager
    {
        ConnectivityManager() = delete;
        static auto AcquireConnectionAsync(winrt::Windows::Networking::Connectivity::CellularApnContext const& cellularApnContext);
        static auto AddHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy);
        static auto RemoveHttpRoutePolicy(winrt::Windows::Networking::Connectivity::RoutePolicy const& routePolicy);
    };
    struct WINRT_IMPL_EMPTY_BASES DataPlanStatus : winrt::Windows::Networking::Connectivity::IDataPlanStatus
    {
        DataPlanStatus(std::nullptr_t) noexcept {}
        DataPlanStatus(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IDataPlanStatus(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DataPlanUsage : winrt::Windows::Networking::Connectivity::IDataPlanUsage
    {
        DataPlanUsage(std::nullptr_t) noexcept {}
        DataPlanUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IDataPlanUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DataUsage : winrt::Windows::Networking::Connectivity::IDataUsage
    {
        DataUsage(std::nullptr_t) noexcept {}
        DataUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IDataUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPInformation : winrt::Windows::Networking::Connectivity::IIPInformation
    {
        IPInformation(std::nullptr_t) noexcept {}
        IPInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IIPInformation(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES LanIdentifier : winrt::Windows::Networking::Connectivity::ILanIdentifier
    {
        LanIdentifier(std::nullptr_t) noexcept {}
        LanIdentifier(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::ILanIdentifier(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES LanIdentifierData : winrt::Windows::Networking::Connectivity::ILanIdentifierData
    {
        LanIdentifierData(std::nullptr_t) noexcept {}
        LanIdentifierData(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::ILanIdentifierData(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES NetworkAdapter : winrt::Windows::Networking::Connectivity::INetworkAdapter
    {
        NetworkAdapter(std::nullptr_t) noexcept {}
        NetworkAdapter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::INetworkAdapter(ptr, take_ownership_from_abi) {}
    };
    struct NetworkInformation
    {
        NetworkInformation() = delete;
        static auto GetConnectionProfiles();
        static auto GetInternetConnectionProfile();
        static auto GetLanIdentifiers();
        static auto GetHostNames();
        static auto GetProxyConfigurationAsync(winrt::Windows::Foundation::Uri const& uri);
        static auto GetSortedEndpointPairs(param::iterable<winrt::Windows::Networking::EndpointPair> const& destinationList, winrt::Windows::Networking::HostNameSortOptions const& sortOptions);
        static auto NetworkStatusChanged(winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler);
        using NetworkStatusChanged_revoker = impl::factory_event_revoker<winrt::Windows::Networking::Connectivity::INetworkInformationStatics, &impl::abi_t<winrt::Windows::Networking::Connectivity::INetworkInformationStatics>::remove_NetworkStatusChanged>;
        [[nodiscard]] static auto NetworkStatusChanged(auto_revoke_t, winrt::Windows::Networking::Connectivity::NetworkStatusChangedEventHandler const& networkStatusHandler);
        static auto NetworkStatusChanged(winrt::event_token const& eventCookie);
        static auto FindConnectionProfilesAsync(winrt::Windows::Networking::Connectivity::ConnectionProfileFilter const& pProfileFilter);
    };
    struct WINRT_IMPL_EMPTY_BASES NetworkItem : winrt::Windows::Networking::Connectivity::INetworkItem
    {
        NetworkItem(std::nullptr_t) noexcept {}
        NetworkItem(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::INetworkItem(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES NetworkSecuritySettings : winrt::Windows::Networking::Connectivity::INetworkSecuritySettings
    {
        NetworkSecuritySettings(std::nullptr_t) noexcept {}
        NetworkSecuritySettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::INetworkSecuritySettings(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES NetworkStateChangeEventDetails : winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails,
        impl::require<NetworkStateChangeEventDetails, winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails2>
    {
        NetworkStateChangeEventDetails(std::nullptr_t) noexcept {}
        NetworkStateChangeEventDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::INetworkStateChangeEventDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES NetworkUsage : winrt::Windows::Networking::Connectivity::INetworkUsage
    {
        NetworkUsage(std::nullptr_t) noexcept {}
        NetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::INetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProviderNetworkUsage : winrt::Windows::Networking::Connectivity::IProviderNetworkUsage
    {
        ProviderNetworkUsage(std::nullptr_t) noexcept {}
        ProviderNetworkUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IProviderNetworkUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProxyConfiguration : winrt::Windows::Networking::Connectivity::IProxyConfiguration
    {
        ProxyConfiguration(std::nullptr_t) noexcept {}
        ProxyConfiguration(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IProxyConfiguration(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RoutePolicy : winrt::Windows::Networking::Connectivity::IRoutePolicy
    {
        RoutePolicy(std::nullptr_t) noexcept {}
        RoutePolicy(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IRoutePolicy(ptr, take_ownership_from_abi) {}
        RoutePolicy(winrt::Windows::Networking::Connectivity::ConnectionProfile const& connectionProfile, winrt::Windows::Networking::HostName const& hostName, winrt::Windows::Networking::DomainNameType const& type);
    };
    struct WINRT_IMPL_EMPTY_BASES WlanConnectionProfileDetails : winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails
    {
        WlanConnectionProfileDetails(std::nullptr_t) noexcept {}
        WlanConnectionProfileDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IWlanConnectionProfileDetails(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES WwanConnectionProfileDetails : winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails,
        impl::require<WwanConnectionProfileDetails, winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails2>
    {
        WwanConnectionProfileDetails(std::nullptr_t) noexcept {}
        WwanConnectionProfileDetails(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::Connectivity::IWwanConnectionProfileDetails(ptr, take_ownership_from_abi) {}
    };
}
#endif
