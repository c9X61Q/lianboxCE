// busybox.exe @ 0x445170 size=173

int __cdecl sub_445170(int a1, int a2)
{
  int v2; // ecx
  char v3; // di
  unsigned __int16 v4; // ax
  int v5; // ebx
  signed __int32 v6; // ebp
  char **v7; // esi
  int v8; // edi
  const char *v10; // [esp+10h] [ebp-14h] BYREF

  v3 = sub_435D60(a2, (int)"m:pv", (int)"mode", &v10);
  if ( (v3 & 1) != 0 )
  {
    v4 = sub_417E48(v10, 511, v2);
    if ( v4 == 0xFFFF )
      sub_41784C("invalid mode '%s'", v10);
    v5 = v4;
  }
  else
  {
    v5 = -1;
  }
  v6 = (2 * v3) & 4;
  if ( (v3 & 4) != 0 )
    v6 |= 0x1000u;
  v7 = (char **)(a2 + 4 * dword_473090);
  if ( *v7 == nullptr )
    sub_418164();
  v8 = 0;
  do
  {
    if ( sub_417C00(*v7, v5, v6) != 0 )
      v8 = 1;
    ++v7;
  }
  while ( *v7 != nullptr );
  return v8;
}

