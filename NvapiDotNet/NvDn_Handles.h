#pragma once
using namespace System;
NV_DECLARE_HANDLE(NvdnNativeHandle);

public ref class NvdnStereoHandle{
public:
 StereoHandle* hand = new StereoHandle;
 operator StereoHandle*(){ return hand; }
 operator StereoHandle(){ return *hand; }
};

public ref class NvdnHandle abstract{
public:
 NvdnNativeHandle* hand = new NvdnNativeHandle;
};

public ref class NvdnDisplayHandle : NvdnHandle{
public:
 operator NvDisplayHandle*(){ return (NvDisplayHandle*)hand; }
 operator NvDisplayHandle(){ return (NvDisplayHandle)*hand; }
};

public ref class NvdnMonitorHandle : NvdnHandle{
public:
 operator NvMonitorHandle*(){ return (NvMonitorHandle*)hand; }
 operator NvMonitorHandle(){ return (NvMonitorHandle)*hand; }
};

public ref class NvdnUnAttachedDisplayHandle : NvdnHandle{
public:
 operator NvUnAttachedDisplayHandle*(){ return (NvUnAttachedDisplayHandle*)hand; }
 operator NvUnAttachedDisplayHandle(){ return (NvUnAttachedDisplayHandle)*hand; }
};

public ref class NvdnLogicalGpuHandle : NvdnHandle{
public:
 operator NvLogicalGpuHandle*() { return (NvLogicalGpuHandle*)hand; }
 operator NvLogicalGpuHandle() { return (NvLogicalGpuHandle)*hand; }
};

public ref class NvdnPhysicalGpuHandle : NvdnHandle{
public:
 operator NvPhysicalGpuHandle*() { return (NvPhysicalGpuHandle*)hand; }
 operator NvPhysicalGpuHandle() { return (NvPhysicalGpuHandle)*hand; }
};

public ref class NvdnEventHandle : NvdnHandle{
public:
 operator NvEventHandle*() { return (NvEventHandle*)hand; }
 operator NvEventHandle() { return (NvEventHandle)*hand; }
};

public ref class NvdnVisualComputingDeviceHandle : NvdnHandle{
public:
 operator NvVisualComputingDeviceHandle*() { return (NvVisualComputingDeviceHandle*)hand; }
 operator NvVisualComputingDeviceHandle() { return (NvVisualComputingDeviceHandle)*hand; }
};

public ref class NvdnHICHandle : NvdnHandle{
public:
 operator NvHICHandle*() { return (NvHICHandle*)hand; }
 operator NvHICHandle() { return (NvHICHandle)*hand; }
};

public ref class NvdnGSyncDeviceHandle : NvdnHandle{
public:
 operator NvGSyncDeviceHandle*() { return (NvGSyncDeviceHandle*)hand; }
 operator NvGSyncDeviceHandle() { return (NvGSyncDeviceHandle)*hand; }
};

public ref class NvdnVioHandle : NvdnHandle{
public:
 operator NvVioHandle*() { return (NvVioHandle*)hand; }
 operator NvVioHandle() { return (NvVioHandle)*hand; }
};

public ref class NvdnTransitionHandle : NvdnHandle{
public:
 operator NvTransitionHandle*() { return (NvTransitionHandle*)hand; }
 operator NvTransitionHandle() { return (NvTransitionHandle)*hand; }
};
public ref class NvdnAudioHandle : NvdnHandle{
public:
 operator NvAudioHandle*() { return (NvAudioHandle*)hand; }
 operator NvAudioHandle() { return (NvAudioHandle)*hand; }
};
public ref class Nvdn3DVPContextHandle : NvdnHandle{
public:
 operator Nv3DVPContextHandle*() { return (Nv3DVPContextHandle*)hand; }
 operator Nv3DVPContextHandle() { return (Nv3DVPContextHandle)*hand; }
};
public ref class Nvdn3DVPTransceiverHandle : NvdnHandle{
public:
 operator Nv3DVPTransceiverHandle*() { return (Nv3DVPTransceiverHandle*)hand; }
 operator Nv3DVPTransceiverHandle() { return (Nv3DVPTransceiverHandle)*hand; }
};
public ref class Nvdn3DVPGlassesHandle : NvdnHandle{
public:
 operator Nv3DVPGlassesHandle*() { return (Nv3DVPGlassesHandle*)hand; }
 operator Nv3DVPGlassesHandle() { return (Nv3DVPGlassesHandle)*hand; }
};
public ref class NvdnSourceHandle : NvdnHandle{
public:
 operator NvSourceHandle*() { return (NvSourceHandle*)hand; }
 operator NvSourceHandle() { return (NvSourceHandle)*hand; }
};
public ref class NvdnTargetHandle : NvdnHandle{
public:
 operator NvTargetHandle*() { return (NvTargetHandle*)hand; }
 operator NvTargetHandle() { return (NvTargetHandle)*hand; }
};
public ref class NvdnDX_SwapChainHandle : NvdnHandle{
public:
 operator NVDX_SwapChainHandle*() { return (NVDX_SwapChainHandle*)hand; }
 operator NVDX_SwapChainHandle() { return (NVDX_SwapChainHandle)*hand; }
};





