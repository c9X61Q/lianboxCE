// gettime.exe @ 0x417f5d size=45

struct __crt_locale_data *__cdecl sub_417F5D(int a1, struct __crt_locale_data **a2)
{
  struct __crt_locale_data *result; // eax

  result = *a2;
  if ( *a2 != dword_438A30 )
  {
    result = (struct __crt_locale_data *)dword_437458;
    if ( (dword_437458 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_locale_data *)__acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

