// busybox.exe @ 0x4170c0 size=1630

int __usercall sub_4170C0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _DWORD *v5; // esi
  signed int v6; // edx
  int v7; // eax
  _DWORD *i; // esi
  signed int v9; // edi
  int v10; // eax
  signed int v11; // esi
  __int64 v12; // rax
  FILE *Stream; // eax
  signed int v14; // ecx
  size_t v15; // edx
  size_t v16; // eax
  FILE *v17; // eax
  char *v18; // edi
  int v19; // edx
  char v20; // dl
  float *v21; // edi
  int **v22; // esi
  unsigned __int8 *v23; // edx
  char v24; // al
  int v25; // eax
  char *v26; // eax
  int *v27; // eax
  unsigned __int8 v28; // al
  char *v29; // eax
  unsigned int v30; // eax
  int v31; // eax
  int v32; // edx
  _BYTE *v33; // eax
  int *v34; // eax
  int *v35; // eax
  int v36; // eax
  unsigned __int8 v37; // dl
  int v38; // eax
  int *v39; // eax
  int *v40; // ecx
  __int64 v41; // rax
  int v42; // eax
  int v44; // edx
  int **m; // esi
  int *v46; // eax
  unsigned __int8 *v47; // [esp+10h] [ebp-3Ch]
  int v48; // [esp+14h] [ebp-38h]
  int j; // [esp+18h] [ebp-34h]
  char v50; // [esp+1Fh] [ebp-2Dh]
  int v51; // [esp+20h] [ebp-2Ch]
  unsigned __int8 *k; // [esp+24h] [ebp-28h]
  void *Buf1; // [esp+28h] [ebp-24h]
  int v54; // [esp+2Ch] [ebp-20h]
  char v55; // [esp+30h] [ebp-1Ch]
  _DWORD *v56; // [esp+30h] [ebp-1Ch]
  signed int ElementCountc; // [esp+38h] [ebp-14h]
  signed int ElementCount; // [esp+38h] [ebp-14h]
  char ElementCounta; // [esp+38h] [ebp-14h]
  size_t ElementCountb; // [esp+38h] [ebp-14h]
  _BYTE v61[16]; // [esp+3Ch] [ebp-10h] BYREF

  v5 = *(_DWORD **)(a1 + 16);
  v6 = 0;
  while ( v5 != nullptr )
  {
    ElementCountc = v6;
    v7 = sub_417720();
    v5[2] = v7;
    v6 = ElementCountc;
    if ( ElementCountc < v7 )
      v6 = v7;
    v5 = (_DWORD *)*v5;
  }
  *(_DWORD *)(a1 + 56) = v6;
  for ( i = *(_DWORD **)(a1 + 16); i != nullptr; i = (_DWORD *)*i )
    sub_45AD34(a3, i);
  *(_DWORD *)(a1 + 24) = a2;
  v50 = 0;
