// busybox.exe @ 0x4291e4 size=296

void __cdecl __noreturn sub_4291E4(int a1, int a2)
{
  __int16 v2; // bx
  const char **v3; // eax
  const char **v4; // ebp
  __time32_t v5; // ecx
  __int64 v6; // kr00_8
  __int64 v7; // rax
  __time32_t v8; // [esp+Ch] [ebp-14h]

  MultiByteStr = 1024;
  if ( sub_44328C("POSIXLY_CORRECT") != 0 )
    MultiByteStr = 512;
  *(&MultiByteStr + 1) = 0x7FFFFFFF;
  v2 = sub_435D44(a2, "^aHkLsxd:+lchm");
  if ( (v2 & 0x200) != 0 )
    MultiByteStr = 0;
  if ( (v2 & 0x400) != 0 )
    MultiByteStr = 0x100000;
  if ( (v2 & 4) != 0 )
    MultiByteStr = 1024;
  if ( (v2 & 2) != 0 )
    *(&NumOfElements + 1) = 1;
  if ( (v2 & 8) != 0 )
    *(&NumOfElements + 1) = 0x7FFFFFFF;
  if ( (v2 & 0x10) != 0 )
    *(&MultiByteStr + 1) = 0;
  v3 = (const char **)(a2 + 4 * dword_473090);
  v4 = v3;
  if ( *v3 == nullptr )
  {
    v4 = v3 - 1;
    *(v3 - 1) = ".";
    if ( *(&NumOfElements + 1) == 1 )
      *(&NumOfElements + 1) = 0;
  }
  v5 = *(&NumOfElements + 1);
  v6 = 0;
  do
  {
    v8 = v5;
    LODWORD(v7) = sub_42905C(*v4);
    v6 += v7;
    v5 = v8;
    *(&NumOfElements + 1) = v8;
    ++v4;
  }
  while ( *v4 != nullptr );
  if ( (v2 & 0x100) != 0 )
    sub_44DD50("total", HIDWORD(v6));
  sub_42F138();
}

