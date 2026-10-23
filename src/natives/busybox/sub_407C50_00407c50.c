// busybox.exe @ 0x407c50 size=118

int __cdecl sub_407C50(int a1, int a2, int a3, int a4)
{
  int v4; // ebx
  int result; // eax

  if ( a2 == 0 )
    return sub_40CB90(0, a1, 0, a3, a4);
  v4 = a2 - 1;
  result = sub_40CB90(0, a1, a2 - 1, a3, a4);
  if ( a2 - 1 > result )
    v4 = result;
  *(_BYTE *)(a1 + v4) = 0;
  return result;
}

