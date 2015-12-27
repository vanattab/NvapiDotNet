// This is the main DLL file.

#include "stdafx.h"
#include "NvapiDotNet.h"


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
    static NvDn_STEREO_CAPS^ NvDn_GetStereoCaps(NvDn_MonitorHandle^ hMon) {
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

    //static NvDn_Status NvDn_Stereo_CreateHandleFromIUnknown(IUnknown* pDevice, NvDn_StereoHandle^* pStereoHand){
    //  return nCall(NvAPI_Stereo_CreateHandleFromIUnknown(pDevice, pStereoHand));
    //}

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
    
    static NvDn_Status NvDn_StereoCreateConfigurationProfileRegistryKey(NV_STEREO_REGISTRY_PROFILE_TYPE regProType){
      return nCall(NvAPI_Stereo_CreateConfigurationProfileRegistryKey(regProType));
    }

    static NvDn_Status NvDn_Stereo_InitActivation(NvDn_StereoHandle^ sHand, NVAPI_STEREO_INIT_ACTIVATION_FLAGS flags){
      return nCall(NvAPI_Stereo_InitActivation((StereoHandle)sHand->ToPointer(), flags));
    }

    static NvDn_Status NvDn_Stereo_SetDriverMode(NV_STEREO_DRIVER_MODE mode){
      return nCall(NvAPI_Stereo_SetDriverMode(mode));
    }

    static NvDn_Status NvDn_Stereo_IsEnabled(NvU8* isEnabled){
      return nCall(NvAPI_Stereo_IsEnabled(isEnabled));
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