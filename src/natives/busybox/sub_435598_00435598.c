// busybox.exe @ 0x435598 size=301

int __userpurge sub_435598@<eax>(int a1@<eax>, int *a2@<edx>, int *a3@<ecx>, int a4, int a5)
{
  int result; // eax
  int v8; // ebp
  int v9; // eax
  void *Block; // edx
  char *v11; // eax
  int v12; // edx
  int v13; // ecx
  int v14; // edi
  int v15; // eax
  int v16; // ebp
  int v17; // [esp+10h] [ebp-1Ch]

  result = sub_41BAC0(a1, a3 + 2, *a3, a3[1], a4, a5, 8);
  if ( result == 0 )
  {
    v8 = a3[1];
    v17 = *a2;
    v9 = *(_DWORD *)(a1 + 96);
    if ( *(_DWORD *)(a1 + 92) >= v9 )
    {
      Block = *(void **)(a1 + 100);
      if ( Block != nullptr )
        v11 = (char *)realloc(Block, 40 * v9);
      else
        v11 = (char *)calloc(2 * v9, 0x14u);
      if ( v11 == nullptr )
      {
        free(*(void **)(a1 + 100));
        return 12;
      }
      *(_DWORD *)(a1 + 100) = v11;
      memset(&v11[20 * *(_DWORD *)(a1 + 92)], 0, 20 * *(_DWORD *)(a1 + 96));
      *(_DWORD *)(a1 + 96) *= 2;
    }
    v12 = *(_DWORD *)(a1 + 92);
    v13 = *(_DWORD *)(a1 + 100);
    if ( v12 > 0 )
    {
      v14 = v13 + 20 * v12 - 20;
      if ( a5 == *(_DWORD *)(v14 + 4) )
        *(_BYTE *)(v14 + 16) = 1;
    }
    v15 = v13 + 20 * v12;
    *(_DWORD *)v15 = a4;
    *(_DWORD *)(v15 + 4) = a5;
    *(_DWORD *)(v15 + 8) = v17;
    *(_DWORD *)(v15 + 12) = v8;
    *(_WORD *)(v15 + 18) = -(v8 == v17);
    *(_DWORD *)(a1 + 92) = v12 + 1;
    *(_BYTE *)(v15 + 16) = 0;
    v16 = v8 - v17;
    if ( *(_DWORD *)(a1 + 104) < v16 )
      *(_DWORD *)(a1 + 104) = v16;
    return sub_41C90C((_DWORD *)a1, a3[1] + a5 - *a2);
  }
  return result;
}

