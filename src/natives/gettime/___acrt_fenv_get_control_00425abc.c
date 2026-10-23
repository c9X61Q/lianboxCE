// gettime.exe @ 0x425abc size=128

unsigned int __acrt_fenv_get_control()
{
  unsigned int v0; // esi
  unsigned int v1; // ecx
  unsigned int v2; // eax
  _WORD v4[14]; // [esp+8h] [ebp-20h] BYREF
  int v5; // [esp+24h] [ebp-4h]

  memset(v4, 0, sizeof(v4));
  __asm
  {
    fnstenv byte ptr [ebp+var_20]
    fldenv  byte ptr [ebp+var_20]
  }
  v0 = to_abstract_control(v4[0] & 0x1F3F);
  if ( dword_4386A4 >= 1 )
  {
    v5 = _mm_getcsr();
    v1 = v5 & 0xFFC0;
  }
  else
  {
    v1 = 0;
  }
  v2 = to_abstract_control(v1);
  return v0 | ((v0 & 0x300 | (4 * (v0 & 0x3F | ((v2 & 0xFFFFFF00 | (4 * (v2 & 0x3F))) << 6)))) << 14) | v2;
}

