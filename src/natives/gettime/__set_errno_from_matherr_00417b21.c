// gettime.exe @ 0x417b21 size=49

int *__cdecl _set_errno_from_matherr(int a1)
{
  int *result; // eax

  if ( a1 == 1 )
  {
    result = _errno();
    *result = 33;
  }
  else if ( a1 == 2 || (result = (int *)(a1 - 3), a1 == 3) )
  {
    result = _errno();
    *result = 34;
  }
  return result;
}

