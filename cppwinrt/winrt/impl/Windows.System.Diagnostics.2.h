// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_System_Diagnostics_2_H
#define WINRT_Windows_System_Diagnostics_2_H
#include "winrt/impl/Windows.System.1.h"
#include "winrt/impl/Windows.System.Diagnostics.1.h"
WINRT_EXPORT namespace winrt::Windows::System::Diagnostics
{
    struct WINRT_IMPL_EMPTY_BASES DiagnosticActionResult : winrt::Windows::System::Diagnostics::IDiagnosticActionResult
    {
        DiagnosticActionResult(std::nullptr_t) noexcept {}
        DiagnosticActionResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IDiagnosticActionResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES DiagnosticInvoker : winrt::Windows::System::Diagnostics::IDiagnosticInvoker,
        impl::require<DiagnosticInvoker, winrt::Windows::System::Diagnostics::IDiagnosticInvoker2>
    {
        DiagnosticInvoker(std::nullptr_t) noexcept {}
        DiagnosticInvoker(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IDiagnosticInvoker(ptr, take_ownership_from_abi) {}
        static auto GetDefault();
        static auto GetForUser(winrt::Windows::System::User const& user);
        [[nodiscard]] static auto IsSupported();
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessCpuUsage : winrt::Windows::System::Diagnostics::IProcessCpuUsage
    {
        ProcessCpuUsage(std::nullptr_t) noexcept {}
        ProcessCpuUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessCpuUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessCpuUsageReport : winrt::Windows::System::Diagnostics::IProcessCpuUsageReport
    {
        ProcessCpuUsageReport(std::nullptr_t) noexcept {}
        ProcessCpuUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessCpuUsageReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessDiagnosticInfo : winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo,
        impl::require<ProcessDiagnosticInfo, winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo2>
    {
        ProcessDiagnosticInfo(std::nullptr_t) noexcept {}
        ProcessDiagnosticInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiagnosticInfo(ptr, take_ownership_from_abi) {}
        static auto GetForProcesses();
        static auto GetForCurrentProcess();
        static auto TryGetForProcessId(uint32_t processId);
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessDiskUsage : winrt::Windows::System::Diagnostics::IProcessDiskUsage
    {
        ProcessDiskUsage(std::nullptr_t) noexcept {}
        ProcessDiskUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiskUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessDiskUsageReport : winrt::Windows::System::Diagnostics::IProcessDiskUsageReport
    {
        ProcessDiskUsageReport(std::nullptr_t) noexcept {}
        ProcessDiskUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessDiskUsageReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessMemoryUsage : winrt::Windows::System::Diagnostics::IProcessMemoryUsage
    {
        ProcessMemoryUsage(std::nullptr_t) noexcept {}
        ProcessMemoryUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessMemoryUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES ProcessMemoryUsageReport : winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport
    {
        ProcessMemoryUsageReport(std::nullptr_t) noexcept {}
        ProcessMemoryUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::IProcessMemoryUsageReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemCpuUsage : winrt::Windows::System::Diagnostics::ISystemCpuUsage
    {
        SystemCpuUsage(std::nullptr_t) noexcept {}
        SystemCpuUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemCpuUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemCpuUsageReport : winrt::Windows::System::Diagnostics::ISystemCpuUsageReport
    {
        SystemCpuUsageReport(std::nullptr_t) noexcept {}
        SystemCpuUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemCpuUsageReport(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemDiagnosticInfo : winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo
    {
        SystemDiagnosticInfo(std::nullptr_t) noexcept {}
        SystemDiagnosticInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemDiagnosticInfo(ptr, take_ownership_from_abi) {}
        static auto GetForCurrentSystem();
    };
    struct WINRT_IMPL_EMPTY_BASES SystemMemoryUsage : winrt::Windows::System::Diagnostics::ISystemMemoryUsage
    {
        SystemMemoryUsage(std::nullptr_t) noexcept {}
        SystemMemoryUsage(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemMemoryUsage(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES SystemMemoryUsageReport : winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport
    {
        SystemMemoryUsageReport(std::nullptr_t) noexcept {}
        SystemMemoryUsageReport(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::System::Diagnostics::ISystemMemoryUsageReport(ptr, take_ownership_from_abi) {}
    };
}
#endif
