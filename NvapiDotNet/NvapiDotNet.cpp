// This is the main DLL file.

#include "stdafx.h"
#include "NvapiDotNet.h"
#include "NvDn_Stereo.h"


//using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

namespace NvapiDotNet {

  public ref class NvDn
  {
    // TODO: Add your methods for this class here.
  public:
    static NvDn_Status NvDn_Initialize() {
      #ifdef _DEBUG
      debugLogStream = File::AppendText("NvDn_Log.txt");
      #endif
      return nCall(NvAPI_Initialize());
    }

    static NvDn_Status NvDn_Unload() {
      return nCall(NvAPI_Unload());
    }


    // *** Stereo Calls *** ///


    static NvDn_STEREO_CAPS^ NvDn_Stereo_GetStereoCaps(NvDn_MonitorHandle^ hMon) {
      NVAPI_STEREO_CAPS* nCaps = new NVAPI_STEREO_CAPS;
      NVAPI_STEREO_CAPS* nCaps2 = new NVAPI_STEREO_CAPS();
      NvDn_Status status = nCall(NvAPI_Stereo_GetStereoSupport((NvMonitorHandle)hMon->ToPointer(), nCaps));
      return gcnew NvDn_STEREO_CAPS(nCaps);
    }

    static NvDn_Status NvDn_Stereo_Enable(){
      return nCall(NvAPI_Stereo_Enable());
    }

    static NvDn_Status NvDn_Stereo_Disable(){
      return nCall(NvAPI_Stereo_Disable());
    }

    static NvDn_Status NvDn_Stereo_CaptureJpegImage(NvDn_StereoHandle^ sHand, unsigned int jpegQuality0to100){
      return nCall(NvAPI_Stereo_CaptureJpegImage((StereoHandle)sHand->ToPointer(), jpegQuality0to100));
    }

    static NvDn_Status NvDn_Stereo_CapturePngImage(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_CapturePngImage((StereoHandle)sHand->ToPointer()));
    }

    static NvDn_Status NvDn_Stereo_CreateHandleFromD3D_Device_Pointer(IntPtr^ pD3dDevice, NvDn_StereoHandle^ pStereoHand){
     //return nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), (StereoHandle*)(pStereoHand->ToPointer())));
     StereoHandle sHand;
     return nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), &sHand));
    }

    static NvDn_Status NvDn_Stereo_DestroyHandle(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_DestroyHandle((StereoHandle)sHand->ToPointer()));
    }

    static NvDn_Status NvDn_Stereo_Activate(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_Activate((StereoHandle)sHand->ToPointer()));
    }
    
    static NvDn_Status NvDn_Stereo_Deactivate(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_Deactivate((StereoHandle)sHand->ToPointer()));
    }
    
    static NvDn_Status NvDn_Stereo_Debug_WasLastDrawStereoized(NvDn_StereoHandle^ sHand, Byte% wasStereo){
      NvU8 val;
      NvDn_Status status = nCall(NvAPI_Stereo_Debug_WasLastDrawStereoized((StereoHandle)sHand->ToPointer(), &val));
      wasStereo = val;
      return status;
    }
    
    static NvDn_Status NvDn_Stereo_CreateConfigurationProfileRegistryKey(NvDn_STEREO_REGISTRY_PROFILE_TYPE regProType){
      return nCall(NvAPI_Stereo_CreateConfigurationProfileRegistryKey((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType));
    }

    static NvDn_Status NvDn_Stereo_DeleteConfigurationProfileRegistryKey(NvDn_STEREO_REGISTRY_PROFILE_TYPE regProType){
     return nCall(NvAPI_Stereo_DeleteConfigurationProfileRegistryKey((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType));
    }

    static NvDn_Status NvDn_Stereo_SetConfigurationProfileValue(NvDn_STEREO_REGISTRY_PROFILE_TYPE regProType, NV_STEREO_REGISTRY_ID valueRegistryID, IntPtr pValue){
     return nCall(NvAPI_Stereo_SetConfigurationProfileValue((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType, valueRegistryID, pValue.ToPointer()));
    }

    static NvDn_Status NvDn_Stereo_InitActivation(NvDn_StereoHandle^ sHand, NvDn_STEREO_INIT_ACTIVATION_FLAGS flags){
      return nCall(NvAPI_Stereo_InitActivation((StereoHandle)sHand->ToPointer(), (NVAPI_STEREO_INIT_ACTIVATION_FLAGS) flags));
    }

    static NvDn_Status NvDn_Stereo_SetDriverMode(NV_STEREO_DRIVER_MODE mode){
      return nCall(NvAPI_Stereo_SetDriverMode(mode));
    }

    static NvDn_Status NvDn_Stereo_IsEnabled(Byte%  isEnabled){
     NvU8 val;
     NvDn_Status status = nCall(NvAPI_Stereo_IsEnabled(&val));
      isEnabled = val;
      return status;
    }

    static NvDn_Status NvDn_Stereo_IsEnabled(Boolean^ isEnabled){
      NvU8 result;
      NvDn_Status status = nCall(NvAPI_Stereo_IsEnabled(&result));
      if (result < 1)
        isEnabled = false;
      else
        isEnabled = true;
      return status;
    }
    
    static NvDn_Status NvDn_Stereo_IsActivted(NvDn_StereoHandle^ sHand, Byte% isActivated){
      NvU8 val;
      NvDn_Status status = nCall(NvAPI_Stereo_IsActivated((StereoHandle)sHand->ToPointer(), &val));
      isActivated = val;
      return status;
    }

    static NvDn_Status NvDn_Stereo_GetConvergence(NvDn_StereoHandle^ sHand, float% pConvergence){
      float nConverge;
      NvDn_Status status =  nCall(NvAPI_Stereo_GetConvergence((StereoHandle)sHand->ToPointer(), &nConverge));
      pConvergence = nConverge;
      return status;
    }

  private:
    static NvDn_Status nCall(NvAPI_Status nativeNvapiCall) {
#     ifdef _DEBUG
      debugLogStream->WriteLine(nativeNvapiCall);
#     endif
      return static_cast<NvDn_Status>(nativeNvapiCall);
    }
    static StreamWriter^ debugLogStream;
  };
}