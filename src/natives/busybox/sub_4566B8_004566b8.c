// busybox.exe @ 0x4566b8 size=72

_DWORD *__usercall sub_4566B8@<eax>(_DWORD *result@<eax>)
{
  int v1; // ecx
  int v2; // edi
  int i; // ebx
  int v4; // ebx

  v1 = result[5];
  if ( v1 > result[8] )
    v1 = result[8];
  v2 = result[3];
  for ( i = v2; i < v1; ++i )
    *(_BYTE *)(result[1] + i) = *(_BYTE *)(result[12] + *(unsigned __int8 *)(result[2] + i + *result));
  v4 = 0;
  if ( v1 >= v2 )
    v4 = v1 - v2;
  result[3] = v2 + v4;
  result[4] = v2 + v4;
  return result;
}

