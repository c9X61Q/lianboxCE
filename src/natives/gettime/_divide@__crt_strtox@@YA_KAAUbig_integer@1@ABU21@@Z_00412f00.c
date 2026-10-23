// gettime.exe @ 0x412f00 size=1195

int __cdecl __crt_strtox::divide(__crt_strtox *this, struct __crt_strtox::big_integer *a2)
{
  __crt_strtox *v2; // ecx
  char *v3; // eax
  unsigned int v4; // esi
  signed int v5; // eax
  unsigned int v6; // esi
  unsigned int v7; // ebx
  int v8; // esi
  int result; // eax
  unsigned int v10; // edi
  unsigned int v11; // edi
  _DWORD *v12; // eax
  unsigned int v13; // esi
  unsigned __int64 v14; // rax
  bool v15; // zf
  unsigned int *v16; // esi
  unsigned int v17; // eax
  bool v18; // cf
  signed int v19; // edx
  _DWORD *v20; // ecx
  _DWORD *v21; // esi
  unsigned int v22; // ebx
  int v23; // eax
  int v24; // ecx
  unsigned int v25; // ebx
  int v26; // ebx
  unsigned int v27; // eax
  _DWORD *v28; // ecx
  unsigned __int64 v29; // rax
  char *v30; // ebx
  char *v31; // ebx
  unsigned __int64 v32; // rax
  int v33; // ebx
  unsigned __int64 v34; // rdi
  int v35; // eax
  unsigned int v36; // ecx
  unsigned __int64 v37; // rdi
  struct __crt_strtox::big_integer *v38; // eax
  unsigned int *v39; // ebx
  char **v40; // eax
  unsigned int v41; // ecx
  _DWORD *v42; // edx
  unsigned __int64 v43; // rcx
  char *v44; // esi
  unsigned int i; // edi
  unsigned int v46; // eax
  int v47; // edi
  unsigned int v48; // ecx
  unsigned int v49; // eax
  _DWORD *v50; // edx
  _BYTE Source[460]; // [esp+10h] [ebp-21Ch] BYREF
  int v52; // [esp+1DCh] [ebp-50h]
  int v53; // [esp+1E0h] [ebp-4Ch]
  unsigned int v54; // [esp+1E4h] [ebp-48h]
  __int64 v55; // [esp+1E8h] [ebp-44h]
  char *v56; // [esp+1F0h] [ebp-3Ch]
  unsigned int v57; // [esp+1F4h] [ebp-38h]
  int v58; // [esp+1F8h] [ebp-34h]
  int v59; // [esp+1FCh] [ebp-30h]
  int v60; // [esp+200h] [ebp-2Ch]
  char *v61; // [esp+208h] [ebp-24h]
  unsigned int v62; // [esp+20Ch] [ebp-20h]
  int v63; // [esp+210h] [ebp-1Ch]
  _DWORD *v64; // [esp+214h] [ebp-18h]
  unsigned int v65; // [esp+218h] [ebp-14h]
  int v66; // [esp+21Ch] [ebp-10h]
  unsigned int v67; // [esp+220h] [ebp-Ch]
  char *v68; // [esp+224h] [ebp-8h]
  unsigned int v69; // [esp+228h] [ebp-4h]

  v2 = this;
  v3 = *(char **)this;
  v68 = v3;
  if ( v3 != nullptr )
  {
    v4 = *(_DWORD *)a2;
    v65 = v4;
    if ( v4 != 0 )
    {
      v5 = (signed int)(v3 - 1);
      v67 = v5;
      v6 = v4 - 1;
      if ( v6 == 0 )
      {
        v7 = *((_DWORD *)a2 + 1);
        if ( v7 == 1 )
        {
          v8 = *((_DWORD *)this + 1);
          *(_DWORD *)this = 0;
          memcpy_s((char *)this + 4, 0x1CCu, Source, 0);
          return v8;
        }
        else if ( v5 != 0 )
        {
          v11 = 0;
          v67 = 0;
          v69 = 0;
          v65 = 0;
          if ( v5 != -1 )
          {
            v12 = (_DWORD *)((char *)this + 4 * v5 + 4);
            v64 = v12;
            do
            {
              v13 = *v12;
              v14 = __PAIR64__(v11, *v12) / v7;
              v69 = v67;
              v67 = v14;
              v65 = 0;
              v11 = __PAIR64__(v11, v13) % v7;
              v12 = v64 - 1;
              v15 = v68-- == (char *)1;
              --v64;
            }
            while ( !v15 );
            v2 = this;
          }
          v16 = (unsigned int *)((char *)v2 + 4);
          *(_DWORD *)v2 = 0;
          memcpy_s((char *)v2 + 4, 0x1CCu, Source, 0);
          v17 = v65;
          v18 = v65 != 0;
          *v16 = v11;
          *((_DWORD *)this + 2) = v17;
          result = v67;
          *(_DWORD *)this = v18 + 1;
        }
        else
        {
          v10 = *((_DWORD *)this + 1);
          *(_DWORD *)this = 0;
          memcpy_s((char *)this + 4, 0x1CCu, Source, 0);
          *((_DWORD *)this + 1) = v10 % v7;
          *(_DWORD *)this = v10 % v7 != 0;
          return v10 / v7;
        }
        return result;
      }
      if ( v6 <= v5 )
      {
        v19 = v5 - v6;
        if ( v5 < (int)(v5 - v6) )
          goto LABEL_20;
        v20 = (_DWORD *)((char *)this + 4 * v5 + 4);
        v21 = (_DWORD *)((char *)a2 + 4 * v6 + 4);
        while ( *v21 == *v20 )
        {
          --v5;
          --v21;
          --v20;
          if ( v5 < v19 )
            goto LABEL_20;
        }
        if ( *v21 < *v20 )
LABEL_20:
          ++v19;
        if ( v19 != 0 )
        {
          v22 = *((_DWORD *)a2 + v65);
          v62 = *((_DWORD *)a2 + v65 - 1);
          v15 = !_BitScanReverse((unsigned int *)&v23, v22);
          v59 = v22;
          if ( v15 )
            v24 = 32;
          else
            v24 = 31 - v23;
          v63 = v24;
          v60 = 32 - v24;
          if ( v24 != 0 )
          {
            v59 = (v62 >> v60) | (v22 << v63);
            v25 = v62 << v63;
            v62 <<= v63;
            if ( v65 > 2 )
              v62 = (*((_DWORD *)a2 + v65 - 2) >> v60) | v25;
          }
          v26 = v19 - 1;
          v53 = 0;
          v52 = v19 - 1;
          if ( v19 - 1 < 0 )
          {
            v47 = 0;
          }
          else
          {
            v27 = v26 + v65;
            v57 = v26 + v65;
            v56 = (char *)this + 4 * v26 + 4;
            v28 = (_DWORD *)((char *)this + 4 * v26 + 4 * v65 - 4);
            v64 = v28;
            do
            {
              if ( v27 > v67 )
                HIDWORD(v29) = 0;
              else
                HIDWORD(v29) = v28[2];
              LODWORD(v29) = v28[1];
              v30 = (char *)*v28;
              v54 = HIDWORD(v29);
              v61 = (char *)HIDWORD(v29);
              v69 = v29;
              v68 = v30;
              if ( v63 != 0 )
              {
                v29 <<= v63;
                LODWORD(v29) = ((unsigned int)v30 >> v60) | v29;
                v31 = (char *)((_DWORD)v30 << v63);
                v61 = (char *)HIDWORD(v29);
                v69 = v29;
                v68 = v31;
                if ( v57 >= 3 )
                {
                  LODWORD(v29) = v69;
                  v68 = (char *)((*(v64 - 1) >> v60) | (unsigned int)v31);
                }
              }
              v32 = v29 / (unsigned int)v59;
              v66 = HIDWORD(v32);
              v33 = v32;
              v58 = v32;
              v55 = v32;
              v34 = __PAIR64__((unsigned int)v61, v69) % (unsigned int)v59;
              v35 = HIDWORD(v32);
              v69 = 0;
              if ( HIDWORD(v32) != 0 )
              {
                v34 += (__PAIR64__(v66, v33) - 0xFFFFFFFF) * (unsigned int)v59;
                v33 = -1;
                v35 = 0;
                v69 = HIDWORD(v34);
                v58 = -1;
                v55 = 0xFFFFFFFFLL;
                v66 = 0;
              }
              if ( HIDWORD(v34) == 0 )
              {
                while ( 1 )
                {
                  v61 = v68;
                  if ( v62 * __PAIR64__(v35, v33) <= __PAIR64__(v34, (unsigned int)v68) )
                    break;
                  v18 = v33-- != 0;
                  LODWORD(v55) = v33;
                  v35 = v18 + v66 - 1;
                  v66 = v35;
                  v15 = __CFADD__(v59, (_DWORD)v34) + v69 == 0;
                  v69 = (__PAIR64__(v69, v59) + (unsigned int)v34) >> 32;
                  LODWORD(v34) = v59 + v34;
                  HIDWORD(v55) = v35;
                  if ( !v15 )
                    goto LABEL_43;
                }
                v35 = v66;
LABEL_43:
                v58 = v33;
              }
              if ( v35 != 0 || v33 != 0 )
              {
                v36 = v65;
                v37 = 0;
                v38 = a2;
                if ( v65 != 0 )
                {
                  v39 = (unsigned int *)v56;
                  v40 = (char **)((char *)a2 + 4);
                  v68 = (char *)a2 + 4;
                  v69 = v65;
                  do
                  {
                    v61 = *v40;
                    v41 = v55 * (_DWORD)v61 + v37;
                    LODWORD(v37) = (v55 * (unsigned int)v61 + v37) >> 32;
                    HIDWORD(v37) = 0;
                    if ( *v39 < v41 )
                      ++v37;
                    *v39++ -= v41;
                    v40 = (char **)(v68 + 4);
                    v15 = v69-- == 1;
                    v68 += 4;
                  }
                  while ( !v15 );
                  v38 = a2;
                  v33 = v58;
                  v36 = v65;
                }
                v61 = (char *)v38 + 4;
                if ( v54 < v37 )
                {
                  if ( v36 != 0 )
                  {
                    v42 = v56;
                    HIDWORD(v43) = 0;
                    v44 = v61;
                    for ( i = v36; i != 0; --i )
                    {
                      LODWORD(v43) = *v42;
                      v44 += 4;
                      ++v42;
                      v46 = (*((unsigned int *)v44 - 1) + (unsigned __int64)(unsigned int)v43) >> 32;
                      LODWORD(v43) = *((_DWORD *)v44 - 1) + v43;
                      *(v42 - 1) = HIDWORD(v43) + v43;
                      v43 = __PAIR64__(v46, HIDWORD(v43)) + (unsigned int)v43;
                    }
                    v33 = v58;
                  }
                  --v33;
                }
                v67 = v57 - 1;
              }
              v47 = v33;
              v56 -= 4;
              v27 = v57 - 1;
              v53 = v33;
              v28 = v64 - 1;
              --v52;
              --v57;
              --v64;
            }
            while ( v52 >= 0 );
          }
          v48 = v67 + 1;
          v49 = v67 + 1;
          if ( v67 + 1 < *(_DWORD *)this )
          {
            v50 = (_DWORD *)((char *)this + 4 * v49 + 4);
            do
            {
              *v50++ = 0;
              ++v49;
            }
            while ( v49 < *(_DWORD *)this );
          }
          *(_DWORD *)this = v48;
          if ( v48 != 0 )
          {
            do
            {
              if ( *((_DWORD *)this + v48) != 0 )
                break;
              v15 = v48-- == 1;
              *(_DWORD *)this = v48;
            }
            while ( !v15 );
          }
          return v47;
        }
      }
    }
  }
  return 0;
}

