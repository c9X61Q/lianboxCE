// busybox.exe @ 0x42f994 size=144

int __usercall sub_42F994@<eax>(int result@<eax>)
{
  _DWORD *v1; // ebx
  unsigned int i; // esi
  int v3; // ecx
  int v4; // edx

  v1 = (_DWORD *)dword_486010;
  if ( *(_BYTE *)(dword_486010 + 252) != 0 )
  {
    for ( i = result; v1[5] >= i; ++i )
    {
      result = sub_459FE8((int)(v1 + 55), *(char **)(v1[13] + 4 * i), 0, 0, 0);
      if ( result == 0 )
      {
        v3 = v1[54];
        result = v1[51];
        if ( v3 == 0 || *(_DWORD *)(result + 4 * v3 - 4) != i )
        {
          result = sub_47168C(v3, 1028);
          v1[51] = result;
          v4 = v1[54];
          v1[54] = v4 + 1;
          *(_DWORD *)(result + 4 * v4) = i;
        }
      }
    }
  }
  return result;
}

