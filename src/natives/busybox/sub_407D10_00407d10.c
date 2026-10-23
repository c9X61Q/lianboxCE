// busybox.exe @ 0x407d10 size=119

int __cdecl sub_407D10(_DWORD *a1, int a2, int a3)
{
  int v3; // eax
  int v4; // ebp
  int v5; // ebx
  void *v6; // eax

  v3 = sub_407C50(0, 0, a2, a3);
  if ( v3 < 0 )
    return -1;
  v4 = v3 + 1;
  v5 = v3;
  v6 = malloc(v3 + 1);
  *a1 = v6;
  if ( v6 == nullptr )
    return -1;
  sub_407C50((int)v6, v4, a2, a3);
  *(_BYTE *)(*a1 + v5) = 0;
  return v5;
}

