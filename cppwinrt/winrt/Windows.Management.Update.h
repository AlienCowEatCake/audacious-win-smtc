// WARNING: Please don't edit this file. It was generated by C++/WinRT v2.3.4.5

#pragma once
#ifndef WINRT_Windows_Management_Update_H
#define WINRT_Windows_Management_Update_H
#include "winrt/base.h"
static_assert(winrt::check_version(CPPWINRT_VERSION, "2.3.4.5"), "Mismatched C++/WinRT headers.");
#define CPPWINRT_VERSION "2.3.4.5"
#include "winrt/Windows.Management.h"
#include "winrt/impl/Windows.Foundation.2.h"
#include "winrt/impl/Windows.Foundation.Collections.2.h"
#include "winrt/impl/Windows.Management.Update.2.h"
namespace winrt::impl
{
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed() const
    {
        bool value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManager)->get_ArePreviewBuildsAllowed(&value));
        return value;
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::ArePreviewBuildsAllowed(bool value) const
    {
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManager)->put_ArePreviewBuildsAllowed(value));
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::GetCurrentState() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManager)->GetCurrentState(&result));
        return winrt::Windows::Management::Update::PreviewBuildsState{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManager<D>::SyncAsync() const
    {
        void* result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManager)->SyncAsync(&result));
        return winrt::Windows::Foundation::IAsyncOperation<bool>{ result, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::GetDefault() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManagerStatics)->GetDefault(&value));
        return winrt::Windows::Management::Update::PreviewBuildsManager{ value, take_ownership_from_abi };
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsManagerStatics<D>::IsSupported() const
    {
        bool result{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsManagerStatics)->IsSupported(&result));
        return result;
    }
    template <typename D> auto consume_Windows_Management_Update_IPreviewBuildsState<D>::Properties() const
    {
        void* value{};
        check_hresult(WINRT_IMPL_SHIM(winrt::Windows::Management::Update::IPreviewBuildsState)->get_Properties(&value));
        return winrt::Windows::Foundation::Collections::ValueSet{ value, take_ownership_from_abi };
    }
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::IPreviewBuildsManager> : produce_base<D, winrt::Windows::Management::Update::IPreviewBuildsManager>
    {
        int32_t __stdcall get_ArePreviewBuildsAllowed(bool* value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *value = detach_from<bool>(this->shim().ArePreviewBuildsAllowed());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall put_ArePreviewBuildsAllowed(bool value) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            this->shim().ArePreviewBuildsAllowed(value);
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall GetCurrentState(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Management::Update::PreviewBuildsState>(this->shim().GetCurrentState());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall SyncAsync(void** result) noexcept final try
        {
            clear_abi(result);
            typename D::abi_guard guard(this->shim());
            *result = detach_from<winrt::Windows::Foundation::IAsyncOperation<bool>>(this->shim().SyncAsync());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> : produce_base<D, winrt::Windows::Management::Update::IPreviewBuildsManagerStatics>
    {
        int32_t __stdcall GetDefault(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Management::Update::PreviewBuildsManager>(this->shim().GetDefault());
            return 0;
        }
        catch (...) { return to_hresult(); }
        int32_t __stdcall IsSupported(bool* result) noexcept final try
        {
            typename D::abi_guard guard(this->shim());
            *result = detach_from<bool>(this->shim().IsSupported());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
#ifndef WINRT_LEAN_AND_MEAN
    template <typename D>
    struct produce<D, winrt::Windows::Management::Update::IPreviewBuildsState> : produce_base<D, winrt::Windows::Management::Update::IPreviewBuildsState>
    {
        int32_t __stdcall get_Properties(void** value) noexcept final try
        {
            clear_abi(value);
            typename D::abi_guard guard(this->shim());
            *value = detach_from<winrt::Windows::Foundation::Collections::ValueSet>(this->shim().Properties());
            return 0;
        }
        catch (...) { return to_hresult(); }
    };
#endif
}
WINRT_EXPORT namespace winrt::Windows::Management::Update
{
    inline auto PreviewBuildsManager::GetDefault()
    {
        return impl::call_factory_cast<winrt::Windows::Management::Update::PreviewBuildsManager(*)(IPreviewBuildsManagerStatics const&), PreviewBuildsManager, IPreviewBuildsManagerStatics>([](IPreviewBuildsManagerStatics const& f) { return f.GetDefault(); });
    }
    inline auto PreviewBuildsManager::IsSupported()
    {
        return impl::call_factory_cast<bool(*)(IPreviewBuildsManagerStatics const&), PreviewBuildsManager, IPreviewBuildsManagerStatics>([](IPreviewBuildsManagerStatics const& f) { return f.IsSupported(); });
    }
}
namespace std
{
#ifndef WINRT_LEAN_AND_MEAN
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsManagerStatics> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::IPreviewBuildsState> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsManager> : winrt::impl::hash_base {};
    template<> struct hash<winrt::Windows::Management::Update::PreviewBuildsState> : winrt::impl::hash_base {};
#endif
#ifdef __cpp_lib_format
#endif
}
#endif
