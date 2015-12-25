#pragma once
using namespace System;
using namespace System::Reflection;

[AttributeUsageAttribute(AttributeTargets::Enum | AttributeTargets::Field, AllowMultiple=false)]
public ref class EnumDescriptionAttribute : Attribute{
private:
  String^ m_description;
public:
  property String^ Description{
    String^ get(){ return m_description; }
  };
  EnumDescriptionAttribute(String^ description) : Attribute(){
    m_description = description;
  }
};

public ref class EnumHelper{
public:
  static String^ GetDesciption(Enum^ enumVal){
    String^ description = enumVal->ToString();
    FieldInfo^ fieldInfo = enumVal->GetType()->GetField(description);
    array<EnumDescriptionAttribute^>^ attributes = (array<EnumDescriptionAttribute^>^) fieldInfo->GetCustomAttributes(Type::GetType("EnumDescriptionAttribute"), false);
    if (attributes != nullptr && attributes->Length > 0)
      description = attributes[0]->Description;
    return description;
  }
};