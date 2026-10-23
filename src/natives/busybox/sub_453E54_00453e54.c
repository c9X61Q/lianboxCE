// busybox.exe @ 0x453e54 size=441

int __usercall sub_453E54@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  unsigned int v4; // esi
  void *v5; // eax
  int result; // eax
  void *Block; // eax
  void *v8; // eax
  void *v9; // eax
  void *v10; // eax
  void *v11; // ebp
  void *v12; // eax
  void *v13; // eax
  void *v14; // edx
  void *v15; // eax
  void *v16; // eax
  int v17; // edx
  _DWORD *v18; // eax
  void *v19; // [esp+8h] [ebp-24h]
  void *v22; // [esp+18h] [ebp-14h]

  v4 = *(_DWORD *)(a1 + 4);
  if ( *(_DWORD *)(a1 + 8) >= v4 )
  {
    if ( !is_mul_ok(0xCu, 2 * v4) )
      return -1;
    v5 = *(_DWORD *)a1 != 0 ? realloc(*(void **)a1, 16 * v4) : calloc(2 * v4, 8u);
    if ( v5 == nullptr )
      return -1;
    *(_DWORD *)a1 = v5;
    Block = *(void **)(a1 + 12);
    v8 = Block != nullptr ? realloc(Block, 8 * v4) : calloc(2 * v4, 4u);
    v19 = v8;
    v9 = *(void **)(a1 + 16);
    v10 = v9 != nullptr ? realloc(v9, 8 * v4) : calloc(2 * v4, 4u);
    v11 = v10;
    v12 = *(void **)(a1 + 20);
    v13 = v12 != nullptr ? realloc(v12, 24 * v4) : calloc(2 * v4, 0xCu);
    v14 = v13;
    v15 = *(void **)(a1 + 24);
    v22 = v14;
    v16 = v15 != nullptr ? realloc(v15, 24 * v4) : calloc(2 * v4, 0xCu);
    if ( v22 == nullptr || v19 == nullptr || v11 == nullptr || v16 == nullptr )
      return -1;
    *(_DWORD *)(a1 + 12) = v19;
    *(_DWORD *)(a1 + 16) = v11;
    *(_DWORD *)(a1 + 20) = v22;
    *(_DWORD *)(a1 + 24) = v16;
    *(_DWORD *)(a1 + 4) = 2 * v4;
  }
  v17 = *(_DWORD *)(a1 + 8);
  v18 = (_DWORD *)(*(_DWORD *)a1 + 8 * v17);
  *v18 = a2;
  v18[1] = a3;
  v18[1] &= 0xFFFC00FF;
  *(_DWORD *)(*(_DWORD *)(a1 + 12) + 4 * v17) = -1;
  memset((void *)(*(_DWORD *)(a1 + 20) + 12 * *(_DWORD *)(a1 + 8)), 0, 0xCu);
  memset((void *)(*(_DWORD *)(a1 + 24) + 12 * *(_DWORD *)(a1 + 8)), 0, 0xCu);
  result = *(_DWORD *)(a1 + 8);
  *(_DWORD *)(a1 + 8) = result + 1;
  return result;
}

