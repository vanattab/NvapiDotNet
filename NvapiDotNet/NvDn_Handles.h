#pragma once

public ref class NvDn_Handle{
public:
  System::IntPtr^ nHandle;
  NvDn_Handle(){
    NvDn_Handle(nullptr);
  }
  NvDn_Handle(void* loc){
    nHandle = gcnew System::IntPtr(loc);
  }
  void* ToPointer(){
    return nHandle->ToPointer();
  }
};

public ref class NvDn_StereoHandle : NvDn_Handle{};
public ref class NvDn_DisplayHandle : NvDn_Handle{};
public ref class NvDn_MonitorHandle : NvDn_Handle{};
public ref class NvDn_UnAttachedDisplayHandle : NvDn_Handle{};
public ref class NvDn_LogicalGpuHandle : NvDn_Handle{};
public ref class NvDn_PhysicalGpuHandle : NvDn_Handle{};
public ref class NvDn_EventHandle : NvDn_Handle{};
public ref class NvDn_VisualComputingDeviceHandle : NvDn_Handle{};
public ref class NvDn_HICHandle : NvDn_Handle{};
public ref class NvDn_GSyncDeviceHandle : NvDn_Handle{};
public ref class NvDn_VioHandle : NvDn_Handle{};
public ref class NvDn_TransitionHandle : NvDn_Handle{};
public ref class NvDn_AudioHandle : NvDn_Handle{};
public ref class NvDn_3DVPContextHandle : NvDn_Handle{};
public ref class NvDn_3DVPTransceiverHandle : NvDn_Handle{};
public ref class NvDn_3DVPGlassesHandle : NvDn_Handle{};
public ref class NvDn_SourceHandle : NvDn_Handle{};
public ref class NvDn_TargetHandle : NvDn_Handle{};
public ref class NvDn_NVDX_SwapChainHandle : NvDn_Handle{};

// End NvDn Handles


