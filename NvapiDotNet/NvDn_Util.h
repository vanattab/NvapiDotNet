#pragma once
#include "Stdafx.h"
namespace NvapiDotNet{
 static Nvdn_Status nCall(NvAPI_Status status){
   return static_cast<Nvdn_Status>(status);
 };
}