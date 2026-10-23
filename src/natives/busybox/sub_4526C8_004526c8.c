// busybox.exe @ 0x4526c8 size=34

_DWORD *__usercall sub_4526C8@<eax>(_DWORD *result@<eax>)
{
  int v1; // ecx
  int i; // edx

  result[2] = 0;
  *result = 0;
  v1 = result[3];
  for ( i = 0; result[1] > i; ++i )
    *(_DWORD *)(v1 + 4 * i) = 0;
  return result;
}

