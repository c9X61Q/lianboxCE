// gettime.exe @ 0x4100a9 size=863

char __thiscall sub_4100A9(int this)
{
  int v2; // ebx
  int v3; // eax
  int v4; // eax
  int v5; // eax
  int v6; // eax
  char v7; // al
  int v8; // eax
  int v9; // eax
  int v10; // eax
  int v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // eax
  int v16; // eax
  int v17; // eax
  int v19; // eax
  int v20; // ecx
  char v21; // dl
  char v22; // ah
  char v23; // al
  char v24; // al
  int v25; // edx
  int v26; // ebx
  int i; // ecx
  int v28; // edi
  int v29; // ebx
  int *v30; // edi
  int *v31; // edx
  int v32; // eax
  int v33; // eax
  unsigned __int16 *v34; // ecx
  int v35; // eax
  int v36; // ecx
  _DWORD *v37; // edx
  int v38; // ecx
  int v39; // [esp-4h] [ebp-30h]
  unsigned __int16 *v40; // [esp+Ch] [ebp-20h]
  int v41; // [esp+10h] [ebp-1Ch]
  int v42; // [esp+14h] [ebp-18h]
  int v43; // [esp+18h] [ebp-14h] BYREF
  int Src; // [esp+1Ch] [ebp-10h] BYREF
  _BYTE v45[8]; // [esp+20h] [ebp-Ch] BYREF

  v2 = 0;
  v3 = *(char *)(this + 45);
  if ( v3 <= 100 )
  {
    if ( v3 != 100 )
    {
      if ( v3 <= 83 )
      {
        if ( v3 != 83 )
        {
          v4 = v3 - 65;
          if ( v4 != 0 )
          {
            v5 = v4 - 2;
            if ( v5 != 0 )
            {
              v6 = v5 - 2;
              if ( v6 != 0 && (unsigned int)(v6 - 1) > 1 )
                return 0;
              goto LABEL_9;
            }
            goto LABEL_14;
          }
LABEL_9:
          v7 = unknown_libname_74();
          goto LABEL_35;
        }
        goto LABEL_33;
      }
      v8 = v3 - 88;
      if ( v8 == 0 )
      {
        v7 = sub_40F5B9(this, 1);
        goto LABEL_35;
      }
      v9 = v8 - 2;
      if ( v9 == 0 )
      {
        v7 = unknown_libname_73();
        goto LABEL_35;
      }
      v10 = v9 - 7;
      if ( v10 == 0 )
        goto LABEL_9;
      if ( v10 == 2 )
      {
LABEL_14:
        v7 = unknown_libname_75(0);
        goto LABEL_35;
      }
      return 0;
    }
    goto LABEL_25;
  }
  if ( v3 <= 111 )
  {
    if ( v3 == 111 )
    {
      v7 = sub_41076A();
      goto LABEL_35;
    }
    v11 = v3 - 101;
    if ( v11 == 0 )
      goto LABEL_9;
    v12 = v11 - 1;
    if ( v12 == 0 )
      goto LABEL_9;
    v13 = v12 - 1;
    if ( v13 == 0 )
      goto LABEL_9;
    v14 = v13 - 2;
    if ( v14 != 0 )
    {
      if ( v14 == 5 )
      {
        v7 = unknown_libname_76();
        goto LABEL_35;
      }
      return 0;
    }
LABEL_25:
    *(_DWORD *)(this + 28) |= 0x10u;
    goto LABEL_26;
  }
  v15 = v3 - 112;
  if ( v15 != 0 )
  {
    v16 = v15 - 3;
    if ( v16 == 0 )
    {
LABEL_33:
      v7 = unknown_libname_77();
      goto LABEL_35;
    }
    v17 = v16 - 2;
    if ( v17 != 0 )
    {
      if ( v17 == 3 )
      {
        v7 = sub_40F5B9(this, 0);
        goto LABEL_35;
      }
      return 0;
    }
LABEL_26:
    v7 = sub_40F42C(this, 0);
    goto LABEL_35;
  }
  v7 = sub_410787();
LABEL_35:
  if ( v7 == 0 )
    return 0;
  if ( *(_BYTE *)(this + 44) == 0 )
  {
    v19 = *(_DWORD *)(this + 28) >> 4;
    LOWORD(Src) = 0;
    v20 = 0;
    BYTE2(Src) = 0;
    v43 = 0;
    if ( (v19 & 1) != 0 )
    {
      if ( (*(_DWORD *)(this + 28) & 0x40) != 0 )
      {
        LOBYTE(Src) = 45;
      }
      else
      {
        if ( (*(_BYTE *)(this + 28) & 1) == 0 )
        {
          if ( (*(_DWORD *)(this + 28) & 2) != 0 )
          {
            LOBYTE(Src) = 32;
            v20 = 1;
            v43 = 1;
          }
          goto LABEL_46;
        }
        LOBYTE(Src) = 43;
      }
      v20 = 1;
      v43 = 1;
    }
LABEL_46:
    v21 = *(_BYTE *)(this + 45);
    if ( v21 != 120 && v21 != 88 || (v22 = 1, (*(_DWORD *)(this + 28) & 0x20) == 0) )
      v22 = 0;
    if ( v21 == 97 || (v23 = 0, v21 == 65) )
      v23 = 1;
    if ( v22 != 0 || v23 != 0 )
    {
      v45[v20 - 4] = 48;
      if ( v21 == 88 || v21 == 65 )
        v24 = 88;
      else
        v24 = 120;
      v45[v20 - 3] = v24;
      v20 += 2;
      v43 = v20;
    }
    v25 = *(_DWORD *)(this + 32) - v20 - *(_DWORD *)(this + 52);
    v41 = v25;
    if ( (*(_BYTE *)(this + 28) & 0xC) == 0 && v25 > 0 )
    {
      v26 = *(_DWORD *)(this + 20);
      for ( i = 0; i < v25; ++i )
      {
        v28 = *(_DWORD *)(this + 1096);
        if ( *(_DWORD *)(v28 + 8) == *(_DWORD *)(v28 + 4) )
        {
          if ( *(_BYTE *)(v28 + 12) != 0 )
            v29 = v26 + 1;
          else
            v29 = -1;
          *(_DWORD *)(this + 20) = v29;
        }
        else
        {
          *(_DWORD *)(this + 20) = v26 + 1;
          ++*(_DWORD *)(v28 + 8);
          *(_BYTE *)(**(_DWORD **)(this + 1096))++ = 32;
        }
        v26 = *(_DWORD *)(this + 20);
        if ( v26 == -1 )
          break;
      }
      v20 = v43;
      v2 = 0;
    }
    v30 = (int *)(this + 20);
    v42 = this + 1096;
    unknown_libname_80(&Src, v20, this + 20, *(_DWORD *)(this + 8));
    v31 = (int *)(this + 1096);
    if ( (*(_DWORD *)(this + 28) & 8) != 0 && (*(_DWORD *)(this + 28) & 4) == 0 )
    {
      Src = 0;
      if ( v41 > 0 )
      {
        do
        {
          v43 = *v31;
          v32 = v43;
          if ( *(_DWORD *)(v43 + 8) == *(_DWORD *)(v43 + 4) )
          {
            if ( *(_BYTE *)(v43 + 12) != 0 )
              v33 = *v30 + 1;
            else
              v33 = -1;
            *v30 = v33;
          }
          else
          {
            ++*v30;
            ++*(_DWORD *)(v32 + 8);
            *(_BYTE *)(*(_DWORD *)*v31)++ = 48;
          }
          if ( *v30 == -1 )
            break;
          ++Src;
        }
        while ( Src < v41 );
        v2 = 0;
      }
    }
    if ( *(_BYTE *)(this + 56) != 0 && *(int *)(this + 52) > 0 )
    {
      v34 = *(unsigned __int16 **)(this + 48);
      Src = 0;
      while ( 1 )
      {
        v39 = *(_DWORD *)(this + 8);
        v35 = *v34;
        v43 = 0;
        v40 = v34 + 1;
        if ( _wctomb_internal(&v43, v45, 6, v35, v39) != 0 || v43 == 0 )
          break;
        unknown_libname_80(v45, v43, this + 20, *(_DWORD *)(this + 8));
        v34 = v40;
        if ( ++Src == *(_DWORD *)(this + 52) )
          goto LABEL_93;
      }
      *v30 = -1;
    }
    else
    {
      unknown_libname_80(*(void **)(this + 48), *(_DWORD *)(this + 52), this + 20, *(_DWORD *)(this + 8));
    }
LABEL_93:
    v36 = *v30;
    if ( *v30 >= 0 && (*(_DWORD *)(this + 28) & 4) != 0 && v41 > 0 )
    {
      do
      {
        v37 = *(_DWORD **)v42;
        if ( *(_DWORD *)(*(_DWORD *)v42 + 8) == *(_DWORD *)(*(_DWORD *)v42 + 4) )
        {
          if ( *((_BYTE *)v37 + 12) != 0 )
            v38 = v36 + 1;
          else
            v38 = -1;
          *v30 = v38;
        }
        else
        {
          *v30 = v36 + 1;
          ++v37[2];
          *(_BYTE *)(**(_DWORD **)v42)++ = 32;
        }
        v36 = *v30;
        if ( *v30 == -1 )
          break;
        ++v2;
      }
      while ( v2 < v41 );
    }
  }
  return 1;
}

