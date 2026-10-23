// gettime.exe @ 0x41fdbf size=99

void __cdecl setSBCS(struct __crt_multibyte_data *a1)
{
  int v1; // esi
  int v2; // ecx

  v1 = 0;
  memset((char *)a1 + 24, 0, 0x101u);
  *((_DWORD *)a1 + 1) = 0;
  *((_DWORD *)a1 + 2) = 0;
  *((_DWORD *)a1 + 135) = 0;
  *((_DWORD *)a1 + 3) = 0;
  v2 = 0;
  *((_DWORD *)a1 + 4) = 0;
  *((_DWORD *)a1 + 5) = 0;
  do
  {
    *((_BYTE *)a1 + v2 + 24) = byte_437578[v2];
    ++v2;
  }
  while ( v2 < 257 );
  do
  {
    *((_BYTE *)a1 + v1 + 281) = byte_437679[v1];
    ++v1;
  }
  while ( v1 < 256 );
}

