// busybox.exe @ 0x44d22c size=84

int __usercall sub_44D22C@<eax>(int a1@<eax>, int a2@<edx>)
{
  unsigned int v2; // ebx
  unsigned int v3; // ecx
  int v5; // [esp+0h] [ebp-38h]
  int v6; // [esp+4h] [ebp-34h]
  _BYTE v7[37]; // [esp+13h] [ebp-25h] BYREF

  if ( a1 < 0 )
    a1 = 0;
  v2 = *(_DWORD *)(dword_486010 + 36);
  if ( v2 <= a1 )
    a1 = v2 - 1;
  if ( a2 < 0 )
    a2 = 0;
  v3 = *(_DWORD *)(dword_486010 + 40);
  if ( v3 <= a2 )
    a2 = v3 - 1;
  sub_4627FC(v7, "\x1B[%u;%uH", a1 + 1, a2 + 1);
  return sub_46F964(v5, v6);
}

