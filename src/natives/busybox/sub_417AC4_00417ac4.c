// busybox.exe @ 0x417ac4 size=128

int __usercall sub_417AC4@<eax>(int *a1@<eax>, int a2@<ecx>)
{
  int v3; // esi
  int v4; // ebx
  int v5; // eax

  v3 = 32;
  if ( a1 != nullptr )
  {
    v3 = *a1;
    if ( *a1 < 32 )
      v3 = 32;
  }
  while ( 1 )
  {
    v4 = sub_471600(a2, 4 * v3 + 4);
    v5 = sub_435AA8(v3, v4);
    if ( v5 >= 0 )
      break;
    if ( *_errno() != 22 )
      sub_41823C();
    v3 = sub_435AA8(0, v4);
  }
  *(_DWORD *)(v4 + 4 * v5) = -1;
  if ( a1 != nullptr )
    *a1 = v5;
  return v4;
}

