// busybox.exe @ 0x448a7c size=197

int __usercall sub_448A7C@<eax>(_DWORD *a1@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  int v3; // edx
  int i; // esi
  int v6; // ecx
  int v7; // edi
  char v8; // bl
  int v9; // ebx
  int v10; // edi
  unsigned __int8 v11; // cl
  char v13; // [esp+7h] [ebp-11h]

  if ( *(_DWORD *)(a2 + 40) > *(_DWORD *)(a2 + 24) )
  {
    v13 = *a3;
    for ( i = 0; i != 32; ++i )
    {
      v6 = *(_DWORD *)(a2 + 24);
      v7 = v6 + 1;
      if ( a3[4] == 30 && *(_BYTE *)(a2 + 59) != 0 )
      {
        *(_DWORD *)(a2 + 24) = v7;
        v8 = *(_BYTE *)(*(_DWORD *)(a2 + 8) + v6 + *(_DWORD *)a2);
      }
      else
      {
        v9 = *(_DWORD *)(a2 + 4);
        *(_DWORD *)(a2 + 24) = v7;
        v8 = *(_BYTE *)(v9 + v6);
      }
      if ( *(_DWORD *)(a2 + 40) <= v7 )
        break;
      v10 = a1[1];
      if ( v8 == v13 && *(_BYTE *)(*(_DWORD *)(a2 + 4) + v6 + 1) == 93 )
      {
        *(_DWORD *)(a2 + 24) = v6 + 2;
        *(_BYTE *)(v10 + i) = 0;
        v11 = a3[4];
        if ( v11 == 30 )
        {
          *a1 = 4;
          return 0;
        }
        else
        {
          v3 = 0;
          if ( v11 <= 0x1Eu )
          {
            if ( v11 == 26 )
            {
              *a1 = 3;
            }
            else if ( v11 == 28 )
            {
              *a1 = 2;
            }
          }
        }
        return v3;
      }
      *(_BYTE *)(v10 + i) = v8;
    }
  }
  return 7;
}

