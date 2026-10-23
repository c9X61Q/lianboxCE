// busybox.exe @ 0x411ea4 size=85

int *__usercall sub_411EA4@<eax>(const char *a1@<eax>)
{
  int v2; // edx
  unsigned int v3; // eax
  const char *v4; // ecx
  int *i; // esi
  int v6; // edi

  v2 = *(unsigned __int8 *)a1;
  v3 = 16 * v2;
  v4 = a1;
  while ( v2 != 0 )
  {
    v3 += v2;
    v2 = *(unsigned __int8 *)++v4;
  }
  for ( i = (int *)(dword_473110 + 4 * (v3 % 0x27)); ; i = (int *)v6 )
  {
    v6 = *i;
    if ( *i == 0 || strcmp(a1, *(const char **)(v6 + 4)) == 0 )
      break;
  }
  return i;
}

