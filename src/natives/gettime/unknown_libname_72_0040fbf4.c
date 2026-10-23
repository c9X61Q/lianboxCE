// gettime.exe @ 0x40fbf4 size=120

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_72(__crt_cached_ptd_host **this, int *a2)
{
  char v3; // bl
  __crt_cached_ptd_host *v4; // edi
  int v5; // eax
  int v7; // [esp+10h] [ebp-Ch]
  int v8; // [esp+14h] [ebp-8h]
  char *v9; // [esp+18h] [ebp-4h] BYREF

  v3 = 1;
  v4 = *(this + 2);
  v8 = *((_DWORD *)v4 + 6);
  v7 = *((_DWORD *)v4 + 7);
  v9 = (char *)*(this + 3) - 1;
  *a2 = __crt_strtox::parse_integer<unsigned long,__crt_strtox::c_string_character_source<char>,0>(v4, v9, &v9, 10, 1);
  v5 = (int)*(this + 2);
  if ( *(_BYTE *)(v5 + 28) != 0 && *(_DWORD *)(v5 + 24) == 34 || v9 < (char *)*(this + 3) )
    v3 = 0;
  else
    *(this + 3) = (__crt_cached_ptd_host *)v9;
  *((_DWORD *)v4 + 6) = v8;
  *((_DWORD *)v4 + 7) = v7;
  return v3;
}

