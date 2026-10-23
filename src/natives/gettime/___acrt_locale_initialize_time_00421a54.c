// gettime.exe @ 0x421a54 size=123

int __cdecl __acrt_locale_initialize_time(struct __crt_locale_data *a1)
{
  void **v1; // edi
  void **v2; // esi
  struct __crt_lc_time_data *v3; // eax

  v1 = nullptr;
  if ( *((_DWORD *)a1 + 45) != 0 )
  {
    v3 = (struct __crt_lc_time_data *)_calloc_base(1u, 0x164u);
    v2 = (void **)v3;
    if ( v3 != nullptr )
    {
      if ( initialize_lc_time(v3, a1) )
      {
        v2[44] = (void *)1;
        _free_base(nullptr);
        goto LABEL_8;
      }
      __acrt_locale_free_time(v2);
      v1 = v2;
    }
    _free_base(v1);
    return 1;
  }
  v2 = (void **)&off_42C7C8;
LABEL_8:
  __acrt_locale_release_lc_time_reference(*((_DWORD *)a1 + 39));
  *((_DWORD *)a1 + 39) = v2;
  return 0;
}

