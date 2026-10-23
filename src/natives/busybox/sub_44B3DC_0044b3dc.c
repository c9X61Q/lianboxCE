// busybox.exe @ 0x44b3dc size=337

int __usercall sub_44B3DC@<eax>(int a1@<eax>)
{
  int v1; // ebx
  int result; // eax
  int v3; // eax
  int v4; // ecx
  _DWORD *v5; // esi
  int v6; // ecx
  int v7; // eax
  int v8; // edx
  int v9; // eax
  _DWORD *v10; // esi

  v1 = dword_486010;
  *(_DWORD *)(dword_486010 - 20) = a1;
  *(_DWORD *)(v1 + 12) = 1;
  while ( 1 )
  {
    result = sub_446730(0x7FF8D425u);
    if ( result == 0x2000000 )
      return result;
    if ( (result & 0xC000) == 0 )
    {
      *(_DWORD *)(v1 - 76) = v1 - 100;
      if ( (result & 0x800000) != 0 )
      {
        v3 = v1 - 112;
LABEL_8:
        *(_DWORD *)(v1 - 76) = v3;
        goto LABEL_26;
      }
      if ( (result & 0x1000000) != 0 )
      {
        v3 = v1 - 88;
        goto LABEL_8;
      }
      if ( (result & 0x400000) != 0 )
      {
        sub_446730(0x10000000u);
        ++*(_DWORD *)(v1 - 20);
        v5 = (_DWORD *)sub_437FC0(*(unsigned int **)(v1 - 48), *(const char **)(v1 + 8), v4);
        v5[1] = 0;
        *v5 = 0;
        while ( sub_446730(0x4000102u) != 0 )
        {
          v7 = *(_DWORD *)(v1 + 4);
          if ( *v5 == 0 && v7 == 2 )
            break;
          if ( v7 != 0x4000000 )
            goto LABEL_16;
          v8 = sub_437FC0(*(unsigned int **)(v1 - 56), *(const char **)(v1 + 8), v6);
          v9 = (*v5)++;
          *(_DWORD *)(v8 + 20) = v9;
          if ( (sub_446730(0x102u) & 2) != 0 )
            break;
          if ( *(_DWORD *)(v1 + 4) != 256 )
LABEL_16:
            sub_4645B8(v6);
        }
        *(_DWORD *)(v1 - 76) = v5 + 1;
        sub_41B000();
        sub_41C970(*(_DWORD **)(v1 - 56));
      }
      else if ( (result & 0x7C380425) != 0 )
      {
        sub_45B408();
        v10 = sub_41B308(3328);
        v10[2] = sub_449DBC(33607680);
        if ( (*(_BYTE *)(v1 + 5) & 0x10) != 0 )
        {
          sub_45B408();
          sub_41B000();
        }
        else
        {
          sub_41B308(1024);
        }
        v10[3] = *(_DWORD *)(v1 - 96);
      }
      else
      {
        sub_45B408();
LABEL_26:
        sub_41B000();
      }
    }
  }
}

