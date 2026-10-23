// busybox.exe @ 0x420bec size=99

_BYTE *sub_420BEC()
{
  _DWORD *v0; // ebx
  int v1; // esi
  int v2; // ecx
  _BYTE *result; // eax
  int v4; // edx
  int v5; // ecx
  int v6; // edx

  v0 = dword_48600C;
  v1 = *((_DWORD *)dword_48600C + 8);
  while ( 1 )
  {
    sub_43B090();
    result = (_BYTE *)v0[5];
    if ( result == nullptr )
      break;
    v4 = (unsigned __int8)result[v1];
    if ( (_BYTE)v4 != 32 && *(_BYTE *)sub_4635B0(v2, v4) == 0 )
    {
      do
      {
        result = (_BYTE *)v0[5];
        v6 = (unsigned __int8)result[v1 - 1];
        if ( (_BYTE)v6 == 32 )
          break;
        result = (_BYTE *)sub_4635B0(v5, v6);
        if ( *result != 0 )
          break;
        result = (_BYTE *)sub_43B090();
      }
      while ( v0[5] != 0 );
      return result;
    }
  }
  return result;
}

