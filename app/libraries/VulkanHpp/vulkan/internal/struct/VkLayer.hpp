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
#include "VkInitialize.hpp"
#include "VkAllocation.hpp"
#include "VkExternal.hpp"
#include "VkBind.hpp"
#include "VkCooperative.hpp"
#include "VkAndroid.hpp"
#include "VkImport.hpp"
#include "VkImage.hpp"
#include "VkDescriptor.hpp"
#include "VkBase.hpp"
#include "VkAttachment.hpp"
#include "VkBuffer.hpp"
#include "VkFramebuffer.hpp"
#include "VkCalibrated.hpp"
#include "VkDevice.hpp"
#include "VkCheckpoint.hpp"
#include "VkConformance.hpp"
#include "VkClear.hpp"
#include "VkCmd.hpp"
#include "VkExtension.hpp"
#include "VkCoarse.hpp"
#include "VkCommand.hpp"
#include "VkFormat.hpp"
#include "VkComponent.hpp"
#include "VkCopy.hpp"
#include "VkCompute.hpp"
#include "VkConditional.hpp"
#include "VkD3D.hpp"
#include "VkDebug.hpp"
#include "VkFence.hpp"
#include "VkDedicated.hpp"
#include "VkDraw.hpp"
#include "VkDispatch.hpp"
#include "VkDisplay.hpp"
#include "VkDrm.hpp"
#include "VkEvent.hpp"
#include "VkExport.hpp"
#include "VkExtent.hpp"
#include "VkFilter.hpp"
#include "VkGeometry.hpp"
#include "VkGraphics.hpp"
#include "VkHdr.hpp"
#include "VkHeadless.hpp"
#include "VkI.hpp"
#include "VkIndirect.hpp"
#include "VkInput.hpp"
#include "VkInstance.hpp"

namespace VULKAN_HPP_NAMESPACE
{
  struct LayerProperties
  {
    VULKAN_HPP_CONSTEXPR_14 LayerProperties( std::array<char,VK_MAX_EXTENSION_NAME_SIZE> const& layerName_ = {},
                                             uint32_t specVersion_ = {},
                                             uint32_t implementationVersion_ = {},
                                             std::array<char,VK_MAX_DESCRIPTION_SIZE> const& description_ = {} ) VULKAN_HPP_NOEXCEPT
      : layerName{}
      , specVersion( specVersion_ )
      , implementationVersion( implementationVersion_ )
      , description{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<char,VK_MAX_EXTENSION_NAME_SIZE>::copy( layerName, layerName_ );
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<char,VK_MAX_DESCRIPTION_SIZE>::copy( description, description_ );
    }

    VULKAN_HPP_CONSTEXPR_14 LayerProperties( LayerProperties const& rhs ) VULKAN_HPP_NOEXCEPT
      : layerName{}
      , specVersion( rhs.specVersion )
      , implementationVersion( rhs.implementationVersion )
      , description{}
    {
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<char,VK_MAX_EXTENSION_NAME_SIZE>::copy( layerName, rhs.layerName );
      VULKAN_HPP_NAMESPACE::ConstExpression1DArrayCopy<char,VK_MAX_DESCRIPTION_SIZE>::copy( description, rhs.description );
    }

    LayerProperties & operator=( LayerProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      memcpy( static_cast<void*>(this), &rhs, sizeof( LayerProperties ) );
      return *this;
    }

    LayerProperties( VkLayerProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = rhs;
    }

    LayerProperties& operator=( VkLayerProperties const & rhs ) VULKAN_HPP_NOEXCEPT
    {
      *this = *reinterpret_cast<VULKAN_HPP_NAMESPACE::LayerProperties const *>(&rhs);
      return *this;
    }

    operator VkLayerProperties const&() const VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<const VkLayerProperties*>( this );
    }

    operator VkLayerProperties &() VULKAN_HPP_NOEXCEPT
    {
      return *reinterpret_cast<VkLayerProperties*>( this );
    }

#if defined(VULKAN_HPP_HAS_SPACESHIP_OPERATOR)
    auto operator<=>( LayerProperties const& ) const = default;
#else
    bool operator==( LayerProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return ( memcmp( layerName, rhs.layerName, VK_MAX_EXTENSION_NAME_SIZE * sizeof( char ) ) == 0 )
          && ( specVersion == rhs.specVersion )
          && ( implementationVersion == rhs.implementationVersion )
          && ( memcmp( description, rhs.description, VK_MAX_DESCRIPTION_SIZE * sizeof( char ) ) == 0 );
    }

    bool operator!=( LayerProperties const& rhs ) const VULKAN_HPP_NOEXCEPT
    {
      return !operator==( rhs );
    }
#endif

  public:
    char layerName[VK_MAX_EXTENSION_NAME_SIZE] = {};
    uint32_t specVersion = {};
    uint32_t implementationVersion = {};
    char description[VK_MAX_DESCRIPTION_SIZE] = {};
  };
  static_assert( sizeof( LayerProperties ) == sizeof( VkLayerProperties ), "struct and wrapper have different size!" );
  static_assert( std::is_standard_layout<LayerProperties>::value, "struct wrapper is not a standard layout!" );
} // namespace VULKAN_HPP_NAMESPACE
