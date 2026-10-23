// gettime.exe @ 0x425be6 size=123

int __cdecl __acrt_fenv_set_control(unsigned int a1)
{
  int result; // eax
  _DWORD v2[7]; // [esp+4h] [ebp-20h] BYREF
  unsigned int v3; // [esp+20h] [ebp-4h]

  memset(v2, 0, sizeof(v2));
  __asm { fnstenv byte ptr [ebp+var_20] }
  v3 = to_machine_x87_control(a1) & 0x1F3F;
  v2[0] = v3 | v2[0] & 0xFFFFE0C0;
  __asm { fldenv  byte ptr [ebp+var_20] }
  result = to_machine_sse_control(a1);
  if ( dword_4386A4 >= 1 )
  {
    result &= 0xFFC0u;
    _mm_setcsr(result | _mm_getcsr() & 0xFFFF003F);
  }
  return result;
}

