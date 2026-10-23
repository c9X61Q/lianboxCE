// busybox.exe @ 0x4030b0 size=93

int *__cdecl sub_4030B0(int a1)
{
  int *result; // eax

  *errno() = 0;
  if ( a1 != 0 )
  {
    result = *(int **)(a1 + 548);
    if ( result != (int *)-1 )
      result = (int *)findclose(*(_DWORD *)(a1 + 548));
    *(_DWORD *)(a1 + 548) = -1;
    *(_DWORD *)(a1 + 552) = 0;
  }
  else
  {
    result = errno();
    *result = 14;
  }
  return result;
}

