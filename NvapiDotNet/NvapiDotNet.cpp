// This is the main DLL file.

#include "stdafx.h"
#include "NvapiDotNet.h"
#include "Nvdn.h"


//using namespace std;
using namespace System;
using namespace System::IO;
using namespace System::Runtime::InteropServices;

namespace NvapiDotNet {

  public ref class Nvdn3
  {
  //  // TODO: Add your methods for this class here.
  public:
  //  static Nvdn_Status Nvdn_Initialize() {
  //    #ifdef _DEBUG
  //    debugLogStream = File::AppendText("Nvdn_Log.txt");
  //    #endif
  //    return nCall(NvAPI_Initialize());
  //  }

  //  static Nvdn_Status Nvdn_Unload() {
  //    return nCall(NvAPI_Unload());
  //  }


  //  // *** Stereo Calls *** ///
  //  static Nvdn_STEREO_CAPS^ Nvdn_Stereo_GetStereoCaps(Nvdn_MonitorHandle^ hMon) {
  //    NVAPI_STEREO_CAPS* nCaps = new NVAPI_STEREO_CAPS;
  //    NVAPI_STEREO_CAPS* nCaps2 = new NVAPI_STEREO_CAPS();
  //    Nvdn_Status status = nCall(NvAPI_Stereo_GetStereoSupport((NvMonitorHandle)hMon->ToPointer(), nCaps));
  //    return gcnew Nvdn_STEREO_CAPS(nCaps);
  //  }

  //  static Nvdn_Status Nvdn_Stereo_Enable(){
  //    return nCall(NvAPI_Stereo_Enable());
  //  }

  //  static Nvdn_Status Nvdn_Stereo_Disable(){
  //    return nCall(NvAPI_Stereo_Disable());
  //  }

  //  static Nvdn_Status Nvdn_Stereo_CaptureJpegImage(Nvdn_StereoHandle^ sHand, unsigned int jpegQuality0to100){
  //    return nCall(NvAPI_Stereo_CaptureJpegImage((StereoHandle)sHand->ToPointer(), jpegQuality0to100));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_CapturePngImage(Nvdn_StereoHandle^ sHand){
  //    return nCall(NvAPI_Stereo_CapturePngImage((StereoHandle)sHand->ToPointer()));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_CreateHandleFromD3D_Device_Pointer(IntPtr^ pD3dDevice, Nvdn_StereoHandle^% pStereoHand){
  //   //return nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), (StereoHandle*)(pStereoHand->ToPointer())));
  //   StereoHandle sHand;
  //   Nvdn_Status status = nCall(NvAPI_Stereo_CreateHandleFromIUnknown((IUnknown*)pD3dDevice->ToPointer(), &sHand));
  //   pStereoHand = gcnew Nvdn_StereoHandle(sHand);
  //   return status;
  //  }

  //  static Nvdn_Status Nvdn_Stereo_DestroyHandle(Nvdn_StereoHandle^ sHand){
  //    return nCall(NvAPI_Stereo_DestroyHandle((StereoHandle)sHand->ToPointer()));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_Activate(Nvdn_StereoHandle^ sHand){
  //    return nCall(NvAPI_Stereo_Activate(sHand));
  //  }
  //  
  //  static Nvdn_Status Nvdn_Stereo_Deactivate(Nvdn_StereoHandle^ sHand){
  //   void* sH = sHand->ToPointer();
  //    return nCall(NvAPI_Stereo_Deactivate(sH));
  //  }
  //  
  //  static Nvdn_Status Nvdn_Stereo_Debug_WasLastDrawStereoized(Nvdn_StereoHandle^ sHand, Byte% wasStereo){
  //    NvU8 val;
  //    Nvdn_Status status = nCall(NvAPI_Stereo_Debug_WasLastDrawStereoized((StereoHandle)sHand->ToPointer(), &val));
  //    wasStereo = val;
  //    return status;
  //  }
  //  
  //  static Nvdn_Status Nvdn_Stereo_CreateConfigurationProfileRegistryKey(Nvdn_STEREO_REGISTRY_PROFILE_TYPE regProType){
  //    return nCall(NvAPI_Stereo_CreateConfigurationProfileRegistryKey((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_DeleteConfigurationProfileRegistryKey(Nvdn_STEREO_REGISTRY_PROFILE_TYPE regProType){
  //   return nCall(NvAPI_Stereo_DeleteConfigurationProfileRegistryKey((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_SetConfigurationProfileValue(Nvdn_STEREO_REGISTRY_PROFILE_TYPE regProType, NV_STEREO_REGISTRY_ID valueRegistryID, IntPtr pValue){
  //   return nCall(NvAPI_Stereo_SetConfigurationProfileValue((NV_STEREO_REGISTRY_PROFILE_TYPE)regProType, valueRegistryID, pValue.ToPointer()));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_InitActivation(Nvdn_StereoHandle^ sHand, Nvdn_STEREO_INIT_ACTIVATION_FLAGS flags){
  //    return nCall(NvAPI_Stereo_InitActivation((StereoHandle)sHand->ToPointer(), (NVAPI_STEREO_INIT_ACTIVATION_FLAGS) flags));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_SetDriverMode(NV_STEREO_DRIVER_MODE mode){
  //    return nCall(NvAPI_Stereo_SetDriverMode(mode));
  //  }

  //  static Nvdn_Status Nvdn_Stereo_IsEnabled(Byte%  isEnabled){
  //   NvU8 val;
  //   Nvdn_Status status = nCall(NvAPI_Stereo_IsEnabled(&val));
  //    isEnabled = val;
  //    return status;
  //  }

  //  static Nvdn_Status Nvdn_Stereo_IsActivted(Nvdn_StereoHandle^ sHand, Byte% isActivated){
  //    NvU8 val;
  //    Nvdn_Status status = nCall(NvAPI_Stereo_IsActivated((StereoHandle)sHand->ToPointer(), &val));
  //    isActivated = val;
  //    return status;
  //  }

  //  static Nvdn_Status Nvdn_Stereo_GetConvergence(Nvdn_StereoHandle^ sHand, float% pConvergence){
  //    float nConverge;
  //    Nvdn_Status status =  nCall(NvAPI_Stereo_GetConvergence((StereoHandle)sHand->ToPointer(), &nConverge));
  //    pConvergence = nConverge;
  //    return status;
  //  }

    //Display CALLS
    static void NvdnTestCodeFunction(){
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
     


     //NvUnAttachedDisplayHandle g;
     //NvUnAttachedDisplayHandle__* b;
     //NvUnAttachedDisplayHandle* c;
    }



    
    static Nvdn_Status Nvdn_Disp_ColorControl(NvU32 displayID, Nvdn_COLOR_DATA^% colorDataOut){
     return nCall(NvAPI_Disp_ColorControl(displayID, colorDataOut->nColorData));
    }


    static Nvdn_Status Nvdn_EnumPhysicalGPUs(array<NvdnPhysicalGpuHandle^>^% gpuArray){
     //NvPhysicalGpuHandle pHandles[NVAPI_MAX_PHYSICAL_GPUS];
     //NvU32 count;
     //Nvdn_Status status = nCall(NvAPI_EnumPhysicalGPUs(pHandles, &count));
     //gpuArray = gcnew array < NvdnPhysicalGpuHandle^ >(count);
     //for (NvU32 i = 0; i < count; i++)
     // gpuArray[i] = gcnew NvdnPhysicalGpuHandle(pHandles[i]);
     //NvU32 id;
     //status = nCall(NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(pHandles[0], 0, &id));
     return (Nvdn_Status)-1;
    }

    static Nvdn_Status Nvdn_SYS_GetDisplayIdFromGpuAndOutputId(NvdnPhysicalGpuHandle^ phyHand, NvU32 outputID, NvU32^ displayID){
     NvU32 id;
     Nvdn_Status status = nCall(NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(phyHand, outputID, &id));
     displayID = id;
     return status;
    }

    static Nvdn_Status Nvdn_Disp_GetDisplayIdByDisplayName(String^ name, NvU32^ displayId){
     NvU32 id;
     Nvdn_Status s =nCall( NvAPI_DISP_GetDisplayIdByDisplayName("\\DISPLAY1", &id));
     displayId = id;
     return s;
    }

    static Nvdn_Status Nvdn_Disp_GetGDIPrimaryDisplayId(NvU32^% displayID){
     NvU32 id;
     Nvdn_Status s = nCall(NvAPI_DISP_GetGDIPrimaryDisplayId(&id));
     displayID = id;
     return s;
    }

    static Nvdn_Status Nvdn_Disp_GetMonitorCapabilities(NvU32 displayID, Nvdn_MONITOR_CAPABILITIES^% caps){
     Nvdn_Status s = nCall(NvAPI_DISP_GetMonitorCapabilities(displayID, caps));
      return s;
    }

    static void Nvdn_TEST(){
     //NV_MONITOR_CONN_TYPE t;
     NvAPI_Initialize();
     NV_MONITOR_CAPABILITIES cData;
     cData.version = NV_MONITOR_CAPABILITIES_VER;
     NvU32 dispID;
     NvAPI_Status s = NvAPI_DISP_GetGDIPrimaryDisplayId(&dispID);
     s = NvAPI_DISP_GetMonitorCapabilities(dispID, &cData);

     NvU32 capsCount =0 ;
     s= NvAPI_DISP_GetMonitorColorCapabilities(dispID, NULL, &capsCount);
     NV_MONITOR_COLOR_CAPS* monColorCaps;
     monColorCaps = new NV_MONITOR_COLOR_CAPS[capsCount];
     for (NvU32 i = 0; i < capsCount; i++)
      monColorCaps[i].version = NV_MONITOR_COLOR_CAPS_VER;
     s= NvAPI_DISP_GetMonitorColorCapabilities(dispID, monColorCaps, &capsCount);

     NV_MONITOR_COLOR_CAPS cap1 = monColorCaps[0];
     NV_MONITOR_COLOR_CAPS cap2 = monColorCaps[1];
     NV_MONITOR_COLOR_CAPS cap3 = monColorCaps[2];

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
    static Nvdn_Status nCall(NvAPI_Status nativeNvapiCall) {
#     ifdef _DEBUG
      debugLogStream->WriteLine(nativeNvapiCall);
#     endif
      return static_cast<Nvdn_Status>(nativeNvapiCall);
    }
    static StreamWriter^ debugLogStream;
  };
}