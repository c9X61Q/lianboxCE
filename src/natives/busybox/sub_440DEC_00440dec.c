// busybox.exe @ 0x440dec size=458

BOOL __usercall sub_440DEC@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx
  unsigned __int8 v4; // al
  bool v5; // cf
  bool v6; // zf
  unsigned __int8 v7; // al
  unsigned __int8 v8; // al
  unsigned __int8 v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // al
  unsigned __int8 v12; // al
  unsigned __int8 v13; // al
  unsigned __int8 v14; // al
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  int v18; // esi
  unsigned int v19; // edx
  unsigned int v20; // ecx
  unsigned __int8 v21; // al
  int v22; // ebp
  int v23; // edi
  unsigned __int16 v24; // ax
  unsigned __int8 v25; // al
  unsigned __int16 v26; // ax
  unsigned __int8 v27; // al
  unsigned __int16 v28; // ax
  unsigned __int8 v29; // al
  unsigned __int16 v30; // ax
  unsigned __int8 v31; // al
  unsigned __int16 v32; // ax
  unsigned __int8 v33; // al
  unsigned __int16 v34; // ax
  unsigned __int8 v35; // al
  unsigned __int16 v36; // ax
  unsigned __int8 v37; // al
  unsigned __int16 v38; // ax
  unsigned int v40; // [esp+0h] [ebp-1Ch]
  int v42; // [esp+8h] [ebp-14h]

  v3 = a1[8];
  v4 = *(_BYTE *)(v3 + a3);
  v5 = *(_BYTE *)(v3 + a2) < v4;
  v6 = *(_BYTE *)(v3 + a2) == v4;
  if ( *(_BYTE *)(v3 + a2) == v4 )
  {
    v7 = *(_BYTE *)(v3 + a3 + 1);
    v5 = *(_BYTE *)(v3 + a2 + 1) < v7;
    v6 = *(_BYTE *)(v3 + a2 + 1) == v7;
    if ( *(_BYTE *)(v3 + a2 + 1) == v7 )
    {
      v8 = *(_BYTE *)(v3 + a3 + 2);
      v5 = *(_BYTE *)(v3 + a2 + 2) < v8;
      v6 = *(_BYTE *)(v3 + a2 + 2) == v8;
      if ( *(_BYTE *)(v3 + a2 + 2) == v8 )
      {
        v9 = *(_BYTE *)(v3 + a3 + 3);
        v5 = *(_BYTE *)(v3 + a2 + 3) < v9;
        v6 = *(_BYTE *)(v3 + a2 + 3) == v9;
        if ( *(_BYTE *)(v3 + a2 + 3) == v9 )
        {
          v10 = *(_BYTE *)(v3 + a3 + 4);
          v5 = *(_BYTE *)(v3 + a2 + 4) < v10;
          v6 = *(_BYTE *)(v3 + a2 + 4) == v10;
          if ( *(_BYTE *)(v3 + a2 + 4) == v10 )
          {
            v11 = *(_BYTE *)(v3 + a3 + 5);
            v5 = *(_BYTE *)(v3 + a2 + 5) < v11;
            v6 = *(_BYTE *)(v3 + a2 + 5) == v11;
            if ( *(_BYTE *)(v3 + a2 + 5) == v11 )
            {
              v12 = *(_BYTE *)(v3 + a3 + 6);
              v5 = *(_BYTE *)(v3 + a2 + 6) < v12;
              v6 = *(_BYTE *)(v3 + a2 + 6) == v12;
              if ( *(_BYTE *)(v3 + a2 + 6) == v12 )
              {
                v13 = *(_BYTE *)(v3 + a3 + 7);
                v5 = *(_BYTE *)(v3 + a2 + 7) < v13;
                v6 = *(_BYTE *)(v3 + a2 + 7) == v13;
                if ( *(_BYTE *)(v3 + a2 + 7) == v13 )
                {
                  v14 = *(_BYTE *)(v3 + a3 + 8);
                  v5 = *(_BYTE *)(v3 + a2 + 8) < v14;
                  v6 = *(_BYTE *)(v3 + a2 + 8) == v14;
                  if ( *(_BYTE *)(v3 + a2 + 8) == v14 )
                  {
                    v15 = *(_BYTE *)(v3 + a3 + 9);
                    v5 = *(_BYTE *)(v3 + a2 + 9) < v15;
                    v6 = *(_BYTE *)(v3 + a2 + 9) == v15;
                    if ( *(_BYTE *)(v3 + a2 + 9) == v15 )
                    {
                      v16 = *(_BYTE *)(v3 + a3 + 10);
                      v5 = *(_BYTE *)(v3 + a2 + 10) < v16;
                      v6 = *(_BYTE *)(v3 + a2 + 10) == v16;
                      if ( *(_BYTE *)(v3 + a2 + 10) == v16 )
                      {
                        v17 = *(_BYTE *)(v3 + a3 + 11);
                        v5 = *(_BYTE *)(v3 + a2 + 11) < v17;
                        v6 = *(_BYTE *)(v3 + a2 + 11) == v17;
                        if ( *(_BYTE *)(v3 + a2 + 11) == v17 )
                        {
                          v18 = a1[5];
                          v40 = a1[13];
                          v19 = a2 + 12;
                          v20 = a3 + 12;
                          v42 = v40 + 8;
                          while ( 1 )
                          {
                            v21 = *(_BYTE *)(v3 + v20);
                            v5 = *(_BYTE *)(v3 + v19) < v21;
                            v6 = *(_BYTE *)(v3 + v19) == v21;
                            if ( *(_BYTE *)(v3 + v19) != v21 )
                              break;
                            v22 = 2 * v19;
                            v23 = 2 * v20;
                            v24 = *(_WORD *)(v18 + 2 * v20);
                            v5 = *(_WORD *)(v18 + 2 * v19) < v24;
                            v6 = *(_WORD *)(v18 + 2 * v19) == v24;
                            if ( *(_WORD *)(v18 + 2 * v19) != v24 )
                              break;
                            v25 = *(_BYTE *)(v3 + v20 + 1);
                            v5 = *(_BYTE *)(v3 + v19 + 1) < v25;
                            v6 = *(_BYTE *)(v3 + v19 + 1) == v25;
                            if ( *(_BYTE *)(v3 + v19 + 1) != v25 )
                              break;
                            v26 = *(_WORD *)(v18 + v23 + 2);
                            v5 = *(_WORD *)(v18 + v22 + 2) < v26;
                            v6 = *(_WORD *)(v18 + v22 + 2) == v26;
                            if ( *(_WORD *)(v18 + v22 + 2) != v26 )
                              break;
                            v27 = *(_BYTE *)(v3 + v20 + 2);
                            v5 = *(_BYTE *)(v3 + v19 + 2) < v27;
                            v6 = *(_BYTE *)(v3 + v19 + 2) == v27;
                            if ( *(_BYTE *)(v3 + v19 + 2) != v27 )
                              break;
                            v28 = *(_WORD *)(v18 + v23 + 4);
                            v5 = *(_WORD *)(v18 + v22 + 4) < v28;
                            v6 = *(_WORD *)(v18 + v22 + 4) == v28;
                            if ( *(_WORD *)(v18 + v22 + 4) != v28 )
                              break;
                            v29 = *(_BYTE *)(v3 + v20 + 3);
                            v5 = *(_BYTE *)(v3 + v19 + 3) < v29;
                            v6 = *(_BYTE *)(v3 + v19 + 3) == v29;
                            if ( *(_BYTE *)(v3 + v19 + 3) != v29 )
                              break;
                            v30 = *(_WORD *)(v18 + v23 + 6);
                            v5 = *(_WORD *)(v18 + v22 + 6) < v30;
                            v6 = *(_WORD *)(v18 + v22 + 6) == v30;
                            if ( *(_WORD *)(v18 + v22 + 6) != v30 )
                              break;
                            v31 = *(_BYTE *)(v3 + v20 + 4);
                            v5 = *(_BYTE *)(v3 + v19 + 4) < v31;
                            v6 = *(_BYTE *)(v3 + v19 + 4) == v31;
                            if ( *(_BYTE *)(v3 + v19 + 4) != v31 )
                              break;
                            v32 = *(_WORD *)(v18 + v23 + 8);
                            v5 = *(_WORD *)(v18 + v22 + 8) < v32;
                            v6 = *(_WORD *)(v18 + v22 + 8) == v32;
                            if ( *(_WORD *)(v18 + v22 + 8) != v32 )
                              break;
                            v33 = *(_BYTE *)(v3 + v20 + 5);
                            v5 = *(_BYTE *)(v3 + v19 + 5) < v33;
                            v6 = *(_BYTE *)(v3 + v19 + 5) == v33;
                            if ( *(_BYTE *)(v3 + v19 + 5) != v33 )
                              break;
                            v34 = *(_WORD *)(v18 + v23 + 10);
                            v5 = *(_WORD *)(v18 + v22 + 10) < v34;
                            v6 = *(_WORD *)(v18 + v22 + 10) == v34;
                            if ( *(_WORD *)(v18 + v22 + 10) != v34 )
                              break;
                            v35 = *(_BYTE *)(v3 + v20 + 6);
                            v5 = *(_BYTE *)(v3 + v19 + 6) < v35;
                            v6 = *(_BYTE *)(v3 + v19 + 6) == v35;
                            if ( *(_BYTE *)(v3 + v19 + 6) != v35 )
                              break;
                            v36 = *(_WORD *)(v18 + v23 + 12);
                            v5 = *(_WORD *)(v18 + v22 + 12) < v36;
                            v6 = *(_WORD *)(v18 + v22 + 12) == v36;
                            if ( *(_WORD *)(v18 + v22 + 12) != v36 )
                              break;
                            v37 = *(_BYTE *)(v3 + v20 + 7);
                            v5 = *(_BYTE *)(v3 + v19 + 7) < v37;
                            v6 = *(_BYTE *)(v3 + v19 + 7) == v37;
                            if ( *(_BYTE *)(v3 + v19 + 7) != v37 )
                              break;
                            v38 = *(_WORD *)(v18 + v23 + 14);
                            v5 = *(_WORD *)(v18 + v22 + 14) < v38;
                            v6 = *(_WORD *)(v18 + v22 + 14) == v38;
                            if ( *(_WORD *)(v18 + v22 + 14) != v38 )
                              break;
                            v19 += 8;
                            if ( v40 <= v19 )
                              v19 -= v40;
                            v20 += 8;
                            if ( v40 <= v20 )
                              v20 -= v40;
                            --a1[6];
                            v42 -= 8;
                            if ( v42 < 0 )
                              return false;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return !v5 && !v6;
}

