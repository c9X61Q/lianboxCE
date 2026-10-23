// busybox.exe @ 0x430e00 size=138

void sub_430E00()
{
  int v0; // ebx
  char *Str; // esi

  v0 = dword_486010;
  if ( *(_DWORD *)(dword_486010 + 52) != 0 )
  {
    if ( *(_DWORD *)(dword_486010 + 44) != -1 )
    {
      sub_416EC0();
      sub_470B50();
    }
    sub_470B50();
    if ( **(_BYTE **)(v0 + 52) != 0 )
    {
      Str = (char *)sub_47188C();
      Str[strlen(Str) - 6] = 0;
      sub_443B88(*(LPCSTR *)(v0 + 52), Str);
      free(Str);
      free(*(void **)(v0 + 52));
    }
    *(_DWORD *)(v0 + 52) = 0;
  }
  *(_DWORD *)(v0 + 44) = -1;
  *(_DWORD *)(v0 + 48) = -1;
}

