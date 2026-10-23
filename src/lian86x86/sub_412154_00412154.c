// lian86.exe @ 0x00412154  size=726  name=sub_412154
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_412154(char *a1, signed int Size, int *a3, char *Src)
{
  char *v4; // edx
  signed int v5; // ecx
  char *v6; // ebp
  int *v7; // esi
  int v8; // edi
  wchar_t *v9; // eax
  LPVOID *v10; // ebx
  int v11; // ebx
  size_t *v12; // esi
  size_t v13; // eax
  int v14; // ecx
  int v15; // esi
  char *v16; // eax
  char *v17; // ebp
  int v18; // ebx
  size_t v19; // ebx
  size_t *v20; // esi
  int v21; // ecx
  int v22; // ebx
  char *v23; // eax
  int v24; // eax
  _DWORD *v25; // ebx
  char *v26; // eax
  int v27; // ecx
  _DWORD *v28; // ebx
  char *v29; // eax
  int v30; // ecx
  int *v31; // esi
  int v32; // ebx
  char *v33; // eax
  int v34; // eax
  int v35; // [esp+Ch] [ebp-30h]
  size_t v36; // [esp+20h] [ebp-1Ch]
  signed int v37; // [esp+24h] [ebp-18h]
  int v38; // [esp+30h] [ebp-Ch]
  int v39; // [esp+38h] [ebp-4h]
  int v40; // [esp+38h] [ebp-4h]
  int v41; // [esp+48h] [ebp+Ch]
  int v42; // [esp+48h] [ebp+Ch]
  char *v43; // [esp+48h] [ebp+Ch]
  char *v44; // [esp+48h] [ebp+Ch]
  int v45; // [esp+48h] [ebp+Ch]

  v4 = a1;
  v5 = 0;
  v6 = Src;
  v37 = 0;
  if ( Src != a1 )
  {
    v7 = a3;
    if ( a3 != nullptr )
    {
      v8 = *a3;
      if ( *a3 != -1 )
      {
        while ( 1 )
        {
          ++v7;
          if ( v8 == -7 )
          {
            v8 = *v7;
            v31 = v7 + 1;
            v32 = *(_DWORD *)&v6[v8];
            v40 = *v31;
            v33 = &v4[v8];
            v7 = &v31[*v31 + 4];
            v45 = (int)&v4[v8];
            if ( *(_DWORD *)&v4[v8] != 0 )
            {
              dword_4186D4(*(_DWORD *)v33);
              v33 = (char *)v45;
            }
            if ( v32 != 0 )
            {
              v34 = dword_4186BC(
                      *(_DWORD *)(v32 - 20),
                      *(_DWORD *)(v32 - 8),
                      *(_DWORD *)(v32 - 4),
                      *(_DWORD *)(v32 - 16),
                      v33);
              *(_DWORD *)(v34 - 24) = *(_DWORD *)(v32 - 24);
              dword_4186C8(v32, v34, 0);
            }
            v19 = 4 * v40 + 4;
            goto LABEL_40;
          }
          if ( v8 == -6 )
          {
            v8 = *v7;
            v7 += 5;
            v28 = *(_DWORD **)&v6[v8];
            v29 = &v4[v8];
            v30 = *(_DWORD *)&v4[v8];
            v44 = &v4[v8];
            if ( v30 != 0 )
            {
              dword_4186DC(v30);
              v29 = v44;
            }
            if ( v28 != nullptr )
            {
              dword_4186C4(v28[7], v28[8], v28[4], v29, v28[9]);
              dword_4186D0(*(_DWORD *)&v6[v8], *(_DWORD *)v44, 0);
            }
            goto LABEL_24;
          }
          if ( v8 == -5 )
            break;
          if ( v8 == -4 )
          {
            v8 = *v7;
            v7 += 5;
            v22 = *(_DWORD *)&v6[v8];
            v23 = &v4[v8];
            v42 = (int)&v4[v8];
            if ( *(_DWORD *)&v4[v8] != 0 )
            {
              dword_4186D4(*(_DWORD *)v23);
              v23 = (char *)v42;
            }
            if ( v22 != 0 )
            {
              v24 = dword_4186BC(
                      *(_DWORD *)(v22 - 20),
                      *(_DWORD *)(v22 - 8),
                      *(_DWORD *)(v22 - 4),
                      *(_DWORD *)(v22 - 16),
                      v23);
              dword_4186C8(v22, v24, 0);
            }
            goto LABEL_24;
          }
          if ( v8 != -3 )
          {
            if ( v8 == -2 )
            {
              v11 = *v7;
              v12 = (size_t *)(v7 + 1);
              v39 = v11;
              v8 = *v12++;
              v13 = *v12;
              v14 = v12[1];
              v7 = (int *)(v12 + 2);
              v36 = v13;
              v38 = v14;
              v41 = (int)v7;
              if ( v11 > 0 )
              {
                v15 = v11;
                v16 = v6;
                v17 = &v4[v8];
                v18 = v16 - v4;
                do
                {
                  sub_412154(v17, v36, v14, &v17[v18]);
                  v14 = v38;
                  v17 += v36;
                  --v15;
                }
                while ( v15 != 0 );
                v7 = (int *)v41;
                v11 = v39;
                v6 = Src;
                v13 = v36;
              }
              v19 = v13 * v11;
              goto LABEL_40;
            }
            v9 = *(wchar_t **)&v6[v8];
            v10 = (LPVOID *)&v4[v8];
            if ( *(_DWORD *)&v4[v8] != 0 )
            {
              sub_40E5F0(*v10);
              *v10 = nullptr;
            }
            if ( v9 != nullptr )
              sub_40E780(v10, v9);
LABEL_24:
            v35 = 4;
LABEL_25:
            v19 = v35;
            goto LABEL_40;
          }
          v8 = *v7;
          v20 = (size_t *)(v7 + 1);
          v19 = *v20++;
          v21 = *v20;
          v7 = (int *)(v20 + 1);
          sub_412154(&v4[v8], v19, v21, &v6[v8]);
LABEL_40:
          if ( v37 < v8 )
            memcpy(&a1[v37], &v6[v37], v8 - v37);
          v4 = a1;
          v5 = v19 + v8;
          v8 = *v7;
          v37 = v5;
          if ( *v7 == -1 )
            goto LABEL_43;
        }
        v8 = *v7;
        v7 += 4;
        v25 = *(_DWORD **)&v6[v8];
        v26 = &v4[v8];
        v27 = *(_DWORD *)&v4[v8];
        v43 = &v4[v8];
        if ( v27 != 0 )
        {
          dword_4186D8(v27);
          v26 = v43;
        }
        if ( v25 != nullptr )
        {
          dword_4186C0(v25[10] - 8, v26, v25[6], v25[11]);
          dword_4186CC(*(_DWORD *)&v6[v8], *(_DWORD *)v43, 0);
        }
        v35 = 8;
        goto LABEL_25;
      }
LABEL_43:
      if ( v5 < Size )
        memcpy(&v4[v5], &v6[v5], Size - v5);
    }
    else
    {
      memcpy(a1, Src, Size);
    }
  }
}

