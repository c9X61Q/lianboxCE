// busybox.exe @ 0x42e394 size=117

void __cdecl __noreturn sub_42E394(int a1, int a2)
{
  const char *v2; // eax
  int v3; // ebx

  byte_4735D4 = 2;
  MultiByteStr = a2 + 4;
  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    v3 = sub_42A100();
    if ( *(_DWORD *)MultiByteStr == 0 )
    {
      if ( *(_BYTE *)v3 != 0 )
        sub_46F108(*(char **)(v3 + 8));
      else
        sub_46F088("%lld\n", *(_QWORD *)(v3 + 8));
      sub_446FB8();
      sub_42F138();
    }
    v2 = "syntax error";
  }
  else
  {
    v2 = "too few arguments";
  }
  sub_418210(v2);
}

