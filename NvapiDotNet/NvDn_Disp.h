#pragma once
#include "Stdafx.h"

public enum class Nvdn_COLOR_CMD
{
 NV_COLOR_CMD_GET = 1,
 NV_COLOR_CMD_SET,
 NV_COLOR_CMD_IS_SUPPORTED_COLOR,
 NV_COLOR_CMD_GET_DEFAULT
} ;

//!  See Table 14 of CEA-861E.  Not all of this is supported by the GPU.
public enum class Nvdn_COLOR_FORMAT
{
 NV_COLOR_FORMAT_RGB = 0,
 NV_COLOR_FORMAT_YUV422,
 NV_COLOR_FORMAT_YUV444,

 NV_COLOR_FORMAT_DEFAULT = 0xFE,
 NV_COLOR_FORMAT_AUTO = 0xFF
} ;

public enum class Nvdn_COLOR_COLORIMETRY
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

public enum class Nvdn_DYNAMIC_RANGE
{
 NV_DYNAMIC_RANGE_VESA = 0x0,
 NV_DYNAMIC_RANGE_CEA = 0x1,

 NV_DYNAMIC_RANGE_AUTO = 0xFF
};

public enum class Nvdn_BPC
{
 NV_BPC_DEFAULT = 0,
 NV_BPC_6 = 1,
 NV_BPC_8 = 2,
 NV_BPC_10 = 3,
 NV_BPC_12 = 4,
 NV_BPC_16 = 5,
};

// Color Structs useing in DISP API

