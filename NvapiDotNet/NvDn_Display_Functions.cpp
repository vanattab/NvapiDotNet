
#include "Stdafx.h"
#include "Nvdn.h"

using namespace System::Runtime::InteropServices;

namespace NvapiDotNet{
 //// DISPLAY HANDLE FUNCTIONS ////
 Nvdn_Status Nvdn::EnumNvidiaDisplayHandle(NvU32 thisEnum, NvdnDisplayHandle^% hand){
  return nCall(NvAPI_EnumNvidiaDisplayHandle(thisEnum, hand));
 }

 Nvdn_Status Nvdn::EnumNvidiaUnAttachedDisplayHandle(NvU32 thisEnum, NvdnUnAttachedDisplayHandle^% hand){
  return nCall(NvAPI_EnumNvidiaUnAttachedDisplayHandle(thisEnum, hand));
 }

 Nvdn_Status Nvdn::GetAssociatedNvidiaDisplayHandle(String^ displayName, NvdnDisplayHandle^% hand){
  char* pStr = (char*)Marshal::StringToHGlobalAnsi(displayName).ToPointer();
  Nvdn_Status s =  nCall(NvAPI_GetAssociatedNvidiaDisplayHandle(pStr, hand));
  Marshal::FreeHGlobal((IntPtr)pStr);
  return s;
 }

 Nvdn_Status Nvdn::Disp_GetAssociatedUnAttachedNvidiaDisplayHandle(String^ displayName, NvdnUnAttachedDisplayHandle^% hand){
  char* pStr = (char*)Marshal::StringToHGlobalAnsi(displayName).ToPointer();
  Nvdn_Status s = nCall(NvAPI_DISP_GetAssociatedUnAttachedNvidiaDisplayHandle(pStr, hand));
  Marshal::FreeHGlobal((IntPtr)pStr);
  return s;
 }

 Nvdn_Status Nvdn::CreateDisplayFromUnAttachedDisplay(NvdnUnAttachedDisplayHandle^ uHand, NvdnDisplayHandle^% dHand){
  return nCall(NvAPI_CreateDisplayFromUnAttachedDisplay(uHand, dHand));
 }

 //Nvdn_Status Nvdn::Disp_ColorControl(NvU32 displayID, Nvdn_COLOR_DATA^% colorDataOut){
 // return nCall(NvAPI_Disp_ColorControl(displayID, colorDataOut->nColorData));
 //}


 //Nvdn_Status Nvdn::EnumPhysicalGPUs(array<Nvdn_PhysicalGpuHandle^>^% gpuArray){
 // NvPhysicalGpuHandle pHandles[NVAPI_MAX_PHYSICAL_GPUS];
 // NvU32 count;
 // Nvdn_Status status = nCall(NvAPI_EnumPhysicalGPUs(pHandles, &count));
 // gpuArray = gcnew array < Nvdn_PhysicalGpuHandle^ >(count);
 // for (NvU32 i = 0; i < count; i++)
 //  gpuArray[i] = gcnew Nvdn_PhysicalGpuHandle(pHandles[i]);
 // NvU32 id;
 // status = nCall(NvAPI_SYS_GetDisplayIdFromGpuAndOutputId(pHandles[0], 0, &id));
 // return status;
 //}

 //Nvdn_Status Nvdn::Disp_GetDisplayIdByDisplayName(String^ name, NvU32^ displayId){
 // NvU32 id;
 // Nvdn_Status s = nCall(NvAPI_DISP_GetDisplayIdByDisplayName("\\DISPLAY1", &id));
 // displayId = id;
 // return s;
 //}

 //Nvdn_Status Nvdn::Disp_GetGDIPrimaryDisplayId(NvU32^% displayID){
 // NvU32 id;
 // Nvdn_Status s = nCall(NvAPI_DISP_GetGDIPrimaryDisplayId(&id));
 // displayID = id;
 // return s;
 //}

 //Nvdn_Status Nvdn::Disp_GetMonitorCapabilities(NvU32 displayID, Nvdn_MONITOR_CAPABILITIES^% caps){
 // Nvdn_Status s = nCall(NvAPI_DISP_GetMonitorCapabilities(displayID, caps));
 // return s;
 //}
}