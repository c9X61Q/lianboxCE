// gettime.exe @ 0x411811 size=200

int __acrt_initialize_stdio()
{
  size_t v0; // eax
  int v2; // edi
  char *v3; // esi
  int v4; // eax

  v0 = Count;
  if ( Count == 0 )
  {
    v0 = 512;
LABEL_5:
    Count = v0;
    goto LABEL_6;
  }
  if ( (int)Count < 3 )
  {
    v0 = 3;
    goto LABEL_5;
  }
LABEL_6:
  dword_4388B8 = _calloc_base(v0, 4u);
  _free_base(nullptr);
  if ( dword_4388B8 == nullptr )
  {
    Count = 3;
    dword_4388B8 = _calloc_base(3u, 4u);
    _free_base(nullptr);
    if ( dword_4388B8 == nullptr )
      return -1;
  }
  v2 = 0;
  v3 = (char *)&unk_4370E0;
  do
  {
    __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v3 + 32), 0xFA0u, 0);
    *((_DWORD *)dword_4388B8 + v2) = v3;
    v4 = *(_DWORD *)(dword_438A48[v2 >> 6] + 56 * (v2 & 0x3F) + 24);
    if ( v4 == -1 || v4 == -2 || v4 == 0 )
      *((_DWORD *)v3 + 4) = -2;
    v3 += 56;
    ++v2;
  }
  while ( v3 != (char *)&unk_437188 );
  return 0;
}

