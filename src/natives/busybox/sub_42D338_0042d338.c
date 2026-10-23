// busybox.exe @ 0x42d338 size=119

void __noreturn sub_42D338()
{
  int v0; // ecx
  int v1; // edx
  _BYTE v2[64]; // [esp+8h] [ebp-40h] BYREF

  *(_DWORD *)(dword_485FF0 + 4) = *(unsigned __int8 *)dword_485FF0;
  if ( setjmp3() == 0 )
  {
    v1 = dword_485FF0;
    *(_DWORD *)(dword_485FF0 + 52) = v2;
    if ( *(_DWORD *)(v1 + 84) != 0 )
    {
      *(_DWORD *)(v1 + 84) = 0;
      byte_473328 = 0;
      sub_42B3FC(v0, 0);
      byte_473328 = 8;
    }
  }
  sub_42D2EC(v2, 0);
  sub_431174();
  exit(*(unsigned __int8 *)dword_485FF0);
}

