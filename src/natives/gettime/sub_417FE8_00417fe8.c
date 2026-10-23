// gettime.exe @ 0x417fe8 size=49

int __cdecl sub_417FE8(int a1, int *a2, int a3)
{
  int result; // eax

  result = a3;
  if ( (struct __crt_multibyte_data *)*a2 != *(&dword_438E24 + a3) )
  {
    result = dword_437458;
    if ( (dword_437458 & *(_DWORD *)(a1 + 848)) == 0 )
    {
      result = __acrt_update_thread_multibyte_data();
      *a2 = result;
    }
  }
  return result;
}

