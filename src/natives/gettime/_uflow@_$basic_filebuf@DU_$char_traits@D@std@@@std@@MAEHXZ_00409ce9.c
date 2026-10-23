// gettime.exe @ 0x409ce9 size=468

int __thiscall std::filebuf::uflow(int this)
{
  unsigned int v2; // ecx
  _DWORD *v3; // edx
  _DWORD *v4; // ecx
  unsigned __int8 *v5; // edx
  FILE *v7; // eax
  int v8; // eax
  int v9; // ebx
  int v10; // esi
  int v11; // eax
  int v12; // eax
  void **v13; // ecx
  void **v14; // eax
  int v15; // eax
  int v16; // esi
  char *v17; // ecx
  unsigned __int8 *v18; // [esp+10h] [ebp-40h] BYREF
  int v19; // [esp+14h] [ebp-3Ch] BYREF
  int v20; // [esp+18h] [ebp-38h]
  void **v21; // [esp+1Ch] [ebp-34h] BYREF
  char *v22; // [esp+20h] [ebp-30h] BYREF
  unsigned __int8 Block; // [esp+26h] [ebp-2Ah] BYREF
  unsigned __int8 Block_1; // [esp+27h] [ebp-29h] BYREF
  void *Block_2[4]; // [esp+28h] [ebp-28h] BYREF
  int v26; // [esp+38h] [ebp-18h]
  unsigned int v27; // [esp+3Ch] [ebp-14h]
  int v28; // [esp+4Ch] [ebp-4h]

  v2 = **(_DWORD **)(this + 28);
  if ( v2 != 0 )
  {
    v3 = *(_DWORD **)(this + 44);
    if ( v2 < *v3 + v2 )
    {
      --*v3;
      v4 = *(_DWORD **)(this + 28);
      v5 = (unsigned __int8 *)(*v4)++;
      return *v5;
    }
  }
  if ( *(_DWORD *)(this + 76) == 0 )
    return -1;
  std::filebuf::_Reset_back(this);
  v7 = *(FILE **)(this + 76);
  if ( *(_DWORD *)(this + 56) != 0 )
  {
    Block_2[0] = nullptr;
    v26 = 0;
    v27 = 15;
    v28 = 1;
    v8 = fgetc(v7);
    v9 = -1;
    while ( v8 != -1 )
    {
      std::string::push_back(Block_2, v8);
      v20 = *(_DWORD *)(this + 56);
      if ( v27 < 0x10 )
      {
        v22 = (char *)Block_2 + v26;
        v10 = v20;
        v21 = Block_2;
      }
      else
      {
        v22 = (char *)Block_2[0] + v26;
        v10 = v20;
        v21 = (void **)Block_2[0];
      }
      v11 = (*(int (__thiscall **)(int, int, void **, char *, int *, unsigned __int8 *, void **, unsigned __int8 **))(*(_DWORD *)v10 + 24))(
              v20,
              this + 64,
              v21,
              v22,
              &v19,
              &Block_1,
              Block_2,
              &v18);
      if ( v11 != 0 )
      {
        v12 = v11 - 1;
        if ( v12 != 0 )
        {
          if ( v12 == 2 )
          {
            v14 = Block_2;
            if ( v27 >= 0x10 )
              v14 = (void **)Block_2[0];
            v9 = *(char *)v14;
          }
          break;
        }
      }
      v13 = Block_2;
      if ( v18 != &Block_1 )
      {
        if ( v27 >= 0x10 )
          v13 = (void **)Block_2[0];
        v15 = v19;
        v16 = (int)v13 + v26 - v19;
        if ( v16 > 0 )
        {
          while ( 1 )
          {
            ungetc(*(char *)(--v16 + v15), *(FILE **)(this + 76));
            if ( v16 <= 0 )
              break;
            v15 = v19;
          }
        }
        v9 = Block_1;
        break;
      }
      if ( v27 >= 0x10 )
        v13 = (void **)Block_2[0];
      std::string::_Erase_noexcept(Block_2, 0, v19 - (_DWORD)v13);
      v8 = fgetc(*(FILE **)(this + 76));
    }
    if ( v27 >= 0x10 )
    {
      v17 = (char *)Block_2[0];
      v21 = (void **)(v27 + 1);
      v22 = (char *)Block_2[0];
      if ( v27 + 1 >= 0x1000 )
      {
        sub_4044E0(&v22, &v21);
        v17 = v22;
      }
      sub_40A6BA(v17);
    }
    return v9;
  }
  else
  {
    if ( std::_Fgetc<char>(&Block, *(FILE **)(this + 76)) == 0 )
      return -1;
    return Block;
  }
}

