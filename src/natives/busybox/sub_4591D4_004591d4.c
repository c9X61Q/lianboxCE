// busybox.exe @ 0x4591d4 size=82

void __usercall __noreturn sub_4591D4(void *a1@<eax>, int a2, int a3)
{
  const char **v3; // ebx
  char v4; // di
  char *v5; // eax
  int v6; // edx
  char *v7; // esi
  void *Block; // [esp+0h] [ebp-10h]

  Block = a1;
  if ( *(_DWORD *)(a3 + 4) == 0 )
    sub_418164();
  v3 = (const char **)(a3 + 4);
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)sub_471374(Block);
    v7 = v5;
    if ( v5 != nullptr )
    {
      sub_46F108(v5);
      free(v7);
    }
    else
    {
      sub_418224(*v3, v6);
      v4 = 1;
    }
    if ( *++v3 == nullptr )
      sub_42F138(v4);
  }
}

