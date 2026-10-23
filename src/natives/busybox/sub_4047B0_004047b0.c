// busybox.exe @ 0x4047b0 size=161

_BYTE *__cdecl sub_4047B0(_BYTE *a1, char *a2, _BYTE **a3)
{
  _BYTE *v3; // esi
  _BYTE *v4; // edi
  char *v5; // eax
  int v6; // edx
  char *v7; // edx
  int v8; // eax

  v3 = a1;
  if ( a1 == nullptr )
  {
    v3 = *a3;
    if ( *a3 == nullptr )
      return nullptr;
  }
LABEL_2:
  v4 = v3 + 1;
  v5 = a2;
  while ( 1 )
  {
    v6 = *v5++;
    if ( v6 == 0 )
      break;
    if ( (char)*v3 == v6 )
    {
      ++v3;
      goto LABEL_2;
    }
  }
  if ( *v3 != 0 )
  {
LABEL_6:
    ++v4;
    v7 = a2;
    while ( 1 )
    {
      v8 = *v7++;
      if ( *(v4 - 1) == (_BYTE)v8 )
        break;
      if ( v8 == 0 )
        goto LABEL_6;
    }
    if ( v8 != 0 )
      *(v4 - 1) = 0;
    else
      v4 = nullptr;
    *a3 = v4;
    return v3;
  }
  else
  {
    *a3 = nullptr;
    return nullptr;
  }
}

