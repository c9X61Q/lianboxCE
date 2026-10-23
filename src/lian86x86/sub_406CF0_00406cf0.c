// lian86.exe @ 0x00406cf0  size=626  name=sub_406CF0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_406CF0(_DWORD *a1, char a2, int a3, int a4, _DWORD *a5, int a6)
{
  _DWORD *v6; // edi
  _DWORD *v7; // ebx
  _DWORD *v8; // ecx
  int v9; // esi
  _DWORD *v10; // eax
  int v11; // esi
  int v12; // eax
  int v13; // ebx
  _DWORD *v14; // ebp
  int v15; // eax
  int v16; // [esp-10h] [ebp-14h]
  int v17; // [esp-10h] [ebp-14h]
  int v18; // [esp-10h] [ebp-14h]
  int v19; // [esp-10h] [ebp-14h]
  int v20; // [esp-10h] [ebp-14h]
  int v21; // [esp-10h] [ebp-14h]
  int v22; // [esp-10h] [ebp-14h]
  int v23; // [esp-10h] [ebp-14h]
  int v24; // [esp-10h] [ebp-14h]
  int v25; // [esp-10h] [ebp-14h]

  v6 = a1;
  if ( a1 != nullptr && *a1 != 0 )
  {
    v7 = a5;
    if ( a5 == (_DWORD *)-1 )
    {
      v8 = (_DWORD *)a1[1];
      v9 = a1[4];
      a1 = (_DWORD *)*a1;
    }
    else
    {
      v10 = (_DWORD *)sub_40AC12(a1, a5);
      v11 = a6;
      a1 = v10;
      v12 = sub_40AC12(v6, a6);
      v9 = v11 - (_DWORD)v7 + 1;
      if ( a1 == nullptr || v12 == 0 )
        return;
      a1 -= 2;
      v8 = (_DWORD *)(v12 - 8);
    }
    a5 = v8;
    v13 = *v8;
    v14 = (_DWORD *)a1[1];
    v15 = a4;
    if ( a4 == -1 )
      v15 = v6[11];
    switch ( v15 )
    {
      case 1:
        v17 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407120(&a1, &a5, v9, v17);
        else
          sub_407FE0(&a1, &a5, v9, v17);
        break;
      case 3:
        v18 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407D40(&a1, &a5, v9, v18);
        else
          sub_408C00(&a1, &a5, v9, v18);
        break;
      case 5:
      case 21:
        v19 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407680(&a1, &a5, v9, v19);
        else
          sub_408540(&a1, &a5, v9, v19);
        break;
      case 8:
        v20 = a3 + 8;
        if ( (a2 & 1) != 0 )
        {
          if ( (a2 & 2) != 0 )
            sub_407A90(&a1, &a5, v9, v20);
          else
            sub_407930(&a1, &a5, v9, v20);
        }
        else if ( (a2 & 2) != 0 )
        {
          sub_408950(&a1, &a5, v9, v20);
        }
        else
        {
          sub_4087F0(&a1, &a5, v9, v20);
        }
        break;
      case 9:
        v21 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407530(&a1, &a5, v9, v21);
        else
          sub_4083F0(&a1, &a5, v9, v21);
        break;
      case 11:
        v22 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407270(&a1, &a5, v9, v22);
        else
          sub_408130(&a1, &a5, v9, v22);
        break;
      case 12:
        v23 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_4073C0(&a1, &a5, v9, v23);
        else
          sub_408280(&a1, &a5, v9, v23);
        break;
      case 13:
        v24 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_4077D0(&a1, &a5, v9, v24);
        else
          sub_408690(&a1, &a5, v9, v24);
        break;
      case 24:
        v16 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_406FD0(&a1, &a5, v9, v16);
        else
          sub_407E90(&a1, &a5, v9, v16);
        break;
      case 25:
        v25 = a3 + 8;
        if ( (a2 & 1) != 0 )
          sub_407BF0(&a1, &a5, v9, v25);
        else
          sub_408AB0(&a1, &a5, v9, v25);
        break;
      default:
        break;
    }
    a1[1] = v14;
    *a5 = v13;
    if ( v14 != nullptr )
      *v14 = a1;
    else
      *v6 = a1;
    if ( v13 != 0 )
      *(_DWORD *)(v13 + 4) = a5;
    else
      v6[1] = a5;
    *((_BYTE *)v6 + 48) = 1;
  }
}

