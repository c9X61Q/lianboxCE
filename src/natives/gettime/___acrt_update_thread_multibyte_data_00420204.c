// gettime.exe @ 0x420204 size=19

struct __crt_multibyte_data *__acrt_update_thread_multibyte_data()
{
  struct __acrt_ptd *v0; // eax

  v0 = __acrt_getptd();
  return update_thread_multibyte_data_internal(v0, &dword_438E24);
}

