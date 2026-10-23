// busybox.exe @ 0x445dec size=87

int __cdecl sub_445DEC(_DWORD *a1, _DWORD *a2)
{
  unsigned int v2; // eax
  int result; // eax

  v2 = a1[1];
  if ( v2 <= 0x3B9AC9FF )
  {
    Sleep(1000 * *a1 + (int)v2 / 1000000);
    result = 0;
    if ( a2 != nullptr )
    {
      *a2 = 0;
      a2[1] = 0;
    }
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
  return result;
}