LABEL_10:
  v9 = *(_DWORD *)(a1 + 56);
  v10 = *(_DWORD *)(a1 + 64);
  if ( v10 != 0 )
  {
    *(_DWORD *)(a1 + 64) = *(_DWORD *)(a1 + 68);
    *(_DWORD *)(a1 + 68) = v10;
    v12 = *(_QWORD *)(a1 + 32) + v9;
    *(_QWORD *)(a1 + 32) = v12;
    *(_QWORD *)(a1 + 48) = v12;
  }
  else
  {
    *(_DWORD *)(a1 + 48) = 0;
    *(_DWORD *)(a1 + 52) = 0;
    *(_DWORD *)(a1 + 64) = sub_470E78();
    *(_DWORD *)(a1 + 68) = sub_4728CC();
  }
  ElementCount = v9;
  v11 = 0;
  while ( *(_DWORD *)(a1 + 8) != 0 && (*(_BYTE *)(a1 + 62) == 0 || sub_4464CC() != 0) )
  {
    Stream = off_4730E8(0);
    v14 = *(_DWORD *)(a1 + 8);
    v15 = ElementCount;
    if ( v14 != -1 )
    {
      v15 = *(_DWORD *)(a1 + 8);
      if ( v14 > ElementCount )
        v15 = ElementCount;
    }
    v16 = fread((void *)(v11 + *(_DWORD *)(a1 + 64)), 1u, v15, Stream);
    if ( v16 != 0 )
    {
      *(_BYTE *)(a1 + 62) = 0;
      v19 = *(_DWORD *)(a1 + 8);
      if ( v19 != -1 )
        *(_DWORD *)(a1 + 8) = v19 - v16;
      ElementCount -= v16;
      if ( ElementCount != 0 )
      {
        v11 += v16;
      }
      else
      {
        v20 = *(_BYTE *)(a1 + 12);
        Buf1 = *(void **)(a1 + 64);
        if ( v20 == 0 )
          goto LABEL_138;
        ElementCounta = *(_BYTE *)(a1 + 12);
        if ( v20 == 2 )
          goto LABEL_133;
        v11 = memcmp(Buf1, *(const void **)(a1 + 68), v9);
        if ( v11 != 0 )
        {
          if ( (unsigned __int8)(ElementCounta - 1) <= 1u )
          {
LABEL_133:
            *(_BYTE *)(a1 + 12) = 3;
LABEL_138:
            if ( Buf1 == nullptr )
              goto LABEL_139;
          }
          v56 = *(_DWORD **)(a1 + 16);
          v48 = *(_DWORD *)(a1 + 48);
          for ( j = *(_DWORD *)(a1 + 52); ; *(_DWORD *)(a1 + 52) = j )
          {
            if ( v56 == nullptr )
              goto LABEL_10;
            ElementCountb = v56[1];
            v21 = (float *)Buf1;
LABEL_42:
            if ( ElementCountb != 0 && (*(_BYTE *)(ElementCountb + 8) & 1) == 0 )
              break;
            v56 = (_DWORD *)*v56;
            *(_DWORD *)(a1 + 48) = v48;
          }
          v54 = *(_DWORD *)(ElementCountb + 12);
          while ( 2 )
          {
            if ( v54 == 0 )
            {
              ElementCountb = *(_DWORD *)ElementCountb;
              goto LABEL_42;
            }
            v22 = *(int ***)(ElementCountb + 4);
LABEL_47:
            if ( v22 == nullptr )
            {
              --v54;
              continue;
            }
            break;
          }
          if ( *(_QWORD *)(a1 + 40) != 0 && *(_QWORD *)(a1 + 48) >= *(_QWORD *)(a1 + 40) )
          {
            v51 = (unsigned int)v22[1] & 0x402;
            if ( v51 == 0 )
            {
              v22[1] = (int *)2;
              *(_BYTE *)v22[3] = 115;
              v23 = (unsigned __int8 *)v22[4];
              do
                v24 = *v23++;
              while ( v24 != 37 );
              for ( k = v23; ; ++k )
              {
                v25 = *k;
                if ( (_BYTE)v25 == 0 )
                  break;
                v47 = v23;
                v26 = strchr(" -0+#", v25);
                v23 = v47;
                if ( v26 == nullptr )
                  break;
                v27 = v22[5];
                if ( v27 != nullptr )
                  v22[5] = (int *)((char *)v27 - 1);
              }
              do
              {
                v28 = k[v51];
                v23[v51++] = v28;
              }
              while ( v28 != 0 );
            }
          }
          if ( v54 == 1 )
          {
            v29 = (char *)v22[5];
            if ( v29 != nullptr )
            {
              v50 = *v29;
              *v29 = 0;
            }
          }
          v30 = (unsigned int)v22[1];
          if ( v30 == 1024 )
          {
            sub_46F088((const char *)v22[4]);
            goto LABEL_126;
          }
          if ( v30 > 0x400 )
            goto LABEL_126;
          if ( v30 == 512 )
          {
            v38 = (int)v22[2];
            if ( v38 != 4 )
            {
              if ( v38 > 4 )
                goto LABEL_126;
              if ( v38 != 1 )
              {
                if ( v38 == 2 )
                {
                  v31 = *(unsigned __int16 *)v21;
                  goto LABEL_125;
                }
                goto LABEL_126;
              }
              goto LABEL_122;
            }
          }
          else
          {
            if ( v30 > 0x200 )
              goto LABEL_126;
            if ( v30 == 256 )
            {
              v37 = *(_BYTE *)v21;
              v34 = v22[3];
              if ( *(_BYTE *)v21 <= 0x1Fu )
              {
                *(_BYTE *)v34 = 115;
                v31 = 4 * *(unsigned __int8 *)v21 + 4719184;
                goto LABEL_125;
              }
              if ( v37 == 127 )
              {
                *(_BYTE *)v34 = 115;
                sub_46F088((const char *)v22[4], "del");
                goto LABEL_126;
              }
              if ( v37 > 0x7Eu )
                *(_BYTE *)v34 = 120;
              else
LABEL_115:
                *(_BYTE *)v34 = 99;
              goto LABEL_122;
            }
            if ( v30 > 0x100 )
              goto LABEL_126;
            if ( v30 == 128 )
            {
              sub_46F088((const char *)v22[4], v21);
              goto LABEL_126;
            }
            if ( v30 > 0x80 )
              goto LABEL_126;
            if ( v30 == 64 )
            {
              v31 = *(unsigned __int8 *)v21;
              if ( (unsigned int)(v31 - 32) > 0x5E )
                v31 = 46;
              goto LABEL_125;
            }
            if ( v30 > 0x40 )
            {
LABEL_126:
              if ( v54 == 1 )
              {
                v39 = v22[5];
                if ( v39 != nullptr )
                  *(_BYTE *)v39 = v50;
              }
              v40 = v22[2];
              *(_QWORD *)(a1 + 48) += (int)v40;
              v21 = (float *)((int)v21 + (_DWORD)v40);
              v22 = (int **)*v22;
              goto LABEL_47;
            }
            if ( v30 != 32 )
            {
              if ( v30 > 0x20 )
                goto LABEL_126;
              if ( v30 == 16 )
              {
                v35 = v22[2];
                if ( v35 == (int *)4 )
                {
                  sub_46F088((const char *)v22[4], *v21);
                }
                else if ( v35 == (int *)8 )
                {
                  sub_46F088((const char *)v22[4], *(double *)v21);
                }
                goto LABEL_126;
              }
              if ( v30 > 0x10 )
                goto LABEL_126;
              if ( v30 != 8 )
              {
                if ( v30 <= 8 )
                {
                  if ( v30 == 4 )
                  {
                    v32 = *(unsigned __int8 *)v21;
                    v33 = &unk_47E324;
                    do
                    {
                      if ( (_BYTE)v32 == *v33 )
                      {
                        v31 = (int)(v33 + 1);
                        goto LABEL_95;
                      }
                      v33 += 4;
                    }
                    while ( *v33 != 0 );
                    if ( (unsigned int)(v32 - 32) <= 0x5E )
                    {
                      v34 = v22[3];
                      goto LABEL_115;
                    }
                    sub_4628F8(v61, "%03o", *(unsigned __int8 *)v21);
                    v31 = (int)v61;
LABEL_95:
                    *(_BYTE *)v22[3] = 115;
                    goto LABEL_125;
                  }
                  if ( v30 <= 4 )
                  {
                    if ( v30 != 1 )
                    {
                      if ( v30 == 2 )
                        sub_46F088((const char *)v22[4], &unk_47C05C);
                      goto LABEL_126;
                    }
                    v31 = *(_DWORD *)(a1 + 48);
LABEL_125:
                    sub_46F088((const char *)v22[4], v31);
                  }
                }
                goto LABEL_126;
              }
LABEL_122:
              v31 = *(unsigned __int8 *)v21;
              goto LABEL_125;
            }
            v36 = (int)v22[2];
            if ( v36 != 4 )
            {
              if ( v36 > 4 )
                goto LABEL_126;
              if ( v36 != 1 )
              {
                if ( v36 == 2 )
                {
                  v31 = *(__int16 *)v21;
                  goto LABEL_125;
                }
                goto LABEL_126;
              }
              goto LABEL_122;
            }
          }
          v31 = *(_DWORD *)v21;
          goto LABEL_125;
        }
        if ( ElementCounta == 3 )
          sub_46F108("*");
        *(_BYTE *)(a1 + 12) = 1;
        v41 = *(_QWORD *)(a1 + 32) + v9;
        *(_QWORD *)(a1 + 32) = v41;
        *(_QWORD *)(a1 + 48) = v41;
        ElementCount = v9;
      }
    }
    else
    {
      v17 = off_4730E8(0);
      if ( ferror(v17) != 0 )
        sub_418224();
      *(_BYTE *)(a1 + 62) = 1;
    }
  }
  if ( v9 != ElementCount )
  {
    v18 = *(char **)(a1 + 64);
    v55 = *(_BYTE *)(a1 + 12);
    if ( (v55 & 0xFD) == 0 || memcmp(v18, *(const void **)(a1 + 68), v11) != 0 )
    {
      memset(&v18[v11], 0, ElementCount);
      *(_QWORD *)(a1 + 40) = *(_QWORD *)(a1 + 48) + v11;
      Buf1 = *(void **)(a1 + 64);
      goto LABEL_138;
    }
    if ( v55 != 1 )
      sub_46F108("*");
  }
LABEL_139:
  v42 = *(_DWORD *)(a1 + 28);
  if ( v42 != 0 )
  {
    if ( *(_QWORD *)(a1 + 40) == 0 )
    {
      v44 = *(_DWORD *)(a1 + 52);
      if ( *(_QWORD *)(a1 + 48) == 0 )
        return *(char *)(a1 + 60);
      *(_DWORD *)(a1 + 40) = *(_DWORD *)(a1 + 48);
      *(_DWORD *)(a1 + 44) = v44;
    }
    for ( m = *(int ***)(v42 + 4); m != nullptr; m = (int **)*m )
    {
      v46 = m[1];
      if ( v46 == (int *)1 )
      {
        sub_46F088((const char *)m[4], *(_DWORD *)(a1 + 40));
      }
      else if ( v46 == (int *)1024 )
      {
        sub_46F088((const char *)m[4]);
      }
    }
  }
  return *(char *)(a1 + 60);
}

