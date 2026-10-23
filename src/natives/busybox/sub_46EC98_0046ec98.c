// busybox.exe @ 0x46ec98 size=145

int __cdecl sub_46EC98(int a1, int a2)
{
  const char **v2; // esi
  const char *v3; // ebp
  int v4; // edx
  const char *v5; // ebx
  char *Block; // edi
  int v8; // [esp+10h] [ebp-18h] BYREF
  const char *v9; // [esp+14h] [ebp-14h] BYREF

  v8 = 43;
  v9 = "whois.iana.org";
  sub_435D44(a2, (int)"^ih:p:+", &v9, &v8);
  v2 = (const char **)(a2 + 4 * dword_473090);
  do
  {
    v3 = *v2;
    v4 = v8;
    v5 = v9;
    Block = nullptr;
    while ( 1 )
    {
      v5 = (const char *)sub_452CE4(v5, v4, v3);
      free(Block);
      if ( v5 == nullptr )
        break;
      sub_46F088("[Redirected to %s]\n", v5);
      Block = (char *)v5;
      v4 = 43;
    }
    ++v2;
  }
  while ( *v2 != nullptr );
  return 0;
}

