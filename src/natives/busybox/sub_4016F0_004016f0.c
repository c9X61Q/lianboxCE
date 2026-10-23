// busybox.exe @ 0x4016f0 size=123

int __cdecl sub_4016F0(int a1)
{
  const char *v1; // ebx
  unsigned int v2; // edx
  const char *v3; // esi
  FILE *Stream; // eax
  double v6; // [esp+38h] [ebp-24h]
  double v7; // [esp+40h] [ebp-1Ch]
  double v8; // [esp+48h] [ebp-14h]

  v1 = "Unknown error";
  v2 = *(_DWORD *)a1 - 1;
  if ( v2 <= 5 )
    v1 = off_47CA8C[v2];
  v3 = *(const char **)(a1 + 4);
  v8 = *(double *)(a1 + 24);
  v7 = *(double *)(a1 + 16);
  v6 = *(double *)(a1 + 8);
  Stream = (FILE *)sub_4113D0(2);
  fprintf(Stream, "_matherr(): %s in %s(%g, %g)  (retval=%g)\n", v1, v3, v6, v7, v8);
  return 0;
}

