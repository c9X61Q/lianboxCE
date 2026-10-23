// gettime.exe @ 0x417fbb size=45

struct __crt_multibyte_data *__cdecl sub_417FBB(int a1, struct __crt_multibyte_data **a2)
{
  struct __crt_multibyte_data *result; // eax

  result = *a2;
  if ( *a2 != dword_438E24 )
  {
    result = (struct __crt_multibyte_data *)dword_437458;
    if ( (dword_437458 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = (struct __crt_multibyte_data *)__acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

