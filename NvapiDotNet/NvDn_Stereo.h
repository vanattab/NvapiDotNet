#pragma once
#include"EnumHelper.h"
//! InitActivation Flags
public enum class NvDn_STEREO_INIT_ACTIVATION_FLAGS
{
  [EnumDescriptionAttribute("NVAPI_STEREO_INIT_ACTIVATION_IMMEDIATE: ")]
  NVAPI_STEREO_INIT_ACTIVATION_IMMEDIATE = 0X00,
  [EnumDescriptionAttribute("NVAPI_STEREO_INIT_ACTIVATION_DELAYED: ")]
  NVAPI_STEREO_INIT_ACTIVATION_DELAYED = 0x01,
};


//! Used in NvAPI_Stereo_CreateConfigurationProfileRegistryKey()
public enum class NvDn_STEREO_REGISTRY_PROFILE_TYPE
{
 [EnumDescriptionAttribute("NVAPI_STEREO_DEFAULT_REGISTRY_PROFILE:  Default registry configuration profile.")]
 NVAPI_STEREO_DEFAULT_REGISTRY_PROFILE, //!< Default registry configuration profile.
 [EnumDescriptionAttribute("NVAPI_STEREO_DX9_REGISTRY_PROFILE: Separate registry configuration profile for a DirectX 9 executable.")]
 NVAPI_STEREO_DX9_REGISTRY_PROFILE,     //!< Separate registry configuration profile for a DirectX 9 executable.
 [EnumDescriptionAttribute("NVAPI_STEREO_DX10_REGISTRY_PROFILE: Separate registry configuration profile for a DirectX 10 executable.")]
 NVAPI_STEREO_DX10_REGISTRY_PROFILE     //!< Separate registry configuration profile for a DirectX 10 executable.
};