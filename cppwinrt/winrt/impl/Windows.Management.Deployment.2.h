// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Management_Deployment_2_H
#define WINRT_Windows_Management_Deployment_2_H
#include "winrt/impl/Windows.Management.Deployment.1.h"
WINRT_EXPORT namespace winrt::Windows::Management::Deployment
{
    struct DeploymentProgress
    {
        winrt::Windows::Management::Deployment::DeploymentProgressState state;
        uint32_t percentage;
    };
    inline bool operator==(DeploymentProgress const& left, DeploymentProgress const& right) noexcept
    {
        return left.state == right.state && left.percentage == right.percentage;
    }
    inline bool operator!=(DeploymentProgress const& left, DeploymentProgress const& right) noexcept
    {
        return !(left == right);
    }
    struct WINRT_IMPL_EMPTY_BASES AddPackageOptions : winrt::Windows::Management::Deployment::IAddPackageOptions,
        impl::require<AddPackageOptions, winrt::Windows::Management::Deployment::IAddPackageOptions2>
    {
        AddPackageOptions(std::nullptr_t) noexcept {}
        AddPackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IAddPackageOptions(ptr, take_ownership_from_abi) {}
        AddPackageOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES DeploymentResult : winrt::Windows::Management::Deployment::IDeploymentResult,
        impl::require<DeploymentResult, winrt::Windows::Management::Deployment::IDeploymentResult2>
    {
        DeploymentResult(std::nullptr_t) noexcept {}
        DeploymentResult(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IDeploymentResult(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PackageManager : winrt::Windows::Management::Deployment::IPackageManager,
        impl::require<PackageManager, winrt::Windows::Management::Deployment::IPackageManager2, winrt::Windows::Management::Deployment::IPackageManager3, winrt::Windows::Management::Deployment::IPackageManager4, winrt::Windows::Management::Deployment::IPackageManager5, winrt::Windows::Management::Deployment::IPackageManager6, winrt::Windows::Management::Deployment::IPackageManager7, winrt::Windows::Management::Deployment::IPackageManager8, winrt::Windows::Management::Deployment::IPackageManager9>
    {
        PackageManager(std::nullptr_t) noexcept {}
        PackageManager(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IPackageManager(ptr, take_ownership_from_abi) {}
        PackageManager();
        using winrt::Windows::Management::Deployment::IPackageManager::AddPackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager3>::AddPackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager5>::AddPackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager6>::AddPackageAsync;
        using winrt::Windows::Management::Deployment::IPackageManager::RegisterPackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager3>::RegisterPackageAsync;
        using winrt::Windows::Management::Deployment::IPackageManager::RemovePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager2>::RemovePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager6>::RequestAddPackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager7>::RequestAddPackageAsync;
        using winrt::Windows::Management::Deployment::IPackageManager::StagePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager2>::StagePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager3>::StagePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager5>::StagePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager6>::StagePackageAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager2>::StageUserDataAsync;
        using impl::consume_t<PackageManager, winrt::Windows::Management::Deployment::IPackageManager3>::StageUserDataAsync;
    };
    struct WINRT_IMPL_EMPTY_BASES PackageManagerDebugSettings : winrt::Windows::Management::Deployment::IPackageManagerDebugSettings
    {
        PackageManagerDebugSettings(std::nullptr_t) noexcept {}
        PackageManagerDebugSettings(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IPackageManagerDebugSettings(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PackageUserInformation : winrt::Windows::Management::Deployment::IPackageUserInformation
    {
        PackageUserInformation(std::nullptr_t) noexcept {}
        PackageUserInformation(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IPackageUserInformation(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES PackageVolume : winrt::Windows::Management::Deployment::IPackageVolume,
        impl::require<PackageVolume, winrt::Windows::Management::Deployment::IPackageVolume2>
    {
        PackageVolume(std::nullptr_t) noexcept {}
        PackageVolume(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IPackageVolume(ptr, take_ownership_from_abi) {}
    };
    struct WINRT_IMPL_EMPTY_BASES RegisterPackageOptions : winrt::Windows::Management::Deployment::IRegisterPackageOptions,
        impl::require<RegisterPackageOptions, winrt::Windows::Management::Deployment::IRegisterPackageOptions2>
    {
        RegisterPackageOptions(std::nullptr_t) noexcept {}
        RegisterPackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IRegisterPackageOptions(ptr, take_ownership_from_abi) {}
        RegisterPackageOptions();
    };
    struct WINRT_IMPL_EMPTY_BASES StagePackageOptions : winrt::Windows::Management::Deployment::IStagePackageOptions,
        impl::require<StagePackageOptions, winrt::Windows::Management::Deployment::IStagePackageOptions2>
    {
        StagePackageOptions(std::nullptr_t) noexcept {}
        StagePackageOptions(void* ptr, take_ownership_from_abi_t) noexcept : winrt::Windows::Management::Deployment::IStagePackageOptions(ptr, take_ownership_from_abi) {}
        StagePackageOptions();
    };
}
#endif
