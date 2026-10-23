// busybox.exe @ 0x454254 size=87

int __usercall sub_454254@<eax>(int *a1@<eax>, int a2@<edx>)
{
  int v3; // ebx
  size_t Size; // ebx
  void *v6; // eax

  v3 = *(_DWORD *)(a2 + 4);
  a1[1] = v3;
  if ( v3 <= 0 )
  {
    memset(a1, 0, 0xCu);
    return 0;
  }
  else
  {
    *a1 = v3;
    Size = 4 * v3;
    v6 = malloc(Size);
    a1[2] = (int)v6;
    if ( v6 != nullptr )
    {
      qmemcpy(v6, *(const void **)(a2 + 8), Size);
      return 0;
    }
    else
    {
      a1[1] = 0;
      *a1 = 0;
      return 12;
    }
  }
}

