// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Networking_XboxLive_2_H
#define WINRT_Windows_Networking_XboxLive_2_H
#include "winrt/impl/Windows.Networking.1.h"
#include "winrt/impl/Windows.Storage.Streams.1.h"
#include "winrt/impl/Windows.Networking.XboxLive.1.h"
WINRT_EXPORT namespace winrt::Windows::Networking::XboxLive
{
    struct WINRT_IMPL_EMPTY_BASES XboxLiveDeviceAddress : winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddress
    {
        XboxLiveDeviceAddress(std::nullptr_t) noexcept {}
        XboxLiveDeviceAddress(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveDeviceAddress(ptr, take_ownership_from_abi) {}
        static auto CreateFromSnapshotBase64(param::hstring const& base64);
        static auto CreateFromSnapshotBuffer(winrt::Windows::Storage::Streams::IBuffer const& buffer);
        static auto CreateFromSnapshotBytes(array_view<uint8_t const> buffer);
        static auto GetLocal();
        [[nodiscard]] static auto MaxSnapshotBytesSize();
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveEndpointPair : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPair
    {
        XboxLiveEndpointPair(std::nullptr_t) noexcept {}
        XboxLiveEndpointPair(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPair(ptr, take_ownership_from_abi) {}
        static auto FindEndpointPairBySocketAddressBytes(array_view<uint8_t const> localSocketAddress, array_view<uint8_t const> remoteSocketAddress);
        static auto FindEndpointPairByHostNamesAndPorts(winrt::Windows::Networking::HostName const& localHostName, param::hstring const& localPort, winrt::Windows::Networking::HostName const& remoteHostName, param::hstring const& remotePort);
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveEndpointPairCreationResult : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult
    {
        XboxLiveEndpointPairCreationResult(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairCreationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairCreationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveEndpointPairStateChangedEventArgs : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs
    {
        XboxLiveEndpointPairStateChangedEventArgs(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairStateChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairStateChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveEndpointPairTemplate : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate
    {
        XboxLiveEndpointPairTemplate(std::nullptr_t) noexcept {}
        XboxLiveEndpointPairTemplate(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveEndpointPairTemplate(ptr, take_ownership_from_abi) {}
        static auto GetTemplateByName(param::hstring const& name);
        [[nodiscard]] static auto Templates();
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveInboundEndpointPairCreatedEventArgs : winrt::Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs
    {
        XboxLiveInboundEndpointPairCreatedEventArgs(std::nullptr_t) noexcept {}
        XboxLiveInboundEndpointPairCreatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveInboundEndpointPairCreatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveQualityOfServiceMeasurement : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement
    {
        XboxLiveQualityOfServiceMeasurement(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServiceMeasurement(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMeasurement(ptr, take_ownership_from_abi) {}
        XboxLiveQualityOfServiceMeasurement();
        static auto PublishPrivatePayloadBytes(array_view<uint8_t const> payload);
        static auto ClearPrivatePayload();
        [[nodiscard]] static auto MaxSimultaneousProbeConnections();
        static auto MaxSimultaneousProbeConnections(uint32_t value);
        [[nodiscard]] static auto IsSystemOutboundBandwidthConstrained();
        static auto IsSystemOutboundBandwidthConstrained(bool value);
        [[nodiscard]] static auto IsSystemInboundBandwidthConstrained();
        static auto IsSystemInboundBandwidthConstrained(bool value);
        [[nodiscard]] static auto PublishedPrivatePayload();
        static auto PublishedPrivatePayload(winrt::Windows::Storage::Streams::IBuffer const& value);
        [[nodiscard]] static auto MaxPrivatePayloadSize();
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveQualityOfServiceMetricResult : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult
    {
        XboxLiveQualityOfServiceMetricResult(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServiceMetricResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServiceMetricResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES XboxLiveQualityOfServicePrivatePayloadResult : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult
    {
        XboxLiveQualityOfServicePrivatePayloadResult(std::nullptr_t) noexcept {}
        XboxLiveQualityOfServicePrivatePayloadResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Networking::XboxLive::IXboxLiveQualityOfServicePrivatePayloadResult(ptr, take_ownership_from_abi) {}
    };
}
#endif
