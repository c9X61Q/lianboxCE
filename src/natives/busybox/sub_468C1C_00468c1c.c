// busybox.exe @ 0x468c1c size=406

__int64 __usercall sub_468C1C@<edx:eax>(int a1@<eax>, int a2@<ecx>)
{
  int v2; // ebx
  int v3; // eax
  unsigned int v4; // eax
  _BYTE *v5; // esi
  __int64 v8; // [esp+Ch] [ebp-60h]
  _BYTE *Block; // [esp+14h] [ebp-58h]
  unsigned int i; // [esp+18h] [ebp-54h]
  unsigned int v11; // [esp+18h] [ebp-54h]
  void **v12; // [esp+1Ch] [ebp-50h] BYREF
  char v13[76]; // [esp+20h] [ebp-4Ch] BYREF

  v8 = 0;
  if ( sub_41C4B4((_BYTE *)a1, 23106, a2) != 0 )
    return -1;
  Block = (_BYTE *)sub_470E78();
  for ( i = 0; ; i = v11 - 2 )
  {
    v2 = setjmp3();
    if ( v2 == 0 )
    {
      v2 = sub_462CD8((int)v13, &v12, *(_DWORD *)(a1 + 12), Block + 2, i);
      if ( v2 == 0 )
      {
        while ( 1 )
        {
          v3 = sub_456A60(v12, Block, 4096);
          v2 = v3;
          if ( v3 < 0 )
            break;
          v4 = 4096 - v3;
          v2 = 4096 - v2;
          if ( v2 == 0 )
            goto LABEL_11;
          if ( v2 != sub_467054(a1, Block, v4) )
          {
            v2 = -4;
            goto LABEL_19;
          }
          v8 += v2;
        }
      }
    }
    if ( v2 != -1 )
      break;
LABEL_11:
    if ( v12[12] != v12[13] )
    {
      sub_4181F8("CRC error");
      goto LABEL_19;
    }
    v5 = v12[5];
    v11 = (_BYTE *)v12[4] - v5;
    qmemcpy(Block, &v5[(_DWORD)v12[6]], v11);
    if ( v11 <= 1 )
    {
      if ( 2 - v11 != sub_45C560(2 - v11, &Block[v11], *(_DWORD *)(a1 + 12)) )
        goto LABEL_18;
      v11 = 2;
    }
    if ( *(_WORD *)Block != 23106 )
    {
LABEL_18:
      v2 = 0;
      goto LABEL_19;
    }
    sub_422708(v12);
  }
  sub_41783C("bunzip error %d", v2);
LABEL_19:
  sub_422708(v12);
  free(Block);
  if ( v2 != 0 )
    return v2;
  return v8;
}

