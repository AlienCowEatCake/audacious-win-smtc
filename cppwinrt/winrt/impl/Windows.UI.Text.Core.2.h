// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_UI_Text_Core_2_H
#define WINRT_Windows_UI_Text_Core_2_H
#include "winrt/impl/Windows.UI.Text.Core.1.h"
WINRT_EXPORT namespace winrt::Windows::UI::Text::Core
{
    struct CoreTextRange
    {
        int32_t StartCaretPosition;
        int32_t EndCaretPosition;
    };
    inline bool operator==(CoreTextRange const& left, CoreTextRange const& right) noexcept
    {
        return left.StartCaretPosition == right.StartCaretPosition && left.EndCaretPosition == right.EndCaretPosition;
    }
    inline bool operator!=(CoreTextRange const& left, CoreTextRange const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES CoreTextCompositionCompletedEventArgs : winrt::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs
    {
        CoreTextCompositionCompletedEventArgs(std::nullptr_t) noexcept {}
        CoreTextCompositionCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextCompositionCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextCompositionSegment : winrt::Windows::UI::Text::Core::ICoreTextCompositionSegment
    {
        CoreTextCompositionSegment(std::nullptr_t) noexcept {}
        CoreTextCompositionSegment(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextCompositionSegment(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextCompositionStartedEventArgs : winrt::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs
    {
        CoreTextCompositionStartedEventArgs(std::nullptr_t) noexcept {}
        CoreTextCompositionStartedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextCompositionStartedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextEditContext : winrt::Windows::UI::Text::Core::ICoreTextEditContext,
        impl::require<CoreTextEditContext, winrt::Windows::UI::Text::Core::ICoreTextEditContext2>
    {
        CoreTextEditContext(std::nullptr_t) noexcept {}
        CoreTextEditContext(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextEditContext(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextFormatUpdatingEventArgs : winrt::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs
    {
        CoreTextFormatUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextFormatUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextFormatUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextLayoutBounds : winrt::Windows::UI::Text::Core::ICoreTextLayoutBounds
    {
        CoreTextLayoutBounds(std::nullptr_t) noexcept {}
        CoreTextLayoutBounds(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextLayoutBounds(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextLayoutRequest : winrt::Windows::UI::Text::Core::ICoreTextLayoutRequest,
        impl::require<CoreTextLayoutRequest, winrt::Windows::UI::Text::Core::ICoreTextLayoutRequest2>
    {
        CoreTextLayoutRequest(std::nullptr_t) noexcept {}
        CoreTextLayoutRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextLayoutRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextLayoutRequestedEventArgs : winrt::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs
    {
        CoreTextLayoutRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextLayoutRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextLayoutRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextSelectionRequest : winrt::Windows::UI::Text::Core::ICoreTextSelectionRequest
    {
        CoreTextSelectionRequest(std::nullptr_t) noexcept {}
        CoreTextSelectionRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextSelectionRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextSelectionRequestedEventArgs : winrt::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs
    {
        CoreTextSelectionRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextSelectionRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextSelectionRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextSelectionUpdatingEventArgs : winrt::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs
    {
        CoreTextSelectionUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextSelectionUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextSelectionUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct CoreTextServicesConstants
    {
        CoreTextServicesConstants() = delete;
        [[nodiscard]] static auto HiddenCharacter();
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextServicesManager : winrt::Windows::UI::Text::Core::ICoreTextServicesManager
    {
        CoreTextServicesManager(std::nullptr_t) noexcept {}
        CoreTextServicesManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextServicesManager(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentView();
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextTextRequest : winrt::Windows::UI::Text::Core::ICoreTextTextRequest
    {
        CoreTextTextRequest(std::nullptr_t) noexcept {}
        CoreTextTextRequest(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextTextRequest(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextTextRequestedEventArgs : winrt::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs
    {
        CoreTextTextRequestedEventArgs(std::nullptr_t) noexcept {}
        CoreTextTextRequestedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextTextRequestedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES CoreTextTextUpdatingEventArgs : winrt::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs
    {
        CoreTextTextUpdatingEventArgs(std::nullptr_t) noexcept {}
        CoreTextTextUpdatingEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::UI::Text::Core::ICoreTextTextUpdatingEventArgs(ptr, take_ownership_from_abi) {}
    };
}
#endif
