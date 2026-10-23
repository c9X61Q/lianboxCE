// busybox.exe @ 0x410e00 size=32

int __cdecl sub_410E00(int a1, int a2)
{
  int result; // eax

  for ( result = 0; a2 != result; ++result )
  {
    if ( *(_WORD *)(a1 + 2 * result) == 0 )
      break;
  }
  return result;
}

