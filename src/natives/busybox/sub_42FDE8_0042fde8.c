// busybox.exe @ 0x42fde8 size=283

int __usercall sub_42FDE8@<eax>(int a1@<eax>, int a2@<ecx>)
{
  const CHAR *Str; // ebx
  CHAR *v4; // esi
  _BYTE *v5; // eax
  int v6; // ecx
  const char **v7; // ebx
  int v9; // [esp+8h] [ebp-88h]
  void *Block; // [esp+10h] [ebp-80h]
  _BYTE *Blocka; // [esp+10h] [ebp-80h]

  Str = (const CHAR *)(**(_DWORD **)(a1 + 24) + 1);
  if ( sub_4305B0(a2, Str) != 0 )
  {
    Block = (void *)sub_443508(Str, 0, v9);
    if ( (int)Block >= 0 )
    {
      v4 = (CHAR *)sub_470E78();
      sub_4424FC();
      while ( (int)sub_45C560(4096, v4) > 0 )
        sub_442554();
      sub_442530();
      sub_442EA4((int)Block);
      strlen(Str);
      Blocka = (_BYTE *)sub_470E78();
      v5 = sub_418AC0(Blocka, (unsigned __int8 *)v4, 16);
      sub_462790(v5, "  %s", Str);
      free(v4);
      if ( sub_4305B0(v6, Blocka) == 0 )
      {
        sub_46F088("Warning: Creating %s as %s.dpkg-new\n", Str, Str);
        v7 = *(const char ***)(a1 + 24);
        *v7 = (const char *)sub_4708BC("%s.dpkg-new", *v7);
      }
      free(Blocka);
    }
  }
  return 0;
}

