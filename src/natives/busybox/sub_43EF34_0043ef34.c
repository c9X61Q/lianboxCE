// busybox.exe @ 0x43ef34 size=165

int __cdecl sub_43EF34(int a1, int a2)
{
  const char **v2; // ebx
  const char *v3; // esi
  int v4; // edx
  _BYTE v6[16]; // [esp+Ch] [ebp-68h] BYREF
  int v7; // [esp+1Ch] [ebp-58h]

  sub_435D44(a2, (int)"Radl");
  v2 = (const char **)(a2 + 4 * dword_473090);
  if ( *v2 == nullptr )
    *--v2 = ".";
  do
  {
    v3 = *v2;
    if ( sub_443484(*v2, v6) == -1 )
    {
      sub_417FE4(v4, "stat %s", v3);
    }
    else if ( (v7 & 0xF000) != 0x4000 || (dword_486008 & 4) != 0 )
    {
      sub_43E1C0(v3);
    }
    else
    {
      sub_43CB78(v3, (void (__fastcall *)(int, int))sub_43EE6C, 0);
    }
    ++v2;
  }
  while ( *v2 != nullptr );
  return 0;
}

