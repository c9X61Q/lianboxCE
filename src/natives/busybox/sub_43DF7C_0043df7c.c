// busybox.exe @ 0x43df7c size=226

int __usercall sub_43DF7C@<eax>(int a1@<ebx>, int a2, int a3)
{
  int v3; // eax
  int v4; // ebx
  int v5; // ebx
  int v6; // ebx
  int v7; // esi
  int v8; // edx
  int v9; // esi
  _DWORD *v10; // edi
  _DWORD *v11; // eax
  int v12; // edx
  int v13; // edx
  int v14; // ebx
  int result; // eax

  v3 = *(_DWORD *)(a3 + 28);
  switch ( (unsigned __int8)*(_DWORD *)(a3 + 24) )
  {
    case 2u:
    case 0x10u:
      goto LABEL_19;
    case 4u:
      v14 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 28);
      *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4 * v3) = v14;
      if ( *(_BYTE *)(a3 + 24) != 4 )
        goto LABEL_19;
      v13 = v14;
LABEL_17:
      result = sub_454210(a1, v13);
      break;
    case 8u:
    case 9u:
    case 0xCu:
      v13 = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 28);
      goto LABEL_17;
    case 0xAu:
    case 0xBu:
      *(_BYTE *)(a2 + 88) |= 1u;
      v4 = *(_DWORD *)(a3 + 4);
      if ( v4 != 0 )
        v5 = *(_DWORD *)(v4 + 12);
      else
        v5 = *(_DWORD *)(a3 + 16);
      v6 = *(_DWORD *)(v5 + 28);
      v7 = *(_DWORD *)(a3 + 8);
      if ( v7 != 0 )
        v8 = *(_DWORD *)(v7 + 12);
      else
        v8 = *(_DWORD *)(a3 + 16);
      v9 = *(_DWORD *)(v8 + 28);
      v10 = (_DWORD *)(*(_DWORD *)(a2 + 20) + 12 * v3);
      *v10 = 2;
      v11 = malloc(8u);
      v10[2] = v11;
      v12 = 12;
      if ( v11 == nullptr )
        goto LABEL_20;
      if ( v6 == v9 )
      {
        v10[1] = 1;
        *v11 = v6;
      }
      else
      {
        v10[1] = 2;
        if ( v6 >= v9 )
        {
          *v11 = v9;
          v11[1] = v6;
        }
        else
        {
          *v11 = v6;
          v11[1] = v9;
        }
      }
LABEL_19:
      v12 = 0;
LABEL_20:
      result = v12;
      break;
    default:
      *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4 * v3) = *(_DWORD *)(*(_DWORD *)(a3 + 16) + 28);
      goto LABEL_19;
  }
  return result;
}

