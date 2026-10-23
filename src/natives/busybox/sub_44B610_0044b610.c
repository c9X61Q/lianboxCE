// busybox.exe @ 0x44b610 size=109

int __usercall sub_44B610@<eax>(unsigned __int8 *a1@<eax>, int *a2@<edx>, int *a3@<ecx>)
{
  unsigned __int8 v4; // al
  int v6; // esi
  int v7; // ebx
  int v8; // esi
  int v11; // [esp+4h] [ebp-14h]

  v4 = *a1;
  if ( v4 == 0 )
    sub_418210("bad format in substitution expression");
  v6 = v4;
  v11 = sub_4399C4(v4, (int)(a1 + 1));
  *a2 = sub_41F49C((int)(a1 + 1), v11);
  v7 = (int)&a1[v11 + 2];
  v8 = sub_4399C4(-v6, v7);
  *a3 = sub_41F49C(v7, v8);
  return v11 + 2 + v8;
}