public ref class Nvdn_COLOR_DATA{
private:
public:
 NV_COLOR_DATA* nColorData;
 
 Nvdn_COLOR_DATA(){
  nColorData = new NV_COLOR_DATA();
  nColorData->version = NV_COLOR_DATA_VER;
 }

 Nvdn_COLOR_DATA(NV_COLOR_DATA* NvAPIColorData){
  nColorData = NvAPIColorData;
 }

 ~Nvdn_COLOR_DATA(){
  if (nColorData)
   delete nColorData;
 }

 !Nvdn_COLOR_DATA(){
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

 property Nvdn_COLOR_CMD cmd{
  Nvdn_COLOR_CMD get(){ return (Nvdn_COLOR_CMD)nColorData->cmd; }
  void set(Nvdn_COLOR_CMD value){ nColorData->cmd = (NV_COLOR_CMD)value; }
 }

 property Nvdn_COLOR_FORMAT colorFormat{
  Nvdn_COLOR_FORMAT get(){ return (Nvdn_COLOR_FORMAT)nColorData->data.colorFormat; }
  void set(Nvdn_COLOR_FORMAT value){ nColorData->data.colorFormat = (NV_COLOR_FORMAT)value; }
 }

 property Nvdn_COLOR_COLORIMETRY colorimetry{
  Nvdn_COLOR_COLORIMETRY get(){ return (Nvdn_COLOR_COLORIMETRY)nColorData->data.colorimetry; }
  void set(Nvdn_COLOR_COLORIMETRY value){ nColorData->data.colorimetry = (NV_COLOR_COLORIMETRY)value; }
 }

 property Nvdn_DYNAMIC_RANGE dynamicRange{
  Nvdn_DYNAMIC_RANGE  get(){ return (Nvdn_DYNAMIC_RANGE)nColorData->data.dynamicRange; }
  void set(Nvdn_DYNAMIC_RANGE value){ nColorData->data.dynamicRange = (NV_DYNAMIC_RANGE)value; }
 }

 property NV_BPC bpc{
  NV_BPC get(){ return nColorData->data.bpc; }
  void set(NV_BPC value){ nColorData->data.bpc = value; }
 }


};

// MONITOR CAPS
public ref class Nvdn_MONITOR_CAPS_VCDB
{
public:
 NV_MONITOR_CAPS_VCDB* nvapiNativePointer;

 Nvdn_MONITOR_CAPS_VCDB(){
  nvapiNativePointer = new NV_MONITOR_CAPS_VCDB();
 }

 Nvdn_MONITOR_CAPS_VCDB(NV_MONITOR_CAPS_VCDB* NvAPIColorData){
  nvapiNativePointer = NvAPIColorData;
 }

 ~Nvdn_MONITOR_CAPS_VCDB(){
  if (nvapiNativePointer)
   delete nvapiNativePointer;
 }

 !Nvdn_MONITOR_CAPS_VCDB(){
  if (nvapiNativePointer)
   delete nvapiNativePointer;
 }

 operator NV_MONITOR_CAPS_VCDB*(){
  return nvapiNativePointer;
 }

 property NvU8 quantizationRangeYcc{
  NvU8 get(){ return  nvapiNativePointer->quantizationRangeYcc; }
 }

 property NvU8  quantizationRangeRgb {
  NvU8 get(){ return nvapiNativePointer->quantizationRangeRgb; }
  void set(NvU8 value) { nvapiNativePointer->quantizationRangeRgb = value; }
 }

 property  NvU8  scanInfoPreferredVideoFormat {
  NvU8 get() { return nvapiNativePointer->scanInfoPreferredVideoFormat; }
  void set(NvU8 value){ nvapiNativePointer->scanInfoPreferredVideoFormat = value; }
 }

 property NvU8 scanInfoITVideoFormats{
  NvU8 get(){ return nvapiNativePointer->scanInfoITVideoFormats; }
  void set(NvU8 value){ nvapiNativePointer->scanInfoITVideoFormats = value; }
 }

 property NvU8 scanInfoCEVideoFormats{
  NvU8 get() { return nvapiNativePointer->scanInfoCEVideoFormats; }
  void set(NvU8 value){ nvapiNativePointer->scanInfoCEVideoFormats = value; }
 }

};


//! See NvAPI_DISP_GetMonitorCapabilities().
public ref class Nvdn_MONITOR_CAPS_VSDB
{
public:
 NV_MONITOR_CAPS_VSDB* nvapiNativePointer;

 Nvdn_MONITOR_CAPS_VSDB(){
  nvapiNativePointer = new NV_MONITOR_CAPS_VSDB();
 }

 Nvdn_MONITOR_CAPS_VSDB(NV_MONITOR_CAPS_VSDB* NvAPIColorData){
  nvapiNativePointer = NvAPIColorData;
 }

 ~Nvdn_MONITOR_CAPS_VSDB(){
  if (nvapiNativePointer)
   delete nvapiNativePointer;
 }

 !Nvdn_MONITOR_CAPS_VSDB(){
  if (nvapiNativePointer)
   delete nvapiNativePointer;
 }

 operator NV_MONITOR_CAPS_VSDB*(){
  return  nvapiNativePointer;
 }

 property NvU8 sourcePhysicalAddressB{
  NvU8 get(){ return nvapiNativePointer->sourcePhysicalAddressB; }
  void set(NvU8 value){ nvapiNativePointer->sourcePhysicalAddressB = value; }
 }
 property NvU8 sourcePhysicalAddressA{
  NvU8 get(){ return nvapiNativePointer->sourcePhysicalAddressA; }
  void set(NvU8 value){ nvapiNativePointer->sourcePhysicalAddressA = value; }
 }
 property NvU8 sourcePhysicalAddressD{
  NvU8 get(){ return nvapiNativePointer->sourcePhysicalAddressD; }
  void set(NvU8 value){ nvapiNativePointer->sourcePhysicalAddressD = value; }
 }
 property NvU8 sourcePhysicalAddressC{
  NvU8 get(){ return nvapiNativePointer->sourcePhysicalAddressC; }
  void set(NvU8 value){ nvapiNativePointer->sourcePhysicalAddressC = value; }
 }
 property NvU8 supportDualDviOperation{
  NvU8 get(){ return nvapiNativePointer->supportDualDviOperation; }
  void set(NvU8 value){ nvapiNativePointer->supportDualDviOperation = value; }
 }
 property NvU8 reserved6{
  NvU8 get(){ return nvapiNativePointer->reserved6; }
  void set(NvU8 value){ nvapiNativePointer->reserved6 = value; }
 }
 property NvU8 supportDeepColorYCbCr444{
  NvU8 get(){ return nvapiNativePointer->supportDeepColorYCbCr444; }
  void set(NvU8 value){ nvapiNativePointer->supportDeepColorYCbCr444 = value; }
 }
 property NvU8 supportDeepColor30bits{
  NvU8 get(){ return nvapiNativePointer->supportDeepColor30bits; }
  void set(NvU8 value){ nvapiNativePointer->supportDeepColor30bits = value; }
 }
 property NvU8 supportDeepColor36bits{
  NvU8 get(){ return nvapiNativePointer->supportDeepColor36bits; }
  void set(NvU8 value){ nvapiNativePointer->supportDeepColor36bits = value; }
 }
 property NvU8 supportDeepColor48bits{
  NvU8 get(){ return nvapiNativePointer->supportDeepColor48bits; }
  void set(NvU8 value){ nvapiNativePointer->supportDeepColor48bits = value; }
 }
 property NvU8 supportAI{
  NvU8 get(){ return nvapiNativePointer->supportAI; }
  void set(NvU8 value){ nvapiNativePointer->supportAI = value; }
 }
 property NvU8 maxTmdsClock{
  NvU8 get(){ return nvapiNativePointer->maxTmdsClock; }
  void set(NvU8 value){ nvapiNativePointer->maxTmdsClock = value; }
 }
 property NvU8 cnc0SupportGraphicsTextContent{
  NvU8 get(){ return nvapiNativePointer->cnc0SupportGraphicsTextContent; }
  void set(NvU8 value){ nvapiNativePointer->cnc0SupportGraphicsTextContent = value; }
 }
 property NvU8 cnc1SupportPhotoContent{
  NvU8 get(){ return nvapiNativePointer->cnc1SupportPhotoContent; }
  void set(NvU8 value){ nvapiNativePointer->cnc1SupportPhotoContent = value; }
 }
 property NvU8 cnc2SupportCinemaContent{
  NvU8 get(){ return nvapiNativePointer->cnc2SupportCinemaContent; }
  void set(NvU8 value){ nvapiNativePointer->cnc2SupportCinemaContent = value; }
 }
 property NvU8 cnc3SupportGameContent{
  NvU8 get(){ return nvapiNativePointer->cnc3SupportGameContent; }
  void set(NvU8 value){ nvapiNativePointer->cnc3SupportGameContent = value; }
 }
 property NvU8 reserved8{
  NvU8 get(){ return nvapiNativePointer->reserved8; }
  void set(NvU8 value){ nvapiNativePointer->reserved8 = value; }
 }
 property NvU8 hasVicEntries{
  NvU8 get(){ return nvapiNativePointer->hasVicEntries; }
  void set(NvU8 value){ nvapiNativePointer->hasVicEntries = value; }
 }
 property NvU8 hasInterlacedLatencyField{
  NvU8 get(){ return nvapiNativePointer->hasInterlacedLatencyField; }
  void set(NvU8 value){ nvapiNativePointer->hasInterlacedLatencyField = value; }
 }
 property NvU8 hasLatencyField{
  NvU8 get(){ return nvapiNativePointer->hasLatencyField; }
  void set(NvU8 value){ nvapiNativePointer->hasLatencyField = value; }
 }
 property NvU8 videoLatency{
  NvU8 get(){ return nvapiNativePointer->videoLatency; }
  void set(NvU8 value){ nvapiNativePointer->videoLatency = value; }
 }
 property NvU8 audioLatency{
  NvU8 get(){ return nvapiNativePointer->audioLatency; }
  void set(NvU8 value){ nvapiNativePointer->audioLatency = value; }
 }
 property NvU8 interlacedVideoLatency{
  NvU8 get(){ return nvapiNativePointer->interlacedVideoLatency; }
  void set(NvU8 value){ nvapiNativePointer->interlacedVideoLatency = value; }
 }
 property NvU8 interlacedAudioLatency{
  NvU8 get(){ return nvapiNativePointer->interlacedAudioLatency; }
  void set(NvU8 value){ nvapiNativePointer->interlacedAudioLatency = value; }
 }
 property NvU8 reserved13{
  NvU8 get(){ return nvapiNativePointer->reserved13; }
  void set(NvU8 value){ nvapiNativePointer->reserved13 = value; }
 }
 property NvU8 has3dEntries{
  NvU8 get(){ return nvapiNativePointer->has3dEntries; }
  void set(NvU8 value){ nvapiNativePointer->has3dEntries = value; }
 }
 property NvU8 hdmi3dLength{
  NvU8 get(){ return nvapiNativePointer->hdmi3dLength; }
  void set(NvU8 value){ nvapiNativePointer->hdmi3dLength = value; }
 }
 property NvU8 hdmiVicLength{
  NvU8 get(){ return nvapiNativePointer->hdmiVicLength; }
  void set(NvU8 value){ nvapiNativePointer->hdmiVicLength = value; }
 }
 property array<NvU8>^ hdmi_vic{
  array<NvU8>^ get(){
   array<NvU8>^ rVal = gcnew array<NvU8>(7);
   for (int i = 0; i < 7; i++)
    rVal[i] = nvapiNativePointer->hdmi_vic[i];
   return rVal;
  }
  void set(array<NvU8>^ value){ 
   for (int i = 0; i < 7; i++)
    nvapiNativePointer->hdmi_vic[i] = value[i];
  }
 }
 property array<NvU8>^ hdmi_3d{
  array<NvU8>^ get(){ 
   array<NvU8>^ rVal = gcnew array<NvU8>(31);
   for (int i=0;i<31;i++)
    rVal[i] = nvapiNativePointer->hdmi_3d[i];
   return rVal;
  }
  void set(array<NvU8>^ value){ 
   for (int i = 0; i < 31;i++)
    nvapiNativePointer->hdmi_3d[i] = value[i]; }
 }
};

public ref class Nvdn_MONITOR_CAPABILITIES{
public:

 NV_MONITOR_CAPABILITIES* nvapiNativeType;
 Nvdn_MONITOR_CAPABILITIES(NV_MONITOR_CAPABILITIES* nvapiCaps){
  nvapiNativeType = nvapiCaps;
 }

 Nvdn_MONITOR_CAPABILITIES(){
  nvapiNativeType = new NV_MONITOR_CAPABILITIES();
  nvapiNativeType->version = NV_MONITOR_CAPABILITIES_VER;
 }

 ~Nvdn_MONITOR_CAPABILITIES(){
  if (nvapiNativeType)
   delete nvapiNativeType;
 }

 !Nvdn_MONITOR_CAPABILITIES(){
  if (nvapiNativeType)
   delete nvapiNativeType;
 }

 operator NV_MONITOR_CAPABILITIES*(){
  return nvapiNativeType;
 }

 property NvU32 version {
  NvU32 get() { return nvapiNativeType->version; }
  void set(NvU32 value) { nvapiNativeType->version = value; }
 }

 property NvU16 size {
  NvU16 get() { return nvapiNativeType->size; }
  void set(NvU16 value){ nvapiNativeType->size = value; }
 }

 property NvU32 infoType{
  NvU32 get() { return nvapiNativeType->infoType; }
  void set(NvU32 value){ nvapiNativeType->infoType = value; }
 }

 property NvU32 connectorType{
  NvU32 get() { return nvapiNativeType->connectorType; }
  void set(NvU32 value){ nvapiNativeType->connectorType = value; }
 }

 property NvU8 bIsValidInfo{
  NvU8 get(){ return nvapiNativeType->bIsValidInfo; }
  void set(NvU8 value){ nvapiNativeType->bIsValidInfo = value; }
 }

 property Nvdn_MONITOR_CAPS_VSDB^ vsdb{
  Nvdn_MONITOR_CAPS_VSDB^ get(){ return gcnew Nvdn_MONITOR_CAPS_VSDB(&nvapiNativeType->data.vsdb); }
  void set(Nvdn_MONITOR_CAPS_VSDB^ value){ nvapiNativeType->data.vsdb = value->nvapiNativePointer[0]; }
 }

 property Nvdn_MONITOR_CAPS_VCDB^ vcdb{
  Nvdn_MONITOR_CAPS_VCDB^ get(){ return gcnew Nvdn_MONITOR_CAPS_VCDB(&nvapiNativeType->data.vcdb); }
  void set(Nvdn_MONITOR_CAPS_VCDB^ value){ nvapiNativeType->data.vcdb = value->nvapiNativePointer[0]; }
 }

};