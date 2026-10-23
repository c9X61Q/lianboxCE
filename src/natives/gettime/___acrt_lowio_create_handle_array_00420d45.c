// gettime.exe @ 0x420d45 size=123

char *__acrt_lowio_create_handle_array()
{
  char *v0; // eax
  char *v1; // esi
  char *v2; // edi
  char *v3; // esi
  char *v5; // [esp+8h] [ebp-8h]

  v0 = (char *)_calloc_base(0x40u, 0x38u);
  v5 = v0;
  if ( v0 != nullptr )
  {
    v2 = v0 + 32;
    v3 = v0 + 3584;
    do
    {
      __acrt_InitializeCriticalSectionEx((LPCRITICAL_SECTION)(v2 - 32), 0xFA0u, 0);
      *((_DWORD *)v2 - 2) = -1;
      v2[13] &= 0xF8u;
      *(_DWORD *)v2 = 0;
      v2 += 56;
      *((_DWORD *)v2 - 13) = 0;
      *((_DWORD *)v2 - 12) = 168427520;
      *(v2 - 44) = 10;
      *(_DWORD *)(v2 - 42) = 0;
      *(v2 - 38) = 0;
    }
    while ( v2 - 32 != v3 );
    v1 = v5;
  }
  else
  {
    v1 = nullptr;
  }
  _free_base(nullptr);
  return v1;
}

