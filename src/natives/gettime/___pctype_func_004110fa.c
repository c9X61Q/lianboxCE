// gettime.exe @ 0x4110fa size=36

const unsigned __int16 *__cdecl __pctype_func()
{
  const unsigned __int16 **v0; // ecx
  int v1; // eax
  const unsigned __int16 **v3; // [esp+0h] [ebp-4h] BYREF

  v3 = v0;
  v1 = __acrt_getptd();
  v3 = *(const unsigned __int16 ***)(v1 + 76);
  sub_417F5D(v1, &v3);
  return *v3;
}

