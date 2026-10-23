// gettime.exe @ 0x407250 size=111

int __thiscall sub_407250(char *this)
{
  _BYTE v2[8]; // [esp+0h] [ebp-10h] BYREF
  int v3; // [esp+8h] [ebp-8h]
  int v4; // [esp+Ch] [ebp-4h]

  v4 = (int)this;
  v3 = unknown_libname_40(this + *(_DWORD *)(*(_DWORD *)this + 4));
  if ( v3 != 0 )
  {
    sub_403360(v2, v4);
    if ( unknown_libname_12(v2) != 0 && sub_407A60(v3) == -1 )
      sub_408150(4, 0);
    sub_403920(v2);
  }
  return v4;
}

