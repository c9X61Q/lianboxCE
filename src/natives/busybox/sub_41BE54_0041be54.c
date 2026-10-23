// busybox.exe @ 0x41be54 size=247

int __userpurge sub_41BE54@<eax>(_DWORD *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>, int a4)
{
  int v6; // ebp
  _DWORD *v7; // eax
  int v8; // edx
  int j; // eax
  int v10; // edi
  int v11; // eax
  void *v12; // edx
  int v13; // edi
  void *Block; // [esp+0h] [ebp-38h]
  void *v16; // [esp+4h] [ebp-34h]
  int i; // [esp+8h] [ebp-30h]
  int v18; // [esp+10h] [ebp-28h]
  _BYTE v20[12]; // [esp+1Ch] [ebp-1Ch]

  v6 = sub_454160(a3, a2[1]);
  if ( v6 == 0 )
  {
    for ( i = 0; ; ++i )
    {
      v7 = (_DWORD *)a2[2];
      if ( a2[1] <= i )
        break;
      v8 = a1[6] + 12 * v7[i];
      for ( j = 0; ; ++j )
      {
        if ( j >= *(_DWORD *)(v8 + 4) )
          goto LABEL_10;
        v18 = *(_DWORD *)(*(_DWORD *)(v8 + 8) + 4 * j);
        v10 = *a1 + 8 * v18;
        if ( a4 == *(unsigned __int8 *)(v10 + 4) && a3 == *(_DWORD *)v10 )
          break;
      }
      if ( v18 == -1 )
      {
LABEL_10:
        v11 = sub_4544DC(Block, v16);
        goto LABEL_12;
      }
      v11 = sub_41BF4C(a3, a4);
      v16 = v12;
      Block = v12;
LABEL_12:
      v13 = v11;
      if ( v11 != 0 )
      {
        free(*(void **)&v20[8]);
        return v13;
      }
    }
    free(v7);
    qmemcpy(a2, v20, 12);
  }
  return v6;
}

