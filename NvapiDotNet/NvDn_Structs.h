#pragma once
#include "nvapi.h"


public ref class NvDn_STEREO_CAPS{
private:
  NVAPI_STEREO_CAPS* nCaps;
public:

  NvDn_STEREO_CAPS(NVAPI_STEREO_CAPS* nvapiCaps){
    nCaps = nvapiCaps;
  }

  property NvU32 version {
    NvU32 get() { return nCaps->version;}
    void set(NvU32 value) {nCaps->version = value;}
  }

  property NvU32 supportWindowedModeOff {
    NvU32 get() { return nCaps->supportsWindowedModeOff; }
    void set(NvU32 value) { nCaps->supportsWindowedModeOff = value; }
  }

  property NvU32 supportWindowedModeAutomatic {
    NvU32 get() { return nCaps->supportsWindowedModeAutomatic; }
    void set(NvU32 value) { nCaps->supportsWindowedModeAutomatic = value; }
  }

  property NvU32 supportsWindowedModePersistent {
    NvU32 get() { return nCaps->supportsWindowedModePersistent; }
    void set(NvU32 value) { nCaps->supportsWindowedModePersistent = value; }
  }

  property NvU32 reserved {
    NvU32 get() { return nCaps->reserved; }
    void set(NvU32 value) { nCaps->reserved = value; }
  }

  property array<NvU32>^ reserved2 {
    array<NvU32>^ get() { 
      array<NvU32>^ returnVal = gcnew array<NvU32>(3);
      returnVal[0] = nCaps->reserved2[0];
      returnVal[1] = nCaps->reserved2[1];
      returnVal[2] = nCaps->reserved2[2];
      return returnVal;
    }

    void set(array<NvU32>^ value){
      nCaps->reserved2[0] = value[0];
      nCaps->reserved2[1] = value[1];
      nCaps->reserved2[2] = value[2];
    }
  }

};


// Color Structs useing in DISP API

public ref class NvDn_COLOR_DATA{
private:
public:
 NV_COLOR_DATA* nColorData;
 NvDn_COLOR_DATA(NV_COLOR_DATA* NvAPIColorData){
  nColorData = NvAPIColorData;
 }

 property NvU32 version {
  NvU32 get() { return nColorData->version; }
  void set(NvU32 value) { nColorData->version = value; }
 }

 property NvU16 size {
  NvU16 get() { return nColorData->size; }
  void set(NvU16 value){ nColorData->size = value; }
 }

 property NvU8 cmd{
  NvU8 get(){ return nColorData->cmd; }
  void set(NvU8 value){ nColorData->cmd = value; }
 }

 property NvU8 colorFormat{
  NvU8 get(){ return nColorData->data.colorFormat; }
  void set(NvU8 value){ nColorData->data.colorFormat = value; }
 }

 property NvU8 colorimetry{
  NvU8 get(){ return nColorData->data.colorimetry; }
  void set(NvU8 value){ nColorData->data.colorimetry = value; }
 }

 property NvU8 dynamicRange{
  NvU8 get(){ return nColorData->data.dynamicRange; }
  void set(NvU8 value){ nColorData->data.dynamicRange = value; }
 }

 property NV_BPC bpc{
  NV_BPC get(){ return nColorData->data.bpc; }
  void set(NV_BPC value){ nColorData->data.bpc = value; }
 }

};