// busybox.exe @ 0x45ad34 size=982

char __usercall sub_45AD34@<al>(int a1@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  _DWORD *i; // ebx
  int v4; // eax
  _DWORD *v5; // ebp
  char *v6; // esi
  char *v7; // edx
  int v8; // ecx
  char *v9; // edi
  char *v10; // edi
  char v11; // al
  unsigned __int8 *v12; // eax
  int v13; // edx
  int v14; // eax
  char *v15; // eax
  char *v16; // eax
  const char *v17; // eax
  char *v18; // eax
  int v19; // esi
  int v20; // eax
  _BYTE *v21; // eax
  _BYTE *v22; // edi
  char *v23; // esi
  _DWORD *j; // eax
  int v25; // eax
  int **k; // ecx
  int *v27; // ebx
  int v28; // edx
  int *v29; // esi
  int v30; // esi
  _BYTE *v31; // ecx
  _BYTE *v32; // edx
  unsigned __int8 v33; // al
  char *Str; // [esp+8h] [ebp-30h]
  char v36; // [esp+Ch] [ebp-2Ch]
  char *v37; // [esp+Ch] [ebp-2Ch]
  unsigned __int8 v38; // [esp+10h] [ebp-28h]
  int v39; // [esp+10h] [ebp-28h]
  int v40; // [esp+14h] [ebp-24h]
  int v42; // [esp+1Ch] [ebp-1Ch]
  char *String; // [esp+24h] [ebp-14h]

  for ( i = *(_DWORD **)(a2 + 4); i != nullptr; i = (_DWORD *)*i )
  {
    Str = (char *)i[5];
    v42 = 0;
    while ( 1 )
    {
      if ( *Str == 0 )
        goto LABEL_73;
      v4 = sub_4728CC(a3);
      v5 = (_DWORD *)v4;
      if ( i[1] == 0 )
        i[1] = v4;
      v6 = strchr(Str, 37);
      if ( v6 == nullptr )
        break;
      v40 = i[4];
      if ( v40 != 0 )
      {
        do
          v7 = strchr(".#-+ 0123456789", (unsigned __int8)*++v6);
        while ( v7 != nullptr );
      }
      else
      {
        do
        {
          v9 = v6++;
          v36 = *v6;
          v7 = strchr("#-+ 0123456789", (unsigned __int8)*v6);
        }
        while ( v7 != nullptr );
        LOBYTE(v8) = v36;
        if ( v36 == 46 )
        {
          v10 = v9 + 2;
          v11 = v6[1];
          v6 = v10;
          if ( (unsigned __int8)(v11 - 48) <= 9u )
          {
            do
              ++v6;
            while ( (unsigned __int8)(*v6 - 48) <= 9u );
            v7 = v10;
          }
        }
      }
      v37 = v6 + 1;
      v38 = *v6;
      if ( *v6 == 99 )
      {
        v5[1] = 8;
        goto LABEL_19;
      }
      if ( v38 == 108 )
      {
        v15 = v6 + 2;
        ++v6;
        v37 = v15;
LABEL_27:
        v16 = strchr("diouxX", (unsigned __int8)*v6);
        if ( v16 == nullptr )
          goto LABEL_58;
        if ( (unsigned int)v16 > 0x480155 )
          v5[1] = 512;
        else
          v5[1] = 32;
        v12 = (unsigned __int8 *)&unk_47BFA2;
        goto LABEL_20;
      }
      String = v7;
      if ( strchr("diouxX", v38) != nullptr )
        goto LABEL_27;
      if ( strchr("eEfgG", v38) != nullptr )
      {
        v5[1] = 16;
        v12 = (unsigned __int8 *)&unk_47BFA6;
        goto LABEL_20;
      }
      if ( v38 != 115 )
      {
        if ( v38 != 95 )
          goto LABEL_58;
        v18 = v6 + 2;
        v37 = v6 + 2;
        LOBYTE(v18) = v6[1];
        if ( (_BYTE)v18 == 117 )
        {
          v5[1] = 256;
        }
        else
        {
          if ( (unsigned __int8)v18 > 0x75u )
            goto LABEL_58;
          if ( (_BYTE)v18 == 112 )
          {
            v5[1] = 64;
            *v6 = 99;
          }
          else
          {
            if ( (unsigned __int8)v18 > 0x70u )
              goto LABEL_58;
            if ( (_BYTE)v18 != 99 )
            {
              if ( (unsigned __int8)v18 > 0x63u )
                goto LABEL_58;
              if ( (_BYTE)v18 == 65 )
              {
                v18 = (char *)a1;
                *(_DWORD *)(a1 + 28) = i;
                i[2] |= 1u;
              }
              else if ( (_BYTE)v18 != 97 )
              {
                goto LABEL_58;
              }
              v5[1] = 1;
              LOBYTE(v18) = v6[2];
              if ( (unsigned __int8)((_BYTE)v18 - 100) > 0x14u
                || (v8 = 1050625, !_bittest(&v8, (unsigned int)(v18 - 100))) )
              {
LABEL_58:
                sub_41784C("bad conversion character %%%s", v6);
              }
              v37 = v6 + 3;
              *v6 = (char)v18;
              goto LABEL_59;
            }
            v5[1] = 4;
          }
        }
LABEL_19:
        v12 = (unsigned __int8 *)&unk_47BFA0;
LABEL_20:
        v13 = i[4];
        if ( v13 != 0 )
        {
          while ( 1 )
          {
            v8 = *v12;
            if ( v13 == v8 )
              break;
            if ( *++v12 == 0 )
              sub_41784C("bad byte count for conversion character %s", v6);
          }
        }
        v14 = *v12;
        goto LABEL_40;
      }
      v5[1] = 128;
      v5[2] = v40;
      if ( v40 == 0 )
      {
        if ( String == nullptr )
        {
          v17 = "%%s needs precision or byte count";
          goto LABEL_71;
        }
        v14 = atoi(String);
LABEL_40:
        v5[2] = v14;
      }
LABEL_59:
      v39 = v6 - Str;
      v19 = v6 - Str + 1;
      v5[4] = sub_4718A8(v8, v19);
      for ( Str = v37; *Str != 0 && *Str != 37; ++Str )
        ;
      a3 = Str;
      if ( v37 != Str )
      {
        v20 = sub_471600(Str, v39 + Str - v37 + 2);
        v5[4] = v20;
        v21 = (_BYTE *)(v19 + v20);
        v22 = v21;
        v23 = v37;
        do
          *v22++ = *v23++;
        while ( Str != v23 );
        v21[Str - v37] = 0;
      }
      v5[3] = v5[4] + v39;
      if ( (v5[1] & 1) == 0 && i[4] != 0 )
      {
        if ( v42 != 0 )
        {
          v17 = "byte count with multiple conversion characters";
LABEL_71:
          sub_418210(v17);
        }
        v42 = 1;
      }
    }
    v5[4] = Str;
    v5[1] = 1024;
LABEL_73:
    if ( i[4] == 0 )
    {
      for ( j = (_DWORD *)i[1]; j != nullptr; j = (_DWORD *)*j )
        i[4] += j[2];
    }
  }
  LOBYTE(v25) = a2;
  for ( k = *(int ***)(a2 + 4); k != nullptr; k = (int **)v27 )
  {
    v27 = *k;
    if ( *k == nullptr )
    {
      v28 = *(_DWORD *)(a2 + 8);
      v25 = *(_DWORD *)(a1 + 56);
      if ( v28 < v25 && ((_BYTE)k[2] & 2) == 0 )
      {
        v29 = k[4];
        if ( v29 != nullptr )
        {
          v25 = (v25 - v28) / (int)v29;
          k[3] = (int *)((char *)k[3] + v25);
        }
      }
    }
    if ( (int)k[3] > 1 )
    {
      v25 = (int)k[1];
      if ( v25 != 0 )
      {
        do
        {
          v30 = v25;
          v25 = *(_DWORD *)v25;
        }
        while ( v25 != 0 );
        v31 = *(_BYTE **)(v30 + 16);
        v32 = nullptr;
        while ( 1 )
        {
          LOBYTE(v25) = *v31;
          if ( *v31 == 0 )
            break;
          v33 = v25 - 9;
          if ( v33 <= 4u || (v32 = nullptr, v33 == 23) )
            v32 = v31;
          ++v31;
        }
        if ( v32 != nullptr )
          *(_DWORD *)(v30 + 20) = v32;
      }
    }
  }
  return v25;
}

