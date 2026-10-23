// busybox.exe @ 0x415434 size=142

int __usercall sub_415434@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v2; // ebx
  int v3; // esi
  char *Str; // eax
  int v5; // ebx
  char *v7; // [esp+Ch] [ebp-14h]

  v2 = dword_486010;
  if ( (*a1 & 0xFF00) == 0x2100 )
  {
    if ( *(_BYTE *)(dword_486010 - 12) != 0 )
      return a1[3];
    else
      return a1[2];
  }
  else
  {
    v3 = a2;
    sub_447010();
    sub_42B834();
    Str = (char *)sub_436704();
    v5 = *(_BYTE *)(v2 - 12) == 0 ? 1 : 3;
    v7 = Str;
    if ( sub_459D18(v3, Str, v5) != 0 )
      sub_4716D4(v5 & 0xFFFFFFFE, v7);
    sub_4470A4();
  }
  return v3;
}

