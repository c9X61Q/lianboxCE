// gettime.exe @ 0x41a259 size=84

int __stdcall __acrt_EnumSystemLocalesEx(int a1, int a2, int a3, int a4)
{
  int (__stdcall *EnumSystemLocales)(); // eax
  int v6; // [esp+4h] [ebp-10h] BYREF
  int *v7; // [esp+8h] [ebp-Ch] BYREF
  int v8; // [esp+Ch] [ebp-8h] BYREF

  EnumSystemLocales = try_get_EnumSystemLocalesEx();
  if ( EnumSystemLocales != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)(), int, int, int, int))EnumSystemLocales)(
             EnumSystemLocales,
             a1,
             a2,
             a3,
             a4);
  v7 = &a1;
  v8 = 4;
  v6 = 4;
  return __crt_seh_guarded_call<int>::operator()<_lambda_6b4b7855443974f2b4b77000ea21c99c_,_lambda_8f7d3b162ab39427f4fa9995c67a7986_ &,_lambda_cc9a5ba8a5d8428b9634eab82665e5dc_>(
           &v6,
           &v7,
           &v8);
}

