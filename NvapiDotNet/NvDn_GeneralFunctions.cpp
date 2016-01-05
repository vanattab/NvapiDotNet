#include "Stdafx.h"
#include "Nvdn.h"
namespace NvapiDotNet{

 String^ Nvdn::GetErrorMessage(Nvdn_Status status){
  NvAPI_ShortString s;
  NvAPI_GetErrorMessage((NvAPI_Status)status, s);
  return gcnew String(s);
 }

 String^ Nvdn::GetInterfaceVersionString(){
  NvAPI_ShortString s;
  NvAPI_GetInterfaceVersionString(s);
  return gcnew String(s);
 }

 Nvdn_Status Nvdn::Initialize(){
  return nCall(NvAPI_Initialize());
 }

 Nvdn_Status Nvdn::Unload(){
  return nCall(NvAPI_Unload());
 }
}