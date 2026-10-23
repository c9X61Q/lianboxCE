// gettime.exe @ 0x420ed9 size=145

int __cdecl _free_osfhnd(unsigned int a1)
{
  int v1; // edi
  int v2; // eax

  if ( (a1 & 0x80000000) != 0
    || a1 >= dword_438C48
    || (v1 = 56 * (a1 & 0x3F), v2 = dword_438A48[a1 >> 6], (*(_BYTE *)(v1 + v2 + 40) & 1) == 0)
    || *(_DWORD *)(v1 + v2 + 24) == -1 )
  {
    *_errno() = 9;
    *__doserrno() = 0;
    return -1;
  }
  else
  {
    if ( sub_413DC9() == 1 )
    {
      if ( a1 != 0 )
      {
        if ( a1 == 1 )
        {
          SetStdHandle(0xFFFFFFF5, nullptr);
        }
        else if ( a1 == 2 )
        {
          SetStdHandle(0xFFFFFFF4, nullptr);
        }
      }
      else
      {
        SetStdHandle(0xFFFFFFF6, nullptr);
      }
    }
    *(_DWORD *)(dword_438A48[a1 >> 6] + v1 + 24) = -1;
    return 0;
  }
}

