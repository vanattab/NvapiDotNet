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
  NvDn_Handle(void* hand){
   nHandle = gcnew IntPtr(hand);
  }

  operator StereoHandle(){
   return nHandle->ToPointer();
  }

  void* ToPointer(){
    return nHandle->ToPointer();
  }
};
public ref class NvDn_StereoHandle : NvDn_Handle{ 
public: 
 NvDn_StereoHandle(){}
 NvDn_StereoHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_StereoHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_DisplayHandle : NvDn_Handle{
public: 
 NvDn_DisplayHandle(){}
 NvDn_DisplayHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_DisplayHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_MonitorHandle : NvDn_Handle{
public: 
 NvDn_MonitorHandle(){}
 NvDn_MonitorHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_MonitorHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_UnAttachedDisplayHandle : NvDn_Handle{
public:
 NvDn_UnAttachedDisplayHandle(){}
 NvDn_UnAttachedDisplayHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_UnAttachedDisplayHandle(void* hand) : NvDn_Handle(hand){}
 };
public ref class NvDn_LogicalGpuHandle : NvDn_Handle{
public:
 NvDn_LogicalGpuHandle(){}
 NvDn_LogicalGpuHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_LogicalGpuHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_PhysicalGpuHandle : NvDn_Handle{
public:
 NvDn_PhysicalGpuHandle(){}
 NvDn_PhysicalGpuHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_PhysicalGpuHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_VisualComputingDeviceHandle : NvDn_Handle{
public:
 NvDn_VisualComputingDeviceHandle(){}
 NvDn_VisualComputingDeviceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_VisualComputingDeviceHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_HICHandle : NvDn_Handle{
public:
 NvDn_HICHandle(){}
 NvDn_HICHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} 
 NvDn_HICHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_GSyncDeviceHandle : NvDn_Handle{
public:
 NvDn_GSyncDeviceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_GSyncDeviceHandle(){}
 NvDn_GSyncDeviceHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_VioHandle : NvDn_Handle{
public:
 NvDn_VioHandle(){}
 NvDn_VioHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_VioHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_TransitionHandle : NvDn_Handle{
public: 
 NvDn_TransitionHandle(){}
 NvDn_TransitionHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} 
 NvDn_TransitionHandle(void* hand) : NvDn_Handle(hand){}
};
public ref class NvDn_AudioHandle : NvDn_Handle{
public:
 NvDn_AudioHandle(){}
 NvDn_AudioHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_AudioHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_3DVPContextHandle : NvDn_Handle{
public: 
 NvDn_3DVPContextHandle(){}
 NvDn_3DVPContextHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} 
 NvDn_3DVPContextHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_3DVPTransceiverHandle : NvDn_Handle{
public:
 NvDn_3DVPTransceiverHandle(){}
 NvDn_3DVPTransceiverHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_3DVPTransceiverHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_3DVPGlassesHandle : NvDn_Handle{
public:
 NvDn_3DVPGlassesHandle(){}
 NvDn_3DVPGlassesHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){} 
 NvDn_3DVPGlassesHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_SourceHandle : NvDn_Handle{
public:
 NvDn_SourceHandle(){}
 NvDn_SourceHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_SourceHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_TargetHandle : NvDn_Handle{
public:
 NvDn_TargetHandle(){}
 NvDn_TargetHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_TargetHandle(void* hand) : NvDn_Handle(hand){}
};

public ref class NvDn_NVDX_SwapChainHandle : NvDn_Handle{
public:
 NvDn_NVDX_SwapChainHandle(){}
 NvDn_NVDX_SwapChainHandle(IntPtr^ iPtr) : NvDn_Handle(iPtr){}
 NvDn_NVDX_SwapChainHandle(void* hand) : NvDn_Handle(hand){}
};
// End NvDn Handles


