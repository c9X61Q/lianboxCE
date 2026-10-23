// busybox.exe @ 0x44b858 size=208

int *sub_44B858()
{
  int v0; // ebx
  _DWORD *v1; // esi
  int *result; // eax
  int *v3; // edx
  char *v4; // edi
  int v5; // esi

  v0 = dword_473570;
  if ( *(_BYTE *)dword_473570 == 24 )
    byte_473198 = 8;
  if ( sub_458374() != 3 )
    sub_452FDC();
  if ( *(_BYTE *)v0 == 24 )
  {
    v1 = (_DWORD *)dword_473370;
    if ( byte_473568 == 0 )
      *(_BYTE *)v0 = 25;
    sub_45B26C(0, 0);
    v1[2] = dword_4735D0;
    *v1 = 0;
    result = (int *)dword_473374;
    if ( dword_473374 != 0 )
    {
      do
      {
        v3 = result;
        result = (int *)*result;
      }
      while ( result != nullptr );
      *v3 = (int)v1;
    }
    else
    {
      dword_473374 = (int)v1;
    }
  }
  else
  {
    if ( (unsigned __int8)(*(_BYTE *)v0 - 22) > 1u )
      goto LABEL_19;
    v4 = dword_4735D0;
    *(_DWORD *)(v0 + 16) = 0;
    v5 = sub_418398(10, v4, nullptr);
    result = _errno();
    if ( *result == 0 && v5 >= 0 )
    {
      *(_DWORD *)(v0 + 12) = v5;
      return result;
    }
    if ( *v4 != 45 || v4[1] != 0 )
    {
LABEL_19:
      result = (int *)sub_441F5C();
      *(_DWORD *)(v0 + 16) = result;
    }
    else
    {
      *(_DWORD *)(v0 + 12) = -1;
    }
  }
  return result;
}

