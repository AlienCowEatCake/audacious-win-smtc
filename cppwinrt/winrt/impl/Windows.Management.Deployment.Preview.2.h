// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Management_Deployment_Preview_2_H
#define WINRT_Windows_Management_Deployment_Preview_2_H
#include "winrt/impl/Windows.Management.Deployment.Preview.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Deployment::Preview
{
    struct ClassicAppManager
    {
        ClassicAppManager() = delete;
        static auto FindInstalledApp(param::hstring const& appUninstallKey);
    };
    struct WINRT_IMPL_EMPTY_BASES InstalledClassicAppInfo : winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo
    {
        InstalledClassicAppInfo(std::nullptr_t) noexcept {}
        InstalledClassicAppInfo(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::Preview::IInstalledClassicAppInfo(ptr, take_ownership_from_abi) {}
    };
}
#endif
