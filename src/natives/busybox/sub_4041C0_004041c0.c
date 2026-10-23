// busybox.exe @ 0x4041c0 size=44

_BYTE *__cdecl sub_4041C0(_BYTE *a1, unsigned int a2)
{
  _BYTE *v2; // edx
  _BYTE *v3; // eax

  v2 = nullptr;
  v3 = a1;
  if ( a2 != 0 )
  {
    do
    {
      if ( *v3 == 0 )
        break;
      v2 = (_BYTE *)(++v3 - a1);
    }
    while ( v3 - a1 < a2 );
  }
  return v2;
}

