// busybox.exe @ 0x433584 size=101

int __usercall sub_433584@<eax>(int *a1@<eax>, int a2@<edx>, int (*a3)(void)@<ecx>)
{
  int v6; // ebx
  int v7; // eax
  int i; // ecx
  _DWORD *v9; // edx
  int v11; // eax
  int v12; // ebx
  int v13; // eax

  v6 = a1[1];
  v7 = *a1;
  for ( i = 0; v6 > i; ++i )
  {
    v9 = (_DWORD *)(v7 + 32 * i);
    if ( *v9 == a2 )
      return (int)(v9 + 1);
  }
  a1[1] = v6 + 1;
  v11 = sub_47168C(v6, 8194);
  *a1 = v11;
  v12 = 32 * v6;
  *(_DWORD *)(v11 + v12) = a2;
  v13 = a3();
  sub_45C5AC(28, v13);
  return v12 + *a1 + 4;
}

