// busybox.exe @ 0x410d30 size=89

_DWORD *__cdecl sub_410D30(_DWORD *a1, int a2, int a3)
{
  _DWORD *result; // eax
  _DWORD *v4; // esi
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // edi

  result = a1;
  v4 = (_DWORD *)(a3 + 20);
  v5 = (unsigned int)&a1[((a2 - 1) >> 5) + 1];
  v6 = a3 + 20 + 4 * *(_DWORD *)(a3 + 16);
  if ( a3 + 20 >= v6 )
    goto LABEL_6;
  v7 = a1;
  do
    *v7++ = *v4++;
  while ( v6 > (unsigned int)v4 );
  result = &a1[((v6 - a3 - 21) >> 2) + 1];
  while ( v5 > (unsigned int)result )
  {
    *result++ = 0;
LABEL_6:
    ;
  }
  return result;
}

