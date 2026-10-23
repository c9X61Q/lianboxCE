// gettime.exe @ 0x421f32 size=129

int __acrt_update_thread_locale_data()
{
  struct __acrt_ptd *v0; // eax
  int *v1; // edi
  int v2; // esi

  v0 = __acrt_getptd();
  v1 = (int *)((char *)v0 + 76);
  if ( (dword_437458 & *((_DWORD *)v0 + 212)) == 0 || (v2 = *v1, *v1 == 0) )
  {
    __acrt_lock(4);
    v2 = _updatetlocinfoEx_nolock(v1, dword_438A30);
    __acrt_unlock(4);
    if ( v2 == 0 )
      abort();
  }
  return v2;
}

