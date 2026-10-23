// busybox.exe @ 0x442be8 size=268

int __usercall sub_442BE8@<eax>(int *a1@<eax>, _DWORD *a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  int *v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // eax
  int v9; // eax
  _DWORD *v10; // esi
  __int64 v11; // rax
  int v12; // eax
  int v13; // eax
  void *Block; // [esp+0h] [ebp-30h]
  int v16; // [esp+4h] [ebp-2Ch]
  int v18; // [esp+10h] [ebp-20h]
  void *v19[3]; // [esp+14h] [ebp-1Ch] BYREF

  v4 = a3;
  v18 = a2[17];
  v16 = a2[6];
  v5 = (int *)(a2[21] + 4 * v16);
  if ( a2[22] >= v16 )
  {
    v6 = *v5;
    if ( *v5 != 0 )
    {
      if ( a3 != 0 )
      {
        v7 = *(_DWORD *)(a3 + 40);
        v8 = sub_4542AC(*(_DWORD *)(v6 + 40), v7);
        *a1 = v8;
        if ( v8 != 0 )
          return 0;
      }
      else
      {
        qmemcpy(v19, *(const void **)(v6 + 40), sizeof(v19));
        v7 = 0;
      }
      v9 = sub_4564EC(a2[18], a2[6] - 1);
      v10 = (_DWORD *)(a2[21] + 4 * v16);
      v11 = sub_453294(v9);
      Block = (void *)HIDWORD(v11);
      v4 = v11;
      *v10 = v11;
      if ( v7 != 0 )
        free(v19[2]);
    }
    else
    {
      *v5 = a3;
    }
  }
  else
  {
    *v5 = a3;
    a2[22] = v16;
  }
  if ( *(_DWORD *)(v18 + 76) != 0 )
  {
    if ( v4 != 0 )
    {
      v12 = sub_41C4FC(a2, v4 + 4, v16);
      *a1 = v12;
      if ( v12 == 0 )
      {
        if ( (*(_BYTE *)(v4 + 52) & 0x40) == 0 )
          return v4;
        v13 = sub_4670EC(Block);
        *a1 = v13;
        if ( v13 == 0 )
          return *(_DWORD *)(a2[21] + 4 * v16);
      }
    }
    return 0;
  }
  return v4;
}