//NV_DECLARE_HANDLE(Nvdn_NativeStructHandle);
//
//public ref class Nvdn_Handle abstract{
//public:
//  System::IntPtr^ nHandle;
//  Nvdn_Handle(){
//    nHandle = gcnew IntPtr();
//  }
//  Nvdn_Handle(IntPtr^ iPtr){
//   nHandle = iPtr;
//  }
//  Nvdn_Handle(void* hand){
//   nHandle = gcnew IntPtr(hand);
//  }
//
//  void* ToPointer(){
//    return nHandle->ToPointer();
//  }
//};
//
//public ref class Nvdn_Struct_Handle : Nvdn_Handle{
//public:
// Nvdn_NativeStructHandle* nativeHandle = new Nvdn_NativeStructHandle;
//
// operator NvDisplayHandle*(){
//  //return (NvDisplayHandle*)nHandle->ToPointer();
//  return (NvDisplayHandle*)nativeHandle;
// }
//};
//
//// Non-Abstract handle definitions
//public ref class Nvdn_StereoHandle : Nvdn_Handle{ 
//public: 
// Nvdn_StereoHandle(){}
// Nvdn_StereoHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_StereoHandle(void* hand) : Nvdn_Handle(hand){}
// 
// operator StereoHandle(){
//  return nHandle->ToPointer();
// }
//};
//
//public ref class Nvdn_MonitorHandle : Nvdn_Handle{
//public:
// Nvdn_MonitorHandle(){}
// Nvdn_MonitorHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_MonitorHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_DisplayHandle : Nvdn_Handle{
//public: 
// Nvdn_DisplayHandle(){}
// Nvdn_DisplayHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_DisplayHandle(void* hand) : Nvdn_Handle(hand){}
//
// operator NvDisplayHandle*(){
//  return (NvDisplayHandle*)nHandle->ToPointer();
// }
//};
//
//public ref class Nvdn_UnAttachedDisplayHandle : Nvdn_Handle{
//public:
// Nvdn_UnAttachedDisplayHandle(){}
// Nvdn_UnAttachedDisplayHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_UnAttachedDisplayHandle(void* hand) : Nvdn_Handle(hand){}
//
// operator NvUnAttachedDisplayHandle*(){
//  return (NvUnAttachedDisplayHandle*)nHandle->ToPointer();
// }
// operator NvUnAttachedDisplayHandle(){
//  return ((NvUnAttachedDisplayHandle*)nHandle->ToPointer())[0];
// }
//
//};
//public ref class Nvdn_LogicalGpuHandle : Nvdn_Handle{
//public:
// Nvdn_LogicalGpuHandle(){}
// Nvdn_LogicalGpuHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_LogicalGpuHandle(void* hand) : Nvdn_Handle(hand){}
//};
//public ref class Nvdn_PhysicalGpuHandle : Nvdn_Handle{
//public:
// Nvdn_PhysicalGpuHandle(){}
// Nvdn_PhysicalGpuHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_PhysicalGpuHandle(void* hand) : Nvdn_Handle(hand){}
// operator NvPhysicalGpuHandle(){
//  return (NvPhysicalGpuHandle)nHandle->ToPointer();
// }
//};
//
//public ref class Nvdn_VisualComputingDeviceHandle : Nvdn_Handle{
//public:
// Nvdn_VisualComputingDeviceHandle(){}
// Nvdn_VisualComputingDeviceHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_VisualComputingDeviceHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_HICHandle : Nvdn_Handle{
//public:
// Nvdn_HICHandle(){}
// Nvdn_HICHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){} 
// Nvdn_HICHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_GSyncDeviceHandle : Nvdn_Handle{
//public:
// Nvdn_GSyncDeviceHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_GSyncDeviceHandle(){}
// Nvdn_GSyncDeviceHandle(void* hand) : Nvdn_Handle(hand){}
//};
//public ref class Nvdn_VioHandle : Nvdn_Handle{
//public:
// Nvdn_VioHandle(){}
// Nvdn_VioHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_VioHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_TransitionHandle : Nvdn_Handle{
//public: 
// Nvdn_TransitionHandle(){}
// Nvdn_TransitionHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){} 
// Nvdn_TransitionHandle(void* hand) : Nvdn_Handle(hand){}
//};
//public ref class Nvdn_AudioHandle : Nvdn_Handle{
//public:
// Nvdn_AudioHandle(){}
// Nvdn_AudioHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_AudioHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_3DVPContextHandle : Nvdn_Handle{
//public: 
// Nvdn_3DVPContextHandle(){}
// Nvdn_3DVPContextHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){} 
// Nvdn_3DVPContextHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_3DVPTransceiverHandle : Nvdn_Handle{
//public:
// Nvdn_3DVPTransceiverHandle(){}
// Nvdn_3DVPTransceiverHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_3DVPTransceiverHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_3DVPGlassesHandle : Nvdn_Handle{
//public:
// Nvdn_3DVPGlassesHandle(){}
// Nvdn_3DVPGlassesHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){} 
// Nvdn_3DVPGlassesHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_SourceHandle : Nvdn_Handle{
//public:
// Nvdn_SourceHandle(){}
// Nvdn_SourceHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_SourceHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_TargetHandle : Nvdn_Handle{
//public:
// Nvdn_TargetHandle(){}
// Nvdn_TargetHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_TargetHandle(void* hand) : Nvdn_Handle(hand){}
//};
//
//public ref class Nvdn_NVDX_SwapChainHandle : Nvdn_Handle{
//public:
// Nvdn_NVDX_SwapChainHandle(){}
// Nvdn_NVDX_SwapChainHandle(IntPtr^ iPtr) : Nvdn_Handle(iPtr){}
// Nvdn_NVDX_SwapChainHandle(void* hand) : Nvdn_Handle(hand){}
//};
// End Nvdn Handles


