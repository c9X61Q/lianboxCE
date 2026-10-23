// busybox.exe @ 0x45102c size=70

_DWORD *__usercall sub_45102C@<eax>(_DWORD *result@<eax>, void *a2@<edx>)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // edx
  int i; // eax
  void *Block; // [esp+0h] [ebp-8h]

  if ( result != nullptr )
  {
    Block = a2;
    v2 = result;
    v3 = (_DWORD *)result[3];
    if ( v3 != nullptr )
    {
      for ( i = 0; *v2 > i; ++i )
        v3[i] = 0;
      free(v3);
      v2[3] = 0;
      *v2 = 0;
      v2[1] = 0;
      v2[2] = 0;
    }
    return Block;
  }
  return result;
}

