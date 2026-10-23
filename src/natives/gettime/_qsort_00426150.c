// gettime.exe @ 0x426150 size=1262

void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  _CoreCrtNonSecureSearchSortCompareFunction v4; // ebx
  char *v5; // esi
  size_t v6; // edi
  char *v7; // ecx
  unsigned int v8; // eax
  char *v9; // edx
  char *v10; // eax
  char *v11; // esi
  char *v12; // edx
  int v13; // eax
  size_t v14; // ebx
  char v15; // cl
  char *v16; // edi
  int v17; // eax
  size_t v18; // esi
  bool v19; // cc
  char *v20; // eax
  size_t v21; // ebx
  char *v22; // esi
  char v23; // cl
  int v24; // eax
  char *v25; // edx
  char *v26; // esi
  size_t v27; // ebx
  char *v28; // edx
  char v29; // al
  char v30; // cl
  int v31; // eax
  char *v32; // edx
  size_t v33; // eax
  size_t v34; // ebx
  char *v35; // esi
  char *v36; // edx
  char v37; // al
  char v38; // cl
  char *v39; // ebx
  int v40; // eax
  char *v41; // ecx
  char *v42; // edx
  int v43; // esi
  size_t i; // ebx
  char v45; // al
  char v46; // cl
  int v47; // eax
  bool v48; // zf
  char *v49; // ecx
  int v50; // eax
  int v51; // eax
  int v52; // [esp+Ch] [ebp-118h]
  char *v53; // [esp+10h] [ebp-114h]
  size_t v54; // [esp+10h] [ebp-114h]
  char *v55; // [esp+14h] [ebp-110h]
  char *v56; // [esp+18h] [ebp-10Ch]
  char *v57; // [esp+20h] [ebp-104h]
  char *v58; // [esp+28h] [ebp-FCh]
  int v59; // [esp+28h] [ebp-FCh]
  int v60; // [esp+28h] [ebp-FCh]
  char *v61; // [esp+28h] [ebp-FCh]
  char *v62; // [esp+28h] [ebp-FCh]
  char *v63; // [esp+28h] [ebp-FCh]
  char *v64; // [esp+2Ch] [ebp-F8h]
  _DWORD v65[60]; // [esp+30h] [ebp-F4h]

  v4 = CompareFunction;
  v5 = (char *)Base;
  v57 = (char *)Base;
  v6 = SizeOfElements;
  if ( (Base != nullptr || NumOfElements == 0) && SizeOfElements != 0 && CompareFunction != nullptr )
  {
    v52 = 0;
    if ( NumOfElements >= 2 )
    {
      v7 = (char *)Base + SizeOfElements * (NumOfElements - 1);
      while ( 2 )
      {
        while ( 2 )
        {
          v64 = v7;
          while ( 1 )
          {
            v8 = (v7 - v5) / v6 + 1;
            if ( v8 <= 8 )
            {
              if ( v7 > v5 )
              {
                v9 = &v5[v6];
                v55 = &v5[v6];
                do
                {
                  v10 = v5;
                  v11 = v9;
                  v58 = v10;
                  if ( v9 <= v7 )
                  {
                    do
                    {
                      if ( v4(v11, v10) <= 0 )
                      {
                        v10 = v58;
                      }
                      else
                      {
                        v10 = v11;
                        v58 = v11;
                      }
                      v7 = v64;
                      v11 += v6;
                    }
                    while ( v11 <= v64 );
                  }
                  v12 = v7;
                  if ( v10 != v7 )
                  {
                    v13 = v10 - v7;
                    v14 = v6;
                    v59 = v13;
                    do
                    {
                      v15 = (v12++)[v13];
                      v12[v59 - 1] = *(v12 - 1);
                      v13 = v59;
                      *(v12 - 1) = v15;
                      --v14;
                    }
                    while ( v14 != 0 );
                    v4 = CompareFunction;
                    v7 = v64;
                  }
                  v5 = v57;
                  v7 -= v6;
                  v9 = v55;
                  v64 = v7;
                }
                while ( v7 > v57 );
              }
              goto LABEL_77;
            }
            v60 = v6 * (v8 >> 1);
            v16 = &v5[v60];
            v53 = &v5[v60];
            v17 = v4(v5, &v5[v60]);
            v18 = SizeOfElements;
            v19 = v17 <= 0;
            v20 = v57;
            if ( !v19 && v57 != v16 )
            {
              v21 = SizeOfElements;
              v22 = v16;
              do
              {
                v23 = v22[-v60];
                v22[-v60] = *v22;
                *v22++ = v23;
                --v21;
              }
              while ( v21 != 0 );
              v16 = v53;
              v4 = CompareFunction;
              v18 = SizeOfElements;
              v20 = v57;
            }
            v24 = v4(v20, v64);
            v25 = v64;
            if ( v24 > 0 )
            {
              v54 = v18;
              v26 = v64;
              if ( v57 != v64 )
              {
                v27 = v54;
                v28 = (char *)(v57 - v64);
                do
                {
                  v29 = *v26++;
                  v30 = v26[(_DWORD)v28 - 1];
                  v26[(_DWORD)v28 - 1] = v29;
                  *(v26 - 1) = v30;
                  --v27;
                }
                while ( v27 != 0 );
                v4 = CompareFunction;
                v25 = v64;
              }
            }
            v31 = v4(v16, v25);
            v32 = v64;
            v19 = v31 <= 0;
            v33 = SizeOfElements;
            if ( !v19 )
            {
              v34 = SizeOfElements;
              v35 = v64;
              if ( v16 != v64 )
              {
                v36 = (char *)(v16 - v64);
                do
                {
                  v37 = *v35++;
                  v38 = v35[(_DWORD)v36 - 1];
                  v35[(_DWORD)v36 - 1] = v37;
                  *(v35 - 1) = v38;
                  --v34;
                }
                while ( v34 != 0 );
                v33 = SizeOfElements;
                v32 = v64;
              }
            }
            v5 = v57;
            v39 = v32;
            v61 = v32;
            while ( 1 )
            {
              if ( v16 > v5 )
              {
                while ( 1 )
                {
                  v5 += v33;
                  v56 = v5;
                  if ( v5 >= v16 )
                    break;
                  v19 = CompareFunction(v5, v16) <= 0;
                  v33 = SizeOfElements;
                  if ( !v19 )
                    goto LABEL_48;
                }
                v32 = v64;
              }
              do
              {
                v5 += v33;
                if ( v5 > v32 )
                  break;
                v40 = CompareFunction(v5, v16);
                v32 = v64;
                v19 = v40 <= 0;
                v33 = SizeOfElements;
              }
              while ( v19 );
              v39 = v61;
              v56 = v5;
LABEL_48:
              while ( 1 )
              {
                v33 = SizeOfElements;
                v41 = v39;
                v39 -= SizeOfElements;
                v62 = v41;
                if ( v39 <= v16 )
                  break;
                if ( CompareFunction(v39, v16) <= 0 )
                {
                  v33 = SizeOfElements;
                  v41 = v62;
                  break;
                }
              }
              v5 = v56;
              v61 = v39;
              if ( v39 < v56 )
                break;
              v42 = v39;
              if ( v39 != v56 )
              {
                v43 = v56 - v39;
                for ( i = v33; i != 0; --i )
                {
                  v45 = *v42++;
                  v46 = v42[v43 - 1];
                  v42[v43 - 1] = v45;
                  *(v42 - 1) = v46;
                }
                v5 = v56;
                v39 = v61;
                v33 = SizeOfElements;
              }
              v32 = v64;
              if ( v16 == v39 )
                v16 = v5;
            }
            if ( v16 < v41 )
            {
              v4 = CompareFunction;
              while ( 1 )
              {
                v41 -= v33;
                v63 = v41;
                if ( v41 <= v16 )
                  break;
                v47 = CompareFunction(v41, v16);
                v41 = v63;
                v48 = v47 == 0;
                v33 = SizeOfElements;
                if ( !v48 )
                  goto LABEL_67;
              }
            }
            v4 = CompareFunction;
            do
            {
              v49 = &v41[-v33];
              v63 = v49;
              if ( v49 <= v57 )
                break;
              v50 = CompareFunction(v49, v16);
              v41 = v63;
              v48 = v50 == 0;
              v33 = SizeOfElements;
            }
            while ( v48 );
            v5 = v56;
LABEL_67:
            if ( v63 - v57 < v64 - v5 )
              break;
            if ( v57 < v63 )
            {
              v65[v52 + 30] = v57;
              v65[v52++] = v63;
            }
            v7 = v64;
            v6 = SizeOfElements;
            if ( v5 >= v64 )
              goto LABEL_77;
            v57 = v5;
          }
          if ( v5 < v64 )
          {
            v65[v52 + 30] = v5;
            v65[v52++] = v64;
          }
          v5 = v57;
          if ( v57 < v63 )
          {
            v7 = v63;
            v6 = SizeOfElements;
            continue;
          }
          break;
        }
        v6 = SizeOfElements;
LABEL_77:
        v51 = --v52;
        if ( v52 >= 0 )
        {
          v5 = (char *)v65[v51 + 30];
          v7 = (char *)v65[v51];
          v57 = v5;
          continue;
        }
        break;
      }
    }
  }
  else
  {
    *_errno() = 22;
    _invalid_parameter_noinfo();
  }
}

