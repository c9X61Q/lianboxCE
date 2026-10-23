// busybox.exe @ 0x43ea2c size=119

int __usercall sub_43EA2C@<eax>(void (__cdecl *a1)(void *, int)@<eax>, int a2@<ecx>)
{
  int i; // ebx
  int result; // eax
  int v5; // ecx
  const char *v6; // esi
  int v7; // ecx
  int v8; // eax
  int v9; // ecx
  const char *v10; // eax
  void *v11; // esi
  void *Block; // [esp+0h] [ebp-1Ch]
  void *Blocka; // [esp+0h] [ebp-1Ch]
  void *Blockb; // [esp+0h] [ebp-1Ch]

  for ( i = 0; ; ++i )
  {
    result = sub_45B550(a2, i, Block);
    if ( result == 0 )
      break;
    v6 = (const char *)sub_45B550(v5, i, Blocka);
    v8 = sub_45B4BC(v7, i);
    v10 = (const char *)sub_45B550(v9, v8, Blockb);
    v11 = (void *)sub_4708BC("%s%s", v10, v6);
    a1(v11, i);
    free(v11);
  }
  return result;
}

