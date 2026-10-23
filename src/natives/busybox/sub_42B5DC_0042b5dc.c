// busybox.exe @ 0x42b5dc size=598

int __cdecl sub_42B5DC(unsigned __int8 *a1, int a2)
{
  char *v2; // edi
  int v3; // ebx
  int v4; // esi
  _DWORD *v5; // ebp
  int v6; // ecx
  int (__cdecl *v7)(char *, int); // ecx
  int v8; // ebx
  int v9; // eax
  int v10; // eax
  int v11; // eax
  size_t v12; // esi
  int v13; // ebx
  int v14; // esi
  int v16; // [esp+0h] [ebp-28h]
  unsigned int v17; // [esp+8h] [ebp-20h]

  v2 = (char *)a1;
  sub_45EA54();
  v3 = 0;
  v4 = 0;
  v5 = (_DWORD *)dword_485FF0;
  if ( a1 != nullptr )
  {
    v6 = *a1;
    switch ( *a1 )
    {
      case 0u:
        v7 = (int (__cdecl *)(char *, int))sub_42A940;
        goto LABEL_13;
      case 1u:
        v7 = (int (__cdecl *)(char *, int))sub_42B27C;
        goto LABEL_13;
      case 2u:
        v8 = dword_485FEC;
        v9 = *((_DWORD *)a1 + 1);
        *(_DWORD *)(dword_485FEC + 376) = v9;
        v5[5] = v9;
        if ( dword_473340 != 0 )
          *(_DWORD *)(v8 + 376) = v9 - (dword_473340 - 1);
        sub_42E40C();
        sub_4527D4();
        v3 = sub_4599DC();
        if ( v3 == 0 )
          v3 = sub_42B5DC(*((_DWORD *)a1 + 2), a2 & 2);
        v4 = 0;
        if ( *((_DWORD *)a1 + 3) != 0 )
          sub_44D900(v16);
        goto LABEL_33;
      case 3u:
      case 4u:
        v7 = sub_42B500;
LABEL_13:
        v3 = 0;
        if ( *(_BYTE *)(dword_485FF0 + 63) != 0 )
          v3 = -((a2 & 2) == 0);
        goto LABEL_26;
      case 5u:
      case 6u:
      case 7u:
        v17 = (char)*a1 - 5;
        v3 = sub_42B5DC(*((_DWORD *)a1 + 1), ((unsigned __int8)a2 | (unsigned __int8)((v17 >> 1) - 1)) & 2);
        v4 = 0;
        if ( (v3 == 0) == v17 || byte_473328 != 0 )
          break;
        v2 = *((char **)a1 + 2);
        goto LABEL_24;
      case 8u:
        v10 = sub_42B5DC(*((_DWORD *)a1 + 1), 2);
        v3 = v10;
        v4 = 0;
        if ( byte_473328 != 0 )
          break;
        if ( v10 != 0 )
        {
          v2 = *((char **)a1 + 3);
          v3 = 0;
          if ( v2 == nullptr )
            goto LABEL_33;
LABEL_24:
          v7 = (int (__cdecl *)(char *, int))sub_42B5DC;
LABEL_25:
          v3 = 0;
LABEL_26:
          v11 = v7(v2, a2);
        }
        else
        {
          v11 = sub_42B5DC(*((_DWORD *)a1 + 2), a2);
        }
        v4 = v3;
        v3 = v11;
LABEL_33:
        *(_BYTE *)v5 = v3;
        break;
      case 9u:
      case 0xAu:
        v7 = (int (__cdecl *)(char *, int))sub_42B1FC;
        goto LABEL_25;
      case 0xBu:
        v7 = (int (__cdecl *)(char *, int))sub_42B03C;
        goto LABEL_25;
      case 0xCu:
        v7 = (int (__cdecl *)(char *, int))sub_42A81C;
        goto LABEL_25;
      case 0xEu:
        ++*(_DWORD *)(dword_485FF0 + 56);
        v12 = sub_41AABC(0, (char *)a1, v6) + 4;
        v13 = sub_4728CC();
        dword_47333C = v13 + 4;
        dword_473344 = v13 + v12;
        dword_473338 = 0;
        sub_41F4E8((char *)a1);
        v14 = sub_41CBF8(*((const char **)a1 + 2), 1);
        if ( *(_BYTE *)(v14 + 8) == 1 )
          sub_431ECC();
        *(_DWORD *)(v14 + 4) = v13;
        *(_WORD *)(v14 + 8) = 1;
        sub_43B8DC(v16);
        v3 = 0;
        goto LABEL_32;
      default:
        v3 = sub_42B5DC(*((_DWORD *)a1 + 1), 2) == 0;
LABEL_32:
        v4 = 0;
        goto LABEL_33;
    }
  }
  if ( (a2 & 1 | v3 & v4) != 0 )
    sub_453074();
  sub_44D988();
  return *(unsigned __int8 *)v5;
}

