// This is the main DLL file.

#include "stdafx.h"
#include "NvapiDotNet.h"
#include "NvDn_Stereo.h"
#include "NvDn_Disp.h"


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

    static NvDn_Status NvDn_Stereo_CreateHandleFromD3D_Device_Pointer(IntPtr^ pD3dDevice, NvDn_StereoHandle^% pStereoHand){
     //return nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), (StereoHandle*)(pStereoHand->ToPointer())));
     StereoHandle sHand;
     NvDn_Status status = nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), &sHand));
     pStereoHand = gcnew NvDn_StereoHandle(sHand);
     return status;
    }

    static NvDn_Status NvDn_Stereo_DestroyHandle(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_DestroyHandle((StereoHandle)sHand->ToPointer()));
    }

    static NvDn_Status NvDn_Stereo_Activate(NvDn_StereoHandle^ sHand){
      return nCall(NvAPI_Stereo_Activate(sHand));
    }
    
    static NvDn_Status NvDn_Stereo_Deactivate(NvDn_StereoHandle^ sHand){
     void* sH = sHand->ToPointer();
      return nCall(NvAPI_Stereo_Deactivate(sH));
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



    //Display CALLS
    static void NvDnTestCodeFunction(){
     //NvAPI_CreateDisplayFromUnAttachedDisplay(NvUnAttachedDisplayHandle hNvUnattachedDisplay, NvDisplayHandle* pNvDisplay);
     //NvAPI_D3D9_AliasSurfaceAsTexture(IDirect3DDevice9* pDev, IDirect3DSurface9 *pSurface, IDirect3DTexture9 **ppTexture, DWORD dwFlag);
     //NvAPI_Disp_ColorControl(NvU32 displayID, );
     //NvAPI_DISP_DeleteCustomDisplay(NvU32, NVU32, NV_CUSTOM_DISPLAY*);
     //NvAPI_DISP_EnumCustomDisplay(NvU32, NVU32, NV_CUSTOM_DISPLAY* pNvDisp);
     //NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle(const char* szDisplayName, NvUnAttachedDisplayHandle* p);
     //NvAPI_DISP_GetDisplayConfig(NvU32* PathInfoCount, NV_DISPLAYCONFIG_PATH_INFO *PINFO);
     //NvAPI_DISP_GetDisplayIdByDisplayName(const char* displayName, NvU32 *displayID);
     //NvAPI_DISP_GetGDIPrimaryDisplayId(NvU32 * DisplayId);
     //NvAPI_DISP_GetMonitorCapabilities;
     //NvAPI_DISP_GetMonitorColorCapabilities;
     //NvAPI_DISP_GetTiming;
     //NvAPI_Disp_InfoFrameControl;
     //NvAPI_DISP_RevertCustomDisplayTrial;
     //NvAPI_DISP_SaveCustomDisplay;
     //NvAPI_DISP_SetDisplayConfig;
     //NvAPI_DISP_TryCustomDisplay;
     NvUnAttachedDisplayHandle g;
     NvUnAttachedDisplayHandle__* b;
     NvUnAttachedDisplayHandle* c;
    }


    // Non API CODED FUCNTION CALLS
    static NvDn_Status NvDn_CreateDisplayFromUnAttachedDisplay(NvDn_UnAttachedDisplayHandle^ uadHand, NvDn_DisplayHandle^% dHand){
     NvDisplayHandle nDispHand;
     NvDn_Status status = nCall(NvAPI_CreateDisplayFromUnAttachedDisplay(uadHand, &nDispHand));
     dHand = gcnew NvDn_DisplayHandle(nDispHand);
     return status;
    }
    
    static NvDn_Status NvDn_Disp_ColorControl(NvU32 displayID, NvDn_COLOR_DATA^% colorDataOut){
     return nCall(NvAPI_Disp_ColorControl(displayID, colorDataOut->nColorData));
    }


    static NvDn_Status NvDn_EnumPhysicalGPUs(array<NvDn_PhysicalGpuHandle^>^% gpuArray){
     NvPhysicalGpuHandle pHandles[NVAPI_MAX_PHYSICAL_GPUS];
     NvU32 count;
     NvDn_Status status = nCall(NvAPI_EnumPhysicalGPUs(pHandles, &count));
     gpuArray = gcnew array < NvDn_PhysicalGpuHandle^ >(count);
     for (int i = 0; i < count; i++)
      gpuArray[i] = gcnew NvDn_PhysicalGpuHandle(pHandles[i]);
     NvU32 id;
     status = nCall(NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(pHandles[0], 0, &id));
     return status;
    }

    static NvDn_Status NvDn_SYS_GetDisplayIdFromGpuAndOutputId(NvDn_PhysicalGpuHandle^ phyHand, NvU32 outputID, NvU32^ displayID){
     NvU32 id;
     NvDn_Status status = nCall(NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(phyHand, outputID, &id));
     displayID = id;
     return status;
    }

    static NvDn_Status NvDn_Disp_GetDisplayIdByDisplayName(String^ name, NvU32^ displayId){
     NvU32 id;
     NvDn_Status s =nCall( NvAPI_DISP_GetDisplayIdByDisplayName("\\DISPLAY1", &id));
     displayId = id;
     return s;
    }

    static NvDn_Status NvDn_Disp_GetGDIPrimaryDisplayId(NvU32^ displayID){
     NvU32 id;
     NvDn_Status s = nCall(NvAPI_DISP_GetGDIPrimaryDisplayId(&id));
     displayID = id;
     return s;
    }

    static NvDn_Status NvDn_Disp_GetMonitorCapabilities(NvU32 displayID, NvDn_MONITOR_CAPABILITIES^% caps){
     NvDn_Status s = nCall(NvAPI_DISP_GetMonitorCapabilities(displayID, caps))
      return s;
    }

    

     //NvAPI_Disp_ColorControl(NvU32 displayID, );
     //NvAPI_DISP_DeleteCustomDisplay(NvU32, NVU32, NV_CUSTOM_DISPLAY*);
     //NvAPI_DISP_EnumCustomDisplay(NvU32, NVU32, NV_CUSTOM_DISPLAY* pNvDisp);
     //NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle(const char* szDisplayName, NvUnAttachedDisplayHandle* p);
     //NvAPI_DISP_GetDisplayConfig(NvU32* PathInfoCount, NV_DISPLAYCONFIG_PATH_INFO *PINFO);
     //NvAPI_DISP_GetDisplayIdByDisplayName(const char* displayName, NvU32 *displayID);
     //NvAPI_DISP_GetGDIPrimaryDisplayId(NvU32 * DisplayId);
     //NvAPI_DISP_GetMonitorCapabilities;
     //NvAPI_DISP_GetMonitorColorCapabilities;
     //NvAPI_DISP_GetTiming;
     //NvAPI_Disp_InfoFrameControl;
     //NvAPI_DISP_RevertCustomDisplayTrial;
     //NvAPI_DISP_SaveCustomDisplay;
     //NvAPI_DISP_SetDisplayConfig;
     //NvAPI_DISP_TryCustomDisplay; 

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