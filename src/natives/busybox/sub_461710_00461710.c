// busybox.exe @ 0x461710 size=59

int __usercall sub_461710@<eax>(const char **a1@<eax>)
{
  int v2; // eax
  int v3; // ecx
  int result; // eax
  void *v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // [esp+0h] [ebp-4h] BYREF

  v2 = sub_430048(*a1);
  if ( v2 >= 0 )
  {
    v3 = (unsigned __int8)byte_47D760[v2 >> 2];
    if ( _bittest(&v3, 2 * (v2 & 3)) )
      return sub_45BF60();
  }
  v5 = sub_44484C(a1);
  if ( (int)v5 <= 0 )
    return -1;
  v8 = v6;
  if ( sub_45C5D4(0, (int)&v8, (DWORD)v5) == -1 )
    return -1;
  v7 = v8 & 0x7F;
  result = BYTE1(v8);
  if ( (v8 & 0x7F) != 0 )
  {
    result = 0;
    if ( (char)(v7 + 1) > 1 )
      return v7 + 384;
  }
  return result;
}

