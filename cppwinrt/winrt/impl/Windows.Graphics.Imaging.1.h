// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Graphics_Imaging_1_H
#define WINRT_Windows_Graphics_Imaging_1_H
#include "winrt/impl/Windows.Foundation.0.h"
#include "winrt/impl/Windows.Graphics.Imaging.0.h"
WINRT_EXPORT namespace winrt::Windows::Graphics::Imaging
{
    struct WINRT_IMPL_EMPTY_BASES IBitmapBuffer :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapBuffer>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapBuffer, winrt::Windows::Foundation::IClosable, winrt::Windows::Foundation::IMemoryBuffer>
    {
        IBitmapBuffer(std::nullptr_t = nullptr) noexcept {}
        IBitmapBuffer(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapCodecInformation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapCodecInformation>
    {
        IBitmapCodecInformation(std::nullptr_t = nullptr) noexcept {}
        IBitmapCodecInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapDecoder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoder>
    {
        IBitmapDecoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapDecoderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics>
    {
        IBitmapDecoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapDecoderStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapDecoderStatics2>
    {
        IBitmapDecoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapDecoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapEncoder :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoder>
    {
        IBitmapEncoder(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoder(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapEncoderStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics>
    {
        IBitmapEncoderStatics(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapEncoderStatics2 :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderStatics2>
    {
        IBitmapEncoderStatics2(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderStatics2(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapEncoderWithSoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapEncoderWithSoftwareBitmap>
    {
        IBitmapEncoderWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapEncoderWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapFrame :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrame>
    {
        IBitmapFrame(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrame(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapFrameWithSoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapFrameWithSoftwareBitmap>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapFrameWithSoftwareBitmap, winrt::Windows::Graphics::Imaging::IBitmapFrame>
    {
        IBitmapFrameWithSoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        IBitmapFrameWithSoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapProperties :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapProperties>,
        impl::require<winrt::Windows::Graphics::Imaging::IBitmapProperties, winrt::Windows::Graphics::Imaging::IBitmapPropertiesView>
    {
        IBitmapProperties(std::nullptr_t = nullptr) noexcept {}
        IBitmapProperties(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapPropertiesView :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapPropertiesView>
    {
        IBitmapPropertiesView(std::nullptr_t = nullptr) noexcept {}
        IBitmapPropertiesView(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapTransform :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTransform>
    {
        IBitmapTransform(std::nullptr_t = nullptr) noexcept {}
        IBitmapTransform(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapTypedValue :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValue>
    {
        IBitmapTypedValue(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValue(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IBitmapTypedValueFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IBitmapTypedValueFactory>
    {
        IBitmapTypedValueFactory(std::nullptr_t = nullptr) noexcept {}
        IBitmapTypedValueFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPixelDataProvider :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPixelDataProvider>
    {
        IPixelDataProvider(std::nullptr_t = nullptr) noexcept {}
        IPixelDataProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISoftwareBitmap :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmap>,
        impl::require<winrt::Windows::Graphics::Imaging::ISoftwareBitmap, winrt::Windows::Foundation::IClosable>
    {
        ISoftwareBitmap(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmap(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISoftwareBitmapFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapFactory>
    {
        ISoftwareBitmapFactory(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISoftwareBitmapStatics :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISoftwareBitmapStatics>
    {
        ISoftwareBitmapStatics(std::nullptr_t = nullptr) noexcept {}
        ISoftwareBitmapStatics(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
