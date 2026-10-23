// busybox.exe @ 0x4305e4 size=132

_DWORD *__usercall sub_4305E4@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  _BYTE *v4; // edx
  int v5; // ecx
  int i; // eax
  char *v7; // ebp
  char v8; // dl
  _BYTE v10[259]; // [esp+Ch] [ebp-114h] BYREF
  char v11; // [esp+10Fh] [ebp-11h] BYREF

  while ( a1 != nullptr )
  {
    v4 = (_BYTE *)a1[1];
    v5 = 0;
    while ( *v4 != 0 )
    {
      if ( *v4 == 47 )
        ++v5;
      ++v4;
    }
    for ( i = 0; ; v10[i++] = v8 )
    {
      v7 = &v10[i];
      v8 = *(_BYTE *)(a2 + i);
      if ( v8 == 0 )
        break;
      if ( i == 259 )
      {
        v7 = &v11;
        break;
      }
      if ( v8 == 47 && --v5 == -1 )
        break;
    }
    *v7 = 0;
    if ( sub_4312E8(a1[1], v10, 0) == 0 )
      break;
    a1 = (_DWORD *)*a1;
  }
  return a1;
}

