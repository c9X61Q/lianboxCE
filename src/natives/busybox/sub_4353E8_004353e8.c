// busybox.exe @ 0x4353e8 size=163

int __usercall sub_4353E8@<eax>(FILE *a1@<eax>)
{
  unsigned __int8 v1; // al
  unsigned __int8 v2; // si
  const char *v3; // edi
  char *i; // eax
  char v5; // dl
  char v6; // bp
  int v7; // edi
  bool j; // zf
  int v9; // eax

  v1 = (unsigned __int8)sub_42F168(a1, "  %s\n");
  if ( *(_BYTE *)(dword_486010 + 64) == 0 )
    return 0;
  v2 = v1;
  v3 = (const char *)(dword_486010 + 64);
  for ( i = (char *)(dword_486010 + 64); ; ++i )
  {
    v5 = *i;
    v6 = *i | 0x20;
    if ( (unsigned __int8)(*i - 48) > 9u
      && (unsigned __int8)(v5 - 45) > 1u
      && (unsigned __int8)(v6 - 97) > 0x19u
      && v5 != 95 )
    {
      break;
    }
    *i = v6;
  }
  if ( v5 != 58 )
    sub_41784C("bad header line: %s", v3);
  *i = 0;
  v7 = sub_460FB8();
  for ( j = v2 == 10; !j; j = v9 == 10 )
  {
    v9 = sub_46F03C(a1);
    if ( v9 == -1 )
      break;
  }
  return v7;
}

