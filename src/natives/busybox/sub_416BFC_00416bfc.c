// busybox.exe @ 0x416bfc size=241

void __cdecl __noreturn sub_416BFC(int a1, int a2)
{
  int v2; // esi
  _DWORD *v3; // eax
  FILE *v4; // eax
  FILE *v5; // eax
  int v6; // eax
  int v7; // ebx
  FILE *v8; // eax
  FILE *Stream; // [esp+0h] [ebp-98h]
  _BYTE v10[57]; // [esp+Ah] [ebp-8Eh] BYREF
  _BYTE v11[85]; // [esp+43h] [ebp-55h] BYREF

  v2 = sub_435D44(a2, "^d");
  v3 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v3 == 0 )
    *(v3 - 1) = "-";
  v4 = (FILE *)sub_470D10();
  if ( v2 != 0 )
  {
    v5 = off_4730E8(1);
    sub_45690C(255, v5);
  }
  else
  {
    fileno(v4);
    while ( 1 )
    {
      v6 = sub_432664(57, v10);
      v7 = v6;
      if ( v6 == 0 )
        break;
      if ( v6 < 0 )
        sub_41823C();
      Stream = (FILE *)sub_41846C("ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/=");
      sub_471D00(4 * ((v7 + 2) / 3u), v11);
      sub_418130(Stream);
      v8 = off_4730E8(1);
      fflush(v8);
    }
  }
  sub_42F138();
}

