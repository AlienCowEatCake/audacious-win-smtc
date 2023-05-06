// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Perception_Spatial_Preview_2_H
#define WINRT_Windows_Perception_Spatial_Preview_2_H
#include "winrt/impl/Windows.Foundation.Numerics.1.h"
#include "winrt/impl/Windows.Perception.Spatial.1.h"
#include "winrt/impl/Windows.Perception.Spatial.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Perception::Spatial::Preview
{
    struct WINRT_IMPL_EMPTY_BASES SpatialGraphInteropFrameOfReferencePreview : winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview
    {
        SpatialGraphInteropFrameOfReferencePreview(std::nullptr_t) noexcept {}
        SpatialGraphInteropFrameOfReferencePreview(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Perception::Spatial::Preview::ISpatialGraphInteropFrameOfReferencePreview(ptr, take_ownership_from_abi) {}
    };
    struct SpatialGraphInteropPreview
    {
        SpatialGraphInteropPreview() = delete;
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto CreateCoordinateSystemForNode(winrt::guid const& nodeId, winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation);
        static auto CreateLocatorForNode(winrt::guid const& nodeId);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& relativePosition);
        static auto TryCreateFrameOfReference(winrt::Windows::Perception::Spatial::SpatialCoordinateSystem const& coordinateSystem, winrt::Windows::Foundation::Numerics::float3 const& relativePosition, winrt::Windows::Foundation::Numerics::quaternion const& relativeOrientation);
    };
}
#endif
