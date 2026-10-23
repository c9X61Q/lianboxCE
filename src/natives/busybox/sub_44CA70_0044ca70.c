// busybox.exe @ 0x44ca70 size=506

int __cdecl sub_44CA70()
{
  _DWORD *v0; // eax
  int v1; // edx
  int result; // eax
  int v3; // edi
  unsigned __int8 *v4; // edx
  int v5; // ecx
  char v6; // dl
  signed int Size; // ebx
  CHAR *v8; // esi
  int v9; // edi
  int v10; // eax
  int v11; // eax
  void *v12; // edi
  char *v13; // esi
  char v14; // al
  int v15; // eax
  char v16; // bl
  unsigned __int8 *v17; // eax
  _DWORD *v18; // edx

  v0 = off_473358;
  v1 = *((_DWORD *)off_473358 + 18);
  if ( v1 != 0 )
  {
    *((_DWORD *)off_473358 + 18) = v1 - 1;
    return v0[v1 + 15];
  }
  v3 = *((_DWORD *)off_473358 + 3);
  *((_DWORD *)off_473358 + 3) = v3 - 1;
  if ( v3 - 1 < 0 )
  {
    v5 = v0[7];
    if ( v5 != 0 )
    {
      if ( v3 != 0 || *(_DWORD *)(v5 + 12) == 0 || (v6 = *(_BYTE *)(v0[5] - 1)) == 9 || (result = 257, v6 == 32) )
      {
        sub_44D9D0();
        result = sub_44CA70();
      }
    }
    else
    {
      if ( v3 - 1 >= -90 && v0[6] != 0 )
      {
        Size = v0[4];
        if ( Size > 0 )
        {
LABEL_28:
          v12 = off_473358;
          v13 = *((char **)off_473358 + 5);
          do
          {
            --Size;
            v14 = *v13;
            if ( *v13 != 13 && v14 != 0 )
            {
              if ( v14 == 10 )
              {
                *((_DWORD *)v12 + 3) = &v13[-*((_DWORD *)v12 + 5)];
                ++v13;
                goto LABEL_37;
              }
              ++v13;
            }
            else
            {
              memmove(v13, v13 + 1, Size);
            }
          }
          while ( Size != 0 );
          v15 = (int)&v13[-*((_DWORD *)v12 + 5) - 1];
          *((_DWORD *)v12 + 3) = v15;
          if ( v15 < 0 )
            goto LABEL_15;
LABEL_37:
          *((_DWORD *)v12 + 4) = Size;
          if ( *(_BYTE *)(dword_485FF0 + 72) != 0 )
          {
            v16 = *v13;
            *v13 = 0;
            sub_448168(*((char **)v12 + 5));
            *v13 = v16;
          }
          v17 = *((unsigned __int8 **)off_473358 + 5);
          *((_DWORD *)off_473358 + 5) = v17 + 1;
          result = *v17;
          goto LABEL_40;
        }
        sub_431174();
LABEL_15:
        v8 = *((CHAR **)off_473358 + 6);
        *((_DWORD *)off_473358 + 5) = v8;
        while ( 1 )
        {
          v9 = dword_485FF0;
          v10 = *((_DWORD *)off_473358 + 2);
          if ( *(_BYTE *)(dword_485FF0 + 66) == 0 || v10 != 0 )
          {
            Size = sub_446D28(v10, v8, 1023);
            if ( Size > 0 )
              goto LABEL_28;
            goto LABEL_26;
          }
          *(_DWORD *)(dword_473454 + 8) = *(_DWORD *)(dword_485FEC + 208) + 5;
          v11 = sub_456DCC(1024);
          Size = v11;
          if ( v11 != 0 )
            break;
          sub_46F294(1, "^C", 2u);
          if ( *(_DWORD *)(v9 + 92) != 0 )
          {
            *(_WORD *)v8 = 10;
            Size = 1;
            goto LABEL_28;
          }
          *(_BYTE *)v9 = -126;
          sub_418130(10);
        }
        if ( v11 >= 0 )
          goto LABEL_28;
        _errno();
LABEL_26:
        v0 = off_473358;
        *((_DWORD *)off_473358 + 3) = -99;
      }
      ++v0[5];
      result = 256;
    }
  }
  else
  {
    v4 = (unsigned __int8 *)v0[5];
    v0[5] = v4 + 1;
    result = *v4;
  }
LABEL_40:
  v18 = off_473358;
  *((_DWORD *)off_473358 + 17) = *((_DWORD *)off_473358 + 16);
  v18[16] = result;
  return result;
}

