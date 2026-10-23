// busybox.exe @ 0x446bd4 size=231

void __cdecl __noreturn sub_446BD4(int a1, int a2)
{
  size_t v2; // eax
  _DWORD *v3; // ebx
  int v4; // esi
  const char *v5; // [esp+20h] [ebp-28h] BYREF
  int v6; // [esp+24h] [ebp-24h] BYREF
  int v7; // [esp+28h] [ebp-20h] BYREF
  int v8; // [esp+2Ch] [ebp-1Ch] BYREF
  char *Str[2]; // [esp+30h] [ebp-18h] BYREF
  bool v10; // [esp+38h] [ebp-10h]
  bool v11; // [esp+39h] [ebp-Fh]

  v5 = "t";
  v6 = 6;
  v7 = 1;
  v8 = 1;
  Str[0] = "\t";
  sub_435D60(a2, (int)"pw:+s:v:+i:+b:", (int)"body-numbering", &v6, Str, &v7, &v8, &v5);
  v10 = *v5 == 97;
  v11 = *v5 == 116;
  v2 = strlen(Str[0]);
  Str[1] = (char *)sub_4708BC("%*s\n", v2 + v6, (const char *)&unk_479D73);
  v3 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v3 == 0 )
    *--v3 = "-";
  v4 = 0;
  do
  {
    v4 |= sub_44E968();
    ++v3;
  }
  while ( *v3 != 0 );
  sub_42F138(v4);
}

