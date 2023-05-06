// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_UI_Core_AnimationMetrics_1_H
#define WINRT_Windows_UI_Core_AnimationMetrics_1_H
#include "winrt/impl/Windows.UI.Core.AnimationMetrics.0.h"
WINRT_EXPORT namespace winrt::Windows::UI::Core::AnimationMetrics
{
    struct WINRT_IMPL_EMPTY_BASES IAnimationDescription :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAnimationDescription>
    {
        IAnimationDescription(std::nullptr_t = nullptr) noexcept {}
        IAnimationDescription(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IAnimationDescriptionFactory :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IAnimationDescriptionFactory>
    {
        IAnimationDescriptionFactory(std::nullptr_t = nullptr) noexcept {}
        IAnimationDescriptionFactory(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IOpacityAnimation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IOpacityAnimation>,
        impl::require<winrt::Windows::UI::Core::AnimationMetrics::IOpacityAnimation, winrt::Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        IOpacityAnimation(std::nullptr_t = nullptr) noexcept {}
        IOpacityAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IPropertyAnimation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IPropertyAnimation>
    {
        IPropertyAnimation(std::nullptr_t = nullptr) noexcept {}
        IPropertyAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES IScaleAnimation :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IScaleAnimation>,
        impl::require<winrt::Windows::UI::Core::AnimationMetrics::IScaleAnimation, winrt::Windows::UI::Core::AnimationMetrics::IPropertyAnimation>
    {
        IScaleAnimation(std::nullptr_t = nullptr) noexcept {}
        IScaleAnimation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif
