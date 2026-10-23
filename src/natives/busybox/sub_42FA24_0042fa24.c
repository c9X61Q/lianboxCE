// busybox.exe @ 0x42fa24 size=312

int __usercall sub_42FA24@<eax>(const char *a1@<eax>)
{
  _WORD *v2; // ebx
  signed int v3; // esi
  int v4; // ecx
  int v5; // ebp
  int v6; // ecx
  int v7; // esi
  int v8; // esi
  int v9; // edi
  signed int v11; // [esp+4h] [ebp-1Ch]
  void *Block; // [esp+8h] [ebp-18h] BYREF
  void *v13; // [esp+Ch] [ebp-14h] BYREF

  v2 = (_WORD *)sub_4728CC();
  v11 = strlen(a1);
  v2[1] = sub_45CD18();
  v3 = 0;
  while ( v3 < v11 )
  {
    v5 = sub_457CB0(&v13, &Block);
    if ( Block != nullptr )
    {
      switch ( (unsigned int)sub_439918(v4, Block) )
      {
        case 0u:
          *v2 = sub_45CD18();
          break;
        case 1u:
          v2[1] = sub_45CD18();
          break;
        case 2u:
          v6 = 1;
          goto LABEL_15;
        case 3u:
          v6 = 3;
          goto LABEL_15;
        case 4u:
          v6 = 5;
          goto LABEL_15;
        case 5u:
          v6 = 7;
          goto LABEL_15;
        case 6u:
          v6 = 9;
          goto LABEL_15;
        case 7u:
          v6 = 11;
          goto LABEL_15;
        case 8u:
          v6 = 13;
          goto LABEL_15;
        case 9u:
          v6 = 15;
LABEL_15:
          sub_413438((int)v2, v6);
          break;
        default:
          break;
      }
    }
    v3 += v5;
    free(Block);
    free(v13);
  }
  v7 = (unsigned __int16)v2[1];
  if ( v7 == sub_45CD18() )
  {
    sub_431D94();
    return -1;
  }
  else
  {
    v8 = sub_45CD88(1);
    v9 = dword_486010 + 4 * v8;
    sub_431D94();
    *(_DWORD *)(v9 + 65528) = v2;
  }
  return v8;
}

