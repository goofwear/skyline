// Copyright (c) 2015-2019 The Khronos Group Inc.
// 
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
// 
//     http://www.apache.org/licenses/LICENSE-2.0
// 
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.
// 
// ---- Exceptions to the Apache 2.0 License: ----
// 
// As an exception, if you use this Software to generate code and portions of
// this Software are embedded into the generated code as a result, you may
// redistribute such product without providing attribution as would otherwise
// be required by Sections 4(a), 4(b) and 4(d) of the License.
// 
// In addition, if you combine or link code generated by this Software with
// software that is licensed under the GPLv2 or the LGPL v2.0 or 2.1
// ("`Combined Software`") and if a court of competent jurisdiction determines
// that the patent provision (Section 3), the indemnity provision (Section 9)
// or other Section of the License conflicts with the conditions of the
// applicable GPL or LGPL license, you may retroactively and prospectively
// choose to deem waived or otherwise exclude such Section(s) of the License,
// but only in their entirety and only with respect to the Combined Software.
//     

// This header is generated from the Khronos Vulkan XML API Registry.

#pragma once

#include "../handles.hpp"
#include "VkAcquire.hpp"
#include "VkAcceleration.hpp"
#include "VkApplication.hpp"
#include "VkAllocation.hpp"
#include "VkBind.hpp"
#include "VkAndroid.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkCheckpoint.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkComponent.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct ConformanceVersionKHR
  {
    VULKAN_HPP_CONSTEXPR ConformanceVersionKHR( uint8_t major_ = {},
                                                uint8_t minor_ = {},
                                                uint8_t subminor_ = {},
                                                uint8_t patch_ = {} ) VULKAN_HPP_NOEXCEPT
      : major( major_ )
      , minor( minor_ )
      , subminor( subminor_ )
      , patch( patch_ )
    {}

    VULKAN_HPP_CONSTEXPR ConformanceVersionKHR( ConformanceVersionKHR const& rhs ) VULKAN_HPP_NOEXCEPT
      : major( rhs.major )
      , minor( rhs.minor )
      , subminor( rhs.subminor )
      , patch( rhs.patch )
    {}

    ConformanceVersionKHR & operator=( ConformanceVersionKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( ConformanceVersionKHR ) );
      return *this;
    }

    ConformanceVersionKHR( VkConformanceVersionKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    ConformanceVersionKHR& operator=( VkConformanceVersionKHR const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::ConformanceVersionKHR const *>(&rhs);
      return *this;
    }

    ConformanceVersionKHR & setMajor( uint8_t major_ ) VULKAN_HPP_NOEXCEPT
    {
      major = major_;
      return *this;
    }

    ConformanceVersionKHR & setMinor( uint8_t minor_ ) VULKAN_HPP_NOEXCEPT
    {
      minor = minor_;
      return *this;
    }

    ConformanceVersionKHR & setSubminor( uint8_t subminor_ ) VULKAN_HPP_NOEXCEPT
    {
      subminor = subminor_;
      return *this;
    }

    ConformanceVersionKHR & setPatch( uint8_t patch_ ) VULKAN_HPP_NOEXCEPT
    {
      patch = patch_;
      return *this;
    }

    operator VkConformanceVersionKHR const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkConformanceVersionKHR*>( this );
    }

    operator VkConformanceVersionKHR &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkConformanceVersionKHR*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( ConformanceVersionKHR const& ) const = default;
#else
    bool operator==( ConformanceVersionKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( major == rhs.major )
          && ( minor == rhs.minor )
          && ( subminor == rhs.subminor )
          && ( patch == rhs.patch );
    }

    bool operator!=( ConformanceVersionKHR const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    uint8_t major = {};
    uint8_t minor = {};
    uint8_t subminor = {};
    uint8_t patch = {};
  };
  static_assert( sizeof( ConformanceVersionKHR ) == sizeof( VkConformanceVersionKHR ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<ConformanceVersionKHR>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
