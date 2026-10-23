// gettime.exe @ 0x42011c size=160

struct __crt_multibyte_data *__cdecl update_thread_multibyte_data_internal(
        struct __acrt_ptd *const a1,
        struct __crt_multibyte_data **const a2)
{
  struct __crt_multibyte_data *v2; // esi

  if ( (dword_437458 & *((_DWORD *)a1 + 212)) != 0 && *((_DWORD *)a1 + 19) != 0 )
  {
    v2 = *((struct __crt_multibyte_data **)a1 + 18);
  }
  else
  {
    __acrt_lock(5);
    v2 = *((struct __crt_multibyte_data **)a1 + 18);
    if ( v2 != *a2 )
    {
      if ( v2 != nullptr
        && _InterlockedExchangeAdd((volatile signed __int32 *)v2, 0xFFFFFFFF) == 0
        && v2 != (struct __crt_multibyte_data *)&unk_437560 )
      {
        _free_base(v2);
      }
      v2 = *a2;
      *((_DWORD *)a1 + 18) = *a2;
      _InterlockedIncrement((volatile signed __int32 *)v2);
    }
    __acrt_unlock(5);
  }
  if ( v2 == nullptr )
    abort();
  return v2;
}

