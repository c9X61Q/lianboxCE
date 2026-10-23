// busybox.exe @ 0x403150 size=165

int *__cdecl sub_403150(int a1, int a2)
{
  int *result; // eax

  *errno() = 0;
  if ( a1 != 0 )
  {
    if ( a2 < -1 )
    {
      result = errno();
      *result = 22;
    }
    else if ( a2 == -1 )
    {
      result = *(int **)(a1 + 548);
      if ( result != (int *)-1 )
        result = (int *)findclose(*(_DWORD *)(a1 + 548));
      *(_DWORD *)(a1 + 548) = -1;
      *(_DWORD *)(a1 + 552) = -1;
    }
    else
    {
      result = sub_4030B0(a1);
      do
      {
        if ( *(_DWORD *)(a1 + 552) >= a2 )
          break;
        result = (int *)sub_402F30(a1);
      }
      while ( result != nullptr );
    }
  }
  else
  {
    result = errno();
    *result = 14;
  }
  return result;
}

