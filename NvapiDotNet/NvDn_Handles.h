#pragma once
using namespace System;

public ref class NvDn_Handle{
public:
  System::IntPtr^ nHandle;
  NvDn_Handle(){
    nHandle = gcnew IntPtr();
  }
  NvDn_Handle(IntPtr^ iPtr){
   nHandle = iPtr;
  }

  void* ToPointer(){
    return nHandle->ToPointer();
  }
};
public ref class NvDn_StereoHandle : NvDn_Handle{ public: NvDn_StereoHandle(){} NvDn_StereoHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_DisplayHandle : NvDn_Handle{public: NvDn_DisplayHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_MonitorHandle : NvDn_Handle{public: NvDn_MonitorHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_UnAttachedDisplayHandle : NvDn_Handle{ public: NvDn_UnAttachedDisplayHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_LogicalGpuHandle : NvDn_Handle{public: NvDn_LogicalGpuHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_PhysicalGpuHandle : NvDn_Handle{public: NvDn_PhysicalGpuHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_VisualComputingDeviceHandle : NvDn_Handle{public: NvDn_VisualComputingDeviceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_HICHandle : NvDn_Handle{public: NvDn_HICHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_GSyncDeviceHandle : NvDn_Handle{public: NvDn_GSyncDeviceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_VioHandle : NvDn_Handle{public: NvDn_VioHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_TransitionHandle : NvDn_Handle{public: NvDn_TransitionHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_AudioHandle : NvDn_Handle{public: NvDn_AudioHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_3DVPContextHandle : NvDn_Handle{public: NvDn_3DVPContextHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_3DVPTransceiverHandle : NvDn_Handle{public: NvDn_3DVPTransceiverHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_3DVPGlassesHandle : NvDn_Handle{public: NvDn_3DVPGlassesHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_SourceHandle : NvDn_Handle{public: NvDn_SourceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_TargetHandle : NvDn_Handle{public: NvDn_TargetHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };
public ref class NvDn_NVDX_SwapChainHandle : NvDn_Handle{public: NvDn_NVDX_SwapChainHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} };

// End NvDn Handles


