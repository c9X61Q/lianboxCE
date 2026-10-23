// busybox.exe @ 0x41f4e8 size=488

int __usercall sub_41F4E8@<eax>(char *a1@<eax>)
{
  char *v1; // esi
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v1 = a1;
  if ( a1 != nullptr )
  {
    v2 = dword_47333C;
    v3 = *a1;
    dword_47333C += (unsigned __int8)byte_4804DC[v3];
    switch ( (char)v3 )
    {
      case 0:
        v4 = sub_41F4E8();
        goto LABEL_9;
      case 1:
        *(_DWORD *)(v2 + 4) = sub_41F6D0();
        *(_BYTE *)(v2 + 1) = v1[1];
        goto LABEL_27;
      case 2:
      case 3:
      case 4:
      case 12:
        *(_DWORD *)(v2 + 12) = sub_41F4E8();
        v6 = sub_41F4E8();
        goto LABEL_15;
      case 5:
      case 6:
      case 7:
      case 9:
      case 10:
        *(_DWORD *)(v2 + 8) = sub_41F4E8();
        *(_DWORD *)(v2 + 4) = sub_41F4E8();
        v5 = dword_473338;
        if ( dword_473338 == 0 )
          goto LABEL_29;
        *(_BYTE *)(v2 + dword_473338 + 4) = 1;
        goto LABEL_7;
      case 8:
      case 13:
        *(_DWORD *)(v2 + 12) = sub_41F4E8();
        v7 = sub_41F4E8();
        goto LABEL_18;
      case 11:
        v4 = sub_446CEC();
LABEL_9:
        *(_DWORD *)(v2 + 16) = v4;
        *(_DWORD *)(v2 + 12) = sub_41F4E8();
        *(_DWORD *)(v2 + 8) = sub_41F4E8();
        *(_DWORD *)(v2 + 4) = *((_DWORD *)v1 + 1);
        v5 = dword_473338;
        if ( dword_473338 == 0 )
          goto LABEL_29;
        *(_BYTE *)(v2 + dword_473338 + 16) = 1;
        goto LABEL_11;
      case 14:
        *(_DWORD *)(v2 + 12) = sub_41F4E8();
        v6 = sub_446CEC();
LABEL_15:
        *(_DWORD *)(v2 + 8) = v6;
        *(_DWORD *)(v2 + 4) = *((_DWORD *)v1 + 1);
        v5 = dword_473338;
        if ( dword_473338 != 0 )
        {
LABEL_11:
          *(_BYTE *)(v2 + v5 + 12) = 1;
LABEL_7:
          *(_BYTE *)(v2 + v5 + 8) = 1;
        }
        goto LABEL_29;
      case 15:
        *(_DWORD *)(v2 + 12) = sub_41F6D0();
        v7 = sub_446CEC();
LABEL_18:
        *(_DWORD *)(v2 + 8) = v7;
        *(_DWORD *)(v2 + 4) = sub_41F4E8();
        v8 = dword_473338;
        if ( dword_473338 == 0 )
          goto LABEL_29;
        *(_BYTE *)(v2 + dword_473338 + 12) = 1;
        *(_BYTE *)(v2 + v8 + 8) = 1;
        break;
      case 16:
      case 17:
      case 18:
      case 19:
      case 20:
      case 21:
        *(_DWORD *)(v2 + 16) = sub_41F4E8();
        goto LABEL_22;
      case 22:
      case 23:
        *(_DWORD *)(v2 + 16) = sub_41F4E8();
        *(_DWORD *)(v2 + 12) = *((_DWORD *)v1 + 3);
LABEL_22:
        *(_DWORD *)(v2 + 8) = *((_DWORD *)v1 + 2);
        *(_DWORD *)(v2 + 4) = sub_41F4E8();
        v8 = dword_473338;
        if ( dword_473338 == 0 )
          goto LABEL_29;
        *(_BYTE *)(v2 + dword_473338 + 16) = 1;
        break;
      case 24:
      case 25:
        *(_DWORD *)(v2 + 12) = sub_41F4E8();
        *(_DWORD *)(v2 + 8) = *((_DWORD *)v1 + 2);
        *(_DWORD *)(v2 + 4) = sub_41F4E8();
        v8 = dword_473338;
        if ( dword_473338 == 0 )
          goto LABEL_29;
        *(_BYTE *)(v2 + dword_473338 + 12) = 1;
        break;
      case 26:
        *(_DWORD *)(v2 + 4) = sub_41F4E8();
LABEL_27:
        v8 = dword_473338;
        if ( dword_473338 != 0 )
          break;
        goto LABEL_29;
      default:
        goto LABEL_29;
    }
    *(_BYTE *)(v2 + v8 + 4) = 1;
LABEL_29:
    *(_BYTE *)v2 = *v1;
    return v2;
  }
  return (int)v1;
}

