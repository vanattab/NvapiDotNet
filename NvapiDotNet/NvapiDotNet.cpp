// This is the main DLL file.

#include "stdafx.h"
#include "NvapiDotNet.h"

//using namespace std;
using namespace System;
using namespace System::IO;

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
    static NvDn_STEREO_CAPS^ NvDn_GetStereoCaps(IntPtr^ hMon) {
      NVAPI_STEREO_CAPS* nCaps = new NVAPI_STEREO_CAPS;
      NVAPI_STEREO_CAPS* nCaps2 = new NVAPI_STEREO_CAPS();
      NvDn_Status status = nCall(NvAPI_Stereo_GetStereoSupport((NvMonitorHandle)hMon->ToPointer(), nCaps));
      return gcnew NvDn_STEREO_CAPS(nCaps);
    }

    static NvDn_Status NvDn_Stereo_Enable(){
      return nCall(NvAPI_Stereo_Enable());
    }

  private:
    static NvDn_Status nCall(NvAPI_Status nativeNvapiCall) {

#ifdef _DEBUG
      debugLogStream->WriteLine(nativeNvapiCall);
#endif
      return static_cast<NvDn_Status>(nativeNvapiCall);
    }
    static StreamWriter^ debugLogStream;
  };
}