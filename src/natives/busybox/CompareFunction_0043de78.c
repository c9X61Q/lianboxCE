// busybox.exe @ 0x43de78 size=21

int __cdecl CompareFunction(_DWORD *a1, _DWORD *a2)
{
  int result; // eax

  result = a1[2] - a2[2];
  if ( result == 0 )
    return *a1 - *a2;
  return result;
}

