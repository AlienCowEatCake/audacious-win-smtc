// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_ApplicationModel_Search_Core_1_H
#define WINRT_Windows_ApplicationModel_Search_Core_1_H
#include "winrt/impl/Windows.ApplicationModel.Search.Core.0.h"
WINRT_EXPORT namespace winrt::Windows::ApplicationModel::Search::Core
{
    struct WINRT_IMPL_EMPTY_BASES IRequestingFocusOnKeyboardInputEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<IRequestingFocusOnKeyboardInputEventArgs>
    {
        IRequestingFocusOnKeyboardInputEventArgs(std::nullptr_t = nullptr) noexcept {}
        IRequestingFocusOnKeyboardInputEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISearchSuggestion :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestion>
    {
        ISearchSuggestion(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestion(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISearchSuggestionManager :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestionManager>
    {
        ISearchSuggestionManager(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestionManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ISearchSuggestionsRequestedEventArgs :
        winrt::Windows::Foundation::IInspectable,
        impl::consume_t<ISearchSuggestionsRequestedEventArgs>
    {
        ISearchSuggestionsRequestedEventArgs(std::nullptr_t = nullptr) noexcept {}
        ISearchSuggestionsRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Foundation::IInspectable(ptr, take_ownership_from_abi) {}
    };
}
#endif