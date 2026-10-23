// busybox.exe @ 0x447b4c size=78

int __usercall sub_447B4C@<eax>(char *a1@<eax>)
{
  _DWORD *v1; // eax
  int v2; // esi
  _DWORD *Block; // ebx

  v1 = sub_447AE4(a1);
  v2 = -1;
  if ( v1 != nullptr )
  {
    Block = v1;
    v2 = v1[3];
    sub_470E28(1);
    *(_BYTE *)Block = 0;
    if ( Block[1] != 0 )
      sub_43156C(v2, Block[2]);
    free(Block);
  }
  return v2;
}

