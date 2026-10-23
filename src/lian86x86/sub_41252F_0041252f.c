// lian86.exe @ 0x0041252f  size=373  name=sub_41252F
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_41252F(int a1, int *a2)
{
  int *v2; // ebx
  int result; // eax
  int v4; // ebp
  int v5; // esi
  int *v6; // ebx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  int v10; // edi
  int v11; // ebx
  int v12; // ecx
  int *v13; // ebx
  int v14; // eax
  int v15; // eax
  int *v16; // ebx
  int v17; // ecx
  int v18; // edx
  int v19; // esi
  int v20; // edi
  int v21; // edx
  int *v22; // ebx
  int v23; // esi
  int v24; // ecx
  int v25; // eax
  int v26; // esi
  int *v27; // ebx
  int v28; // eax
  int v29; // ecx
  int v30; // edx
  int v31; // edi
  int v32; // esi
  int *v33; // ebx
  int v34; // ecx
  int v35; // eax
  int v36; // eax
  int v37; // eax
  int v38; // edi
  _DWORD *v39; // edx
  int v40; // eax
  int v41; // [esp+4h] [ebp-8h]
  int v42; // [esp+4h] [ebp-8h]
  int v43; // [esp+8h] [ebp-4h]
  int *v44; // [esp+14h] [ebp+8h]
  int v45; // [esp+14h] [ebp+8h]

  v2 = a2;
  result = *a2;
  if ( *a2 != -1 )
  {
    v4 = a1;
    do
    {
      ++v2;
      switch ( result )
      {
        case -7:
          v32 = *v2;
          v33 = v2 + 1;
          v34 = *v33++;
          v35 = *v33++;
          v42 = v35;
          v36 = *v33++;
          v43 = v36;
          v37 = *v33;
          v2 = v33 + 1;
          v45 = v37;
          if ( v34 > 0 )
          {
            v38 = v34;
            v39 = (_DWORD *)(v32 + v4 + 4);
            do
            {
              v40 = *v2++;
              *v39++ = v40;
              --v38;
            }
            while ( v38 != 0 );
          }
          dword_4186B8(v34, v42, v43, v45, v32 + v4);
          break;
        case -6:
          v26 = *v2;
          v27 = v2 + 1;
          v28 = v27[3];
          v29 = v27[2];
          v30 = v27[1];
          v31 = *v27;
          v2 = v27 + 4;
          dword_4186C4(v31, v30, v29, v26 + v4, v28);
          break;
        case -5:
          v21 = *v2;
          v22 = v2 + 1;
          v23 = *v22++;
          v24 = *v22++;
          v25 = *v22;
          v2 = v22 + 1;
          dword_4186C0(v23, v21 + v4, v24, v25);
          break;
        case -4:
          v15 = *v2;
          v16 = v2 + 1;
          v17 = v16[3];
          v18 = v16[2];
          v19 = v16[1];
          v20 = *v16;
          v2 = v16 + 4;
          dword_4186BC(v20, v19, v18, v17, v4 + v15);
          break;
        case -3:
          v12 = *v2;
          v13 = v2 + 2;
          v14 = *v13;
          v2 = v13 + 1;
          sub_41252F(v12 + v4, v14);
          break;
        case -2:
          v5 = *v2;
          v6 = v2 + 1;
          v7 = *v6++;
          v8 = *v6++;
          v41 = v8;
          v9 = *v6;
          v2 = v6 + 1;
          v44 = v2;
          if ( v5 > 0 )
          {
            v10 = v7 + v4;
            v11 = v9;
            do
            {
              sub_41252F(v10, v11);
              v10 += v41;
              --v5;
            }
            while ( v5 != 0 );
            v2 = v44;
            v4 = a1;
          }
          break;
        default:
          break;
      }
      result = *v2;
    }
    while ( *v2 != -1 );
  }
  return result;
}

