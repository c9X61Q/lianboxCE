// busybox.exe @ 0x416dd0 size=81

BOOL sub_416DD0()
{
  FILE *Stream; // esi
  int v1; // ecx
  char v2; // bl
  int v3; // eax

  Stream = off_4730E8(0);
  sub_42F128(v1);
  v2 = 0;
  while ( 1 )
  {
    v3 = fgetc(Stream);
    if ( v3 == -1 || v3 == 10 )
      break;
    if ( v2 == 0 && (_BYTE)v3 != 32 && (_BYTE)v3 != 9 )
      v2 = v3 | 0x20;
  }
  return v2 == 121;
}

