#pragma once
#include "Stdafx.h"
#include "EnumHelper.h"

public enum class NvDn_COLOR_CMD
{
 NV_COLOR_CMD_GET = 1,
 NV_COLOR_CMD_SET,
 NV_COLOR_CMD_IS_SUPPORTED_COLOR,
 NV_COLOR_CMD_GET_DEFAULT
} ;

//!  See Table 14 of CEA-861E.  Not all of this is supported by the GPU.
public enum class NvDn_COLOR_FORMAT
{
 NV_COLOR_FORMAT_RGB = 0,
 NV_COLOR_FORMAT_YUV422,
 NV_COLOR_FORMAT_YUV444,

 NV_COLOR_FORMAT_DEFAULT = 0xFE,
 NV_COLOR_FORMAT_AUTO = 0xFF
} ;

public enum class NvDn_COLOR_COLORIMETRY
{
 NV_COLOR_COLORIMETRY_RGB = 0,
 NV_COLOR_COLORIMETRY_YCC601,
 NV_COLOR_COLORIMETRY_YCC709,
 NV_COLOR_COLORIMETRY_XVYCC601,
 NV_COLOR_COLORIMETRY_XVYCC709,
 NV_COLOR_COLORIMETRY_SYCC601,
 NV_COLOR_COLORIMETRY_ADOBEYCC601,
 NV_COLOR_COLORIMETRY_ADOBERGB,
 NV_COLOR_COLORIMETRY_BT2020RGB,
 NV_COLOR_COLORIMETRY_BT2020YCC,
 NV_COLOR_COLORIMETRY_BT2020cYCC,

 NV_COLOR_COLORIMETRY_DEFAULT = 0xFE,
 NV_COLOR_COLORIMETRY_AUTO = 0xFF
} ;

public enum class NvDn_DYNAMIC_RANGE
{
 NV_DYNAMIC_RANGE_VESA = 0x0,
 NV_DYNAMIC_RANGE_CEA = 0x1,

 NV_DYNAMIC_RANGE_AUTO = 0xFF
};

public enum class NvDn_BPC
{
 NV_BPC_DEFAULT = 0,
 NV_BPC_6 = 1,
 NV_BPC_8 = 2,
 NV_BPC_10 = 3,
 NV_BPC_12 = 4,
 NV_BPC_16 = 5,
};

// Color Structs useing in DISP API

public ref class NvDn_COLOR_DATA{
private:
public:
 NV_COLOR_DATA* nColorData;
 
 NvDn_COLOR_DATA(){
  nColorData = new NV_COLOR_DATA();
 }

 NvDn_COLOR_DATA(NV_COLOR_DATA* NvAPIColorData){
  nColorData = NvAPIColorData;
 }

 ~NvDn_COLOR_DATA(){
  if (nColorData)
   delete nColorData;
 }

 !NvDn_COLOR_DATA(){
  if (nColorData)
   delete nColorData;
 }

 property NvU32 version {
  NvU32 get() { return nColorData->version; }
  void set(NvU32 value) { nColorData->version = value; }
 }

 property NvU16 size {
  NvU16 get() { return nColorData->size; }
  void set(NvU16 value){ nColorData->size = value; }
 }

 property NvDn_COLOR_CMD cmd{
  NvDn_COLOR_CMD get(){ return (NvDn_COLOR_CMD)nColorData->cmd; }
  void set(NvDn_COLOR_CMD value){ nColorData->cmd = (NV_COLOR_CMD)value; }
 }

 property NvDn_COLOR_FORMAT colorFormat{
  NvDn_COLOR_FORMAT get(){ return (NvDn_COLOR_FORMAT)nColorData->data.colorFormat; }
  void set(NvDn_COLOR_FORMAT value){ nColorData->data.colorFormat = (NV_COLOR_FORMAT)value; }
 }

 property NvDn_COLOR_COLORIMETRY colorimetry{
  NvDn_COLOR_COLORIMETRY get(){ return (NvDn_COLOR_COLORIMETRY)nColorData->data.colorimetry; }
  void set(NvDn_COLOR_COLORIMETRY value){ nColorData->data.colorimetry = (NV_COLOR_COLORIMETRY)value; }
 }

 property NvDn_DYNAMIC_RANGE dynamicRange{
  NvDn_DYNAMIC_RANGE  get(){ return (NvDn_DYNAMIC_RANGE)nColorData->data.dynamicRange; }
  void set(NvDn_DYNAMIC_RANGE value){ nColorData->data.dynamicRange = (NV_DYNAMIC_RANGE)value; }
 }

 property NV_BPC bpc{
  NV_BPC get(){ return nColorData->data.bpc; }
  void set(NV_BPC value){ nColorData->data.bpc = value; }
 }


};

public ref class NvDn_MONITOR_CAPABILITIES{
public:
 NV_MONITOR_CAPABILITIES* nCaps;
 NvDn_MONITOR_CAPABILITIES(NV_MONITOR_CAPABILITIES* nvapiCaps){
  nCaps = nvapiCaps;
 }

 NvDn_MONITOR_CAPABILITIES(){
  nCaps = new NV_MONITOR_CAPABILITIES();
 }


 ~NvDn_MONITOR_CAPABILITIES(){
  if (nCaps)
   delete nCaps;
 }

 !NvDn_MONITOR_CAPABILITIES(){
  if (nCaps)
   delete nCaps;
 }

 operator NV_MONITOR_CAPABILITIES*(){
  return nCaps;
 }

 property 
 
};