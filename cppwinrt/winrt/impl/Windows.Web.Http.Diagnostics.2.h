// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Web_Http_Diagnostics_2_H
#define WINRT_Windows_Web_Http_Diagnostics_2_H
#include "winrt/impl/Windows.System.Diagnostics.1.h"
#include "winrt/impl/Windows.Web.Http.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::Web::Http::Diagnostics
{
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticProvider : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider
    {
        HttpDiagnosticProvider(std::nullptr_t) noexcept {}
        HttpDiagnosticProvider(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProvider(ptr, take_ownership_from_abi) {}
        static auto CreateFromProcessDiagnosticInfo(winrt::Windows::System::Diagnostics::ProcessDiagnosticInfo const& processDiagnosticInfo);
    };
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticProviderRequestResponseCompletedEventArgs : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs
    {
        HttpDiagnosticProviderRequestResponseCompletedEventArgs(std::nullptr_t) noexcept {}
        HttpDiagnosticProviderRequestResponseCompletedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseCompletedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticProviderRequestResponseTimestamps : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps
    {
        HttpDiagnosticProviderRequestResponseTimestamps(std::nullptr_t) noexcept {}
        HttpDiagnosticProviderRequestResponseTimestamps(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestResponseTimestamps(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticProviderRequestSentEventArgs : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs
    {
        HttpDiagnosticProviderRequestSentEventArgs(std::nullptr_t) noexcept {}
        HttpDiagnosticProviderRequestSentEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderRequestSentEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticProviderResponseReceivedEventArgs : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs
    {
        HttpDiagnosticProviderResponseReceivedEventArgs(std::nullptr_t) noexcept {}
        HttpDiagnosticProviderResponseReceivedEventArgs(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticProviderResponseReceivedEventArgs(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES HttpDiagnosticSourceLocation : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation
    {
        HttpDiagnosticSourceLocation(std::nullptr_t) noexcept {}
        HttpDiagnosticSourceLocation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Web::Http::Diagnostics::IHttpDiagnosticSourceLocation(ptr, take_ownership_from_abi) {}
    };
}
#endif
