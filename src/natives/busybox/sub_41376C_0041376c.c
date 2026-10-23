// busybox.exe @ 0x41376c size=65

int __userpurge sub_41376C@<eax>(int a1@<eax>, _DWORD *a2@<ecx>, int a3)
{
  _BYTE *i; // esi
  int v5; // eax
  _DWORD *v6; // edi

  for ( i = (_BYTE *)(*a2 + a1); *i == 47; ++i )
    ;
  v5 = sub_47168C(a2[2], 1030);
  a2[3] = v5;
  v6 = (_DWORD *)(v5 + 4 * a2[2]);
  *v6 = sub_47188C();
  ++a2[2];
  return 1;
}

