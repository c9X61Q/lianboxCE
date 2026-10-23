// busybox.exe @ 0x4274e0 size=145

char __cdecl sub_4274E0(const char *a1)
{
  _DWORD (__cdecl *v1)(const char *, _BYTE *); // eax
  _BYTE Block[16]; // [esp+8h] [ebp-68h] BYREF

  v1 = (_DWORD (__cdecl *)(const char *, _BYTE *))sub_443484;
  if ( (dword_486008 & 2) != 0 )
    v1 = (_DWORD (__cdecl *)(const char *, _BYTE *))sub_444C28;
  if ( v1(a1, Block) != 0 )
  {
    sub_417FE4((int)a1, "can't stat '%s'", a1);
    return 0;
  }
  else
  {
    sub_44E5B4(Block);
    return 1;
  }
}

