// gettime.exe @ 0x417f8a size=49

int __cdecl sub_417F8A(int a1, int *a2, int a3)
{
  int result; // eax

  result = a3;
  if ( (struct __crt_locale_data *)*a2 != *(&dword_438A30 + a3) )
  {
    result = dword_437458;
    if ( (dword_437458 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = __acrt_update_thread_locale_data();
      *a2 = result;
    }
  }
  return result;
}

