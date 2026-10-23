// busybox.exe @ 0x41a864 size=423

int __usercall sub_41A864@<eax>(void *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, unsigned __int8 a4)
{
  unsigned int v5; // eax
  int v6; // ecx
  __int64 v7; // rax
  int i; // ebp
  int v9; // eax
  _DWORD *v10; // esi
  int v11; // eax
  _DWORD *v12; // eax
  void *Block; // [esp+0h] [ebp-48h]
  int v15; // [esp+4h] [ebp-44h]
  int v17; // [esp+Ch] [ebp-3Ch]
  int v18; // [esp+10h] [ebp-38h]
  char v19; // [esp+14h] [ebp-34h]
  int v20; // [esp+18h] [ebp-30h]
  _BYTE v22[12]; // [esp+20h] [ebp-28h]
  void *v23[3]; // [esp+2Ch] [ebp-1Ch] BYREF

  v17 = 12 * a3;
  v18 = sub_454160();
  if ( v18 != 0 )
    return v18;
  *(_DWORD *)(a2[6] + v17 + 4) = -1;
  v5 = *(_DWORD *)(*a2 + 8 * a3 + 4);
  if ( (v5 & 0x3FF00) != 0 )
  {
    v6 = a2[5] + v17;
    if ( *(_DWORD *)(v6 + 4) != 0 && (*(_BYTE *)(*a2 + 8 * **(_DWORD **)(v6 + 8) + 6) & 4) == 0 )
    {
      v7 = sub_429490(a3, (v5 >> 8) & 0x3FF);
      v15 = HIDWORD(v7);
      Block = (void *)HIDWORD(v7);
      if ( (_DWORD)v7 != 0 )
        return v7;
    }
  }
  v19 = 0;
  if ( (*(_BYTE *)(*a2 + 8 * a3 + 4) & 8) != 0 )
  {
    for ( i = 0; ; ++i )
    {
      v9 = a2[5] + v17;
      if ( *(_DWORD *)(v9 + 4) <= i )
        goto LABEL_21;
      v20 = 12 * *(_DWORD *)(*(_DWORD *)(v9 + 8) + 4 * i);
      v10 = (_DWORD *)(v20 + a2[6]);
      v11 = v10[1];
      if ( v11 == -1 )
        goto LABEL_19;
      if ( v11 != 0 )
      {
        qmemcpy(v23, v10, sizeof(v23));
      }
      else
      {
        LODWORD(v7) = sub_41A864(0);
        if ( (_DWORD)v7 != 0 )
          return v7;
      }
      LODWORD(v7) = sub_4544DC(Block, v15);
      if ( (_DWORD)v7 != 0 )
        return v7;
      if ( *(_DWORD *)(a2[6] + v20 + 4) == 0 )
        break;
LABEL_20:
      ;
    }
    free(v23[2]);
LABEL_19:
    v19 = 1;
    goto LABEL_20;
  }
LABEL_21:
  if ( sub_4543C4() < 0 )
    return 12;
  v12 = (_DWORD *)(a2[6] + v17);
  if ( ((a4 ^ 1) & (unsigned __int8)v19) != 0 )
    v12[1] = 0;
  else
    qmemcpy(v12, v22, 12);
  qmemcpy(a1, v22, 12);
  return v18;
}

