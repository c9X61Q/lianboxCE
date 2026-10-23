// busybox.exe @ 0x415d70 size=121

void __usercall __noreturn sub_415D70(int a1@<eax>)
{
  int v2; // ebx
  unsigned int i; // edx
  int v4; // eax
  int j; // edi
  unsigned int v6; // [esp+8h] [ebp-28h]
  _BYTE v7[24]; // [esp+Ch] [ebp-24h] BYREF

  memset(v7, 0, sizeof(v7));
  v2 = dword_486010;
  if ( *(_BYTE *)(dword_486010 - 11) == 0 )
  {
    *(_BYTE *)(dword_486010 - 11) = 1;
    *(_BYTE *)(v2 - 10) = 0;
    sub_42B834();
  }
  for ( i = 0; ; ++i )
  {
    v4 = *(_DWORD *)(v2 - 52);
    if ( *(_DWORD *)(v4 + 4) <= i )
      break;
    for ( j = *(_DWORD *)(*(_DWORD *)(v4 + 16) + 4 * i); j != 0; j = *(_DWORD *)(j + 24) )
    {
      if ( *(_DWORD *)j != 0 && *(_BYTE *)(j + 20) != 0 )
      {
        v6 = i;
        sub_4435A0(*(FILE **)j);
        i = v6;
      }
    }
  }
  exit(a1);
}

