// busybox.exe @ 0x418510 size=475

void __usercall sub_418510(char *Source@<ecx>, _BYTE *a2@<eax>, int a3@<edx>)
{
  _BYTE *v3; // esi
  signed int v6; // ebx
  int v7; // eax
  size_t v8; // ebp
  char *v9; // eax
  size_t v10; // ecx
  int v11; // eax
  char *Str; // [esp+0h] [ebp-84h]
  size_t v13; // [esp+10h] [ebp-74h]
  size_t v14; // [esp+10h] [ebp-74h]
  size_t v15; // [esp+14h] [ebp-70h]
  size_t v16; // [esp+18h] [ebp-6Ch]
  size_t v17; // [esp+1Ch] [ebp-68h]
  void *Block; // [esp+20h] [ebp-64h] BYREF
  _BYTE v19[96]; // [esp+24h] [ebp-60h] BYREF

  if ( byte_473468 == 0 )
    return;
  v3 = a2;
  if ( a2 == nullptr )
    v3 = &unk_474904;
  v16 = strlen(dword_485AD0);
  v15 = 0;
  if ( Source != nullptr )
    v15 = strlen(Source);
  v13 = v16 + 2;
  v17 = strlen(off_473494);
  if ( (int)(80 - (v16 + 2)) > 0 )
  {
    Block = v19;
    v6 = v13 + sub_407C50((int)&v19[v13], 80 - v13, (int)v3, a3);
    if ( (int)(77 - v17 - v15) > v6 )
      goto LABEL_12;
  }
  v7 = sub_407D10(&Block, (int)v3, a3);
  v8 = v7;
  if ( v7 < 0 )
    return;
  v6 = v13 + v7;
  v9 = (char *)realloc(Block, v17 + v13 + v7 + v15 + 3);
  if ( v9 != nullptr )
  {
    Block = v9;
    memmove(&v9[v13], v9, v8);
LABEL_12:
    strcpy((char *)Block, dword_485AD0);
    *((_BYTE *)Block + v16) = 58;
    *((_BYTE *)Block + v16 + 1) = 32;
    if ( Source != nullptr )
    {
      if ( *v3 != 0 )
      {
        v11 = v6 + 1;
        *((_BYTE *)Block + v6) = 58;
        v6 += 2;
        *((_BYTE *)Block + v11) = 32;
      }
      strcpy((char *)Block + v6, Source);
      v6 += v15;
    }
    strcpy((char *)Block + v6, off_473494);
    v10 = v6 + v17;
    goto LABEL_17;
  }
  v10 = v8 + 1;
  *((_BYTE *)Block + v8) = 10;
LABEL_17:
  v14 = v10;
  if ( (byte_473468 & 1) != 0 )
  {
    sub_42F128(Str);
    sub_43269C(v14, Block);
  }
  if ( Block != v19 )
    free(Block);
}

