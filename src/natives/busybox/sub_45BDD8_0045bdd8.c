// busybox.exe @ 0x45bdd8 size=352

void __usercall __noreturn sub_45BDD8(int a1@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  int v5; // ecx
  int v6; // edi
  char *v7; // edx
  int i; // ebp
  char *v9; // eax
  char *v10; // eax
  char *Str; // [esp+0h] [ebp-24h]
  char *v13; // [esp+Ch] [ebp-18h]
  char *Source; // [esp+Ch] [ebp-18h]
  __int16 v15; // [esp+10h] [ebp-14h] BYREF

  v6 = sub_463690();
  v7 = a2;
  dword_485AD0 = a2;
  if ( dword_473398 != 0 )
    v7 = sub_416E24(*(_BYTE **)(v5 + 4 * dword_473398));
  sub_45C5AC(16, v7);
  sub_45C5AC(128, dword_485AD0);
  for ( i = 1; i < v6; ++i )
  {
    if ( *(_DWORD *)(a3 + 4 * i) == 0 )
      break;
    v13 = (char *)strlen(byte_485A40);
    if ( (unsigned int)&v13[strlen(*(const char **)(a3 + 4 * i)) + 2] > 0x7F )
      break;
    Source = *(char **)(a3 + 4 * i);
    v10 = strcat(byte_485A40, " ");
    strcat(v10, Source);
  }
  v9 = sub_44328C("BB_UMASK");
  if ( v9 != nullptr && sub_462988(v9, &unk_474550, (char)&v15) == 1 )
    sub_444EA4(a3, v15 & 0x1FF);
  if ( a1 != 10 && a1 != 41 && a1 != 126 && a1 != 121 && v6 == 2 && strcmp(*(const char **)(a3 + 4), "--help") == 0 )
  {
    byte_4735D4 = 0;
    sub_418164();
  }
  byte_4735D4 = funcs_45BF27[a1]((char)v6, a3);
  sub_470D44(Str);
}

