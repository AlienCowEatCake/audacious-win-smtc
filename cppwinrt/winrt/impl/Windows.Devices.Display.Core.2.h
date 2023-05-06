// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Devices_Display_Core_2_H
#define WINRT_Windows_Devices_Display_Core_2_H
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Foundation.Numerics.2.h"
#include "winrt/impl/Windows.Graphics.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.2.h"
#include "winrt/impl/Windows.Graphics.DirectX.Direct3D11.2.h"
#include "winrt/impl/Windows.Devices.Display.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::Devices::Display::Core
{
    struct DisplayPresentationRate
    {
        winrt::Windows::Foundation::Numerics::Rational VerticalSyncRate;
        int32_t VerticalSyncsPerPresentation;
    };
    inline bool operator==(DisplayPresentationRate const& left, DisplayPresentationRate const& right) noexcept
    {
        return left.VerticalSyncRate == right.VerticalSyncRate && left.VerticalSyncsPerPresentation == right.VerticalSyncsPerPresentation;
    }
    inline bool operator!=(DisplayPresentationRate const& left, DisplayPresentationRate const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES DisplayAdapter : winrt::Windows::Devices::Display::Core::IDisplayAdapter
    {
        DisplayAdapter(std::nullptr_t) noexcept {}
        DisplayAdapter(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayAdapter(ptr, take_ownership_from_abi) {}
        static auto FromId(winrt::Windows::Graphics::DisplayAdapterId const& id);
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayDevice : winrt::Windows::Devices::Display::Core::IDisplayDevice
    {
        DisplayDevice(std::nullptr_t) noexcept {}
        DisplayDevice(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayDevice(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayFence : winrt::Windows::Devices::Display::Core::IDisplayFence
    {
        DisplayFence(std::nullptr_t) noexcept {}
        DisplayFence(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayFence(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManager : winrt::Windows::Devices::Display::Core::IDisplayManager,
        impl::require<DisplayManager, winrt::Windows::Foundation::IClosable>
    {
        DisplayManager(std::nullptr_t) noexcept {}
        DisplayManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManager(ptr, take_ownership_from_abi) {}
        static auto Create(winrt::Windows::Devices::Display::Core::DisplayManagerOptions const& options);
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManagerChangedEventArgs : winrt::Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs
    {
        DisplayManagerChangedEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerChangedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManagerDisabledEventArgs : winrt::Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs
    {
        DisplayManagerDisabledEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerDisabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManagerDisabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManagerEnabledEventArgs : winrt::Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs
    {
        DisplayManagerEnabledEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerEnabledEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManagerEnabledEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManagerPathsFailedOrInvalidatedEventArgs : winrt::Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs
    {
        DisplayManagerPathsFailedOrInvalidatedEventArgs(std::nullptr_t) noexcept {}
        DisplayManagerPathsFailedOrInvalidatedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManagerPathsFailedOrInvalidatedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayManagerResultWithState : winrt::Windows::Devices::Display::Core::IDisplayManagerResultWithState
    {
        DisplayManagerResultWithState(std::nullptr_t) noexcept {}
        DisplayManagerResultWithState(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayManagerResultWithState(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayModeInfo : winrt::Windows::Devices::Display::Core::IDisplayModeInfo
    {
        DisplayModeInfo(std::nullptr_t) noexcept {}
        DisplayModeInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayModeInfo(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayPath : winrt::Windows::Devices::Display::Core::IDisplayPath
    {
        DisplayPath(std::nullptr_t) noexcept {}
        DisplayPath(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayPath(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayPrimaryDescription : winrt::Windows::Devices::Display::Core::IDisplayPrimaryDescription
    {
        DisplayPrimaryDescription(std::nullptr_t) noexcept {}
        DisplayPrimaryDescription(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayPrimaryDescription(ptr, take_ownership_from_abi) {}
        DisplayPrimaryDescription(uint32_t width, uint32_t height, winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, winrt::Windows::Graphics::DirectX::DirectXColorSpace const& colorSpace, bool isStereo, winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription const& multisampleDescription);
        static auto CreateWithProperties(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::guid, winrt::Windows::Foundation::IInspectable>> const& extraProperties, uint32_t width, uint32_t height, winrt::Windows::Graphics::DirectX::DirectXPixelFormat const& pixelFormat, winrt::Windows::Graphics::DirectX::DirectXColorSpace const& colorSpace, bool isStereo, winrt::Windows::Graphics::DirectX::Direct3D11::Direct3DMultisampleDescription const& multisampleDescription);
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayScanout : winrt::Windows::Devices::Display::Core::IDisplayScanout
    {
        DisplayScanout(std::nullptr_t) noexcept {}
        DisplayScanout(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayScanout(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplaySource : winrt::Windows::Devices::Display::Core::IDisplaySource
    {
        DisplaySource(std::nullptr_t) noexcept {}
        DisplaySource(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplaySource(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayState : winrt::Windows::Devices::Display::Core::IDisplayState
    {
        DisplayState(std::nullptr_t) noexcept {}
        DisplayState(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayState(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayStateOperationResult : winrt::Windows::Devices::Display::Core::IDisplayStateOperationResult
    {
        DisplayStateOperationResult(std::nullptr_t) noexcept {}
        DisplayStateOperationResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayStateOperationResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplaySurface : winrt::Windows::Devices::Display::Core::IDisplaySurface
    {
        DisplaySurface(std::nullptr_t) noexcept {}
        DisplaySurface(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplaySurface(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayTarget : winrt::Windows::Devices::Display::Core::IDisplayTarget
    {
        DisplayTarget(std::nullptr_t) noexcept {}
        DisplayTarget(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayTarget(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayTask : winrt::Windows::Devices::Display::Core::IDisplayTask
    {
        DisplayTask(std::nullptr_t) noexcept {}
        DisplayTask(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayTask(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayTaskPool : winrt::Windows::Devices::Display::Core::IDisplayTaskPool
    {
        DisplayTaskPool(std::nullptr_t) noexcept {}
        DisplayTaskPool(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayTaskPool(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayView : winrt::Windows::Devices::Display::Core::IDisplayView
    {
        DisplayView(std::nullptr_t) noexcept {}
        DisplayView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayView(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DisplayWireFormat : winrt::Windows::Devices::Display::Core::IDisplayWireFormat
    {
        DisplayWireFormat(std::nullptr_t) noexcept {}
        DisplayWireFormat(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Devices::Display::Core::IDisplayWireFormat(ptr, take_ownership_from_abi) {}
        DisplayWireFormat(winrt::Windows::Devices::Display::Core::DisplayWireFormatPixelEncoding const& pixelEncoding, int32_t bitsPerChannel, winrt::Windows::Devices::Display::Core::DisplayWireFormatColorSpace const& colorSpace, winrt::Windows::Devices::Display::Core::DisplayWireFormatEotf const& eotf, winrt::Windows::Devices::Display::Core::DisplayWireFormatHdrMetadata const& hdrMetadata);
        static auto CreateWithProperties(param::iterable<winrt::Windows::Foundation::Collections::IKeyValuePair<winrt::guid, winrt::Windows::Foundation::IInspectable>> const& extraProperties, winrt::Windows::Devices::Display::Core::DisplayWireFormatPixelEncoding const& pixelEncoding, int32_t bitsPerChannel, winrt::Windows::Devices::Display::Core::DisplayWireFormatColorSpace const& colorSpace, winrt::Windows::Devices::Display::Core::DisplayWireFormatEotf const& eotf, winrt::Windows::Devices::Display::Core::DisplayWireFormatHdrMetadata const& hdrMetadata);
    };
}
#endif