// busybox.exe @ 0x458374 size=157

int sub_458374()
{
  char v0; // si
  void *v1; // ecx
  int v2; // ebx
  _BYTE *v3; // eax
  int v4; // edx
  const char *v5; // eax

  v0 = byte_473198;
  while ( 1 )
  {
    v2 = sub_472184();
    if ( (v0 & 4) != 0 )
    {
      while ( v2 == 1 )
      {
        sub_44B928(v1);
        v2 = sub_472184();
      }
    }
    if ( v2 != 3 || byte_473568 != 0 )
      break;
    if ( (v0 & 2) != 0 )
    {
      v3 = sub_430DB0(dword_4735D0);
      if ( v3 != nullptr )
      {
        v2 = (v3 - (_BYTE *)off_4846C0) >> 2;
        byte_473450 = v2;
        break;
      }
    }
    if ( (byte_473198 & 1) == 0 )
      break;
    v4 = *sub_411EA4(dword_4735D0);
    if ( v4 == 0 || (*(_BYTE *)(v4 + 12) & 1) != 0 )
      break;
    v5 = *(const char **)(v4 + 8);
    if ( *v5 != 0 )
      sub_452850(v5, v4);
  }
  byte_473198 = 0;
  return v2;
}

