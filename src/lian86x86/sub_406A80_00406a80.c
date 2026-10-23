// lian86.exe @ 0x00406a80  size=551  name=sub_406A80
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

void __stdcall sub_406A80(_DWORD *a1, char a2)
{
  _DWORD *v2; // esi
  _DWORD *v3; // edx
  int v4; // ecx
  _DWORD *v5; // ebx
  int v6; // edi
  int *v7; // [esp+4h] [ebp-4h] BYREF

  v2 = a1;
  if ( a1 != nullptr )
  {
    v3 = (_DWORD *)*a1;
    if ( *a1 != 0 )
    {
      v4 = a1[4];
      v7 = (int *)a1[1];
      a1 = v3;
      v5 = (_DWORD *)v3[1];
      v6 = *v7;
      switch ( v2[11] )
      {
        case 1:
          if ( (a2 & 1) != 0 )
            sub_407120(&a1, &v7, v4, 8);
          else
            sub_407FE0(&a1, &v7, v4, 8);
          break;
        case 3:
          if ( (a2 & 1) != 0 )
            sub_407D40(&a1, &v7, v4, 8);
          else
            sub_408C00(&a1, &v7, v4, 8);
          break;
        case 5:
        case 0x15:
          if ( (a2 & 1) != 0 )
            sub_407680(&a1, &v7, v4, 8);
          else
            sub_408540(&a1, &v7, v4, 8);
          break;
        case 8:
          if ( (a2 & 1) != 0 )
          {
            if ( (a2 & 2) != 0 )
              sub_407A90(&a1, &v7, v4, 8);
            else
              sub_407930(&a1, &v7, v4, 8);
          }
          else if ( (a2 & 2) != 0 )
          {
            sub_408950(&a1, &v7, v4, 8);
          }
          else
          {
            sub_4087F0(&a1, &v7, v4, 8);
          }
          break;
        case 9:
          if ( (a2 & 1) != 0 )
            sub_407530(&a1, &v7, v4, 8);
          else
            sub_4083F0(&a1, &v7, v4, 8);
          break;
        case 0xB:
          if ( (a2 & 1) != 0 )
            sub_407270(&a1, &v7, v4, 8);
          else
            sub_408130(&a1, &v7, v4, 8);
          break;
        case 0xC:
          if ( (a2 & 1) != 0 )
            sub_4073C0(&a1, &v7, v4, 8);
          else
            sub_408280(&a1, &v7, v4, 8);
          break;
        case 0xD:
          if ( (a2 & 1) != 0 )
            sub_4077D0(&a1, &v7, v4, 8);
          else
            sub_408690(&a1, &v7, v4, 8);
          break;
        case 0x18:
          if ( (a2 & 1) != 0 )
            sub_406FD0(&a1, &v7, v4, 8);
          else
            sub_407E90(&a1, &v7, v4, 8);
          break;
        case 0x19:
          if ( (a2 & 1) != 0 )
            sub_407BF0(&a1, &v7, v4, 8);
          else
            sub_408AB0(&a1, &v7, v4, 8);
          break;
        default:
          break;
      }
      a1[1] = v5;
      *v7 = v6;
      if ( v5 != nullptr )
        *v5 = a1;
      else
        *v2 = a1;
      if ( v6 != 0 )
        *(_DWORD *)(v6 + 4) = v7;
      else
        v2[1] = v7;
      *((_BYTE *)v2 + 48) = 1;
    }
  }
}

