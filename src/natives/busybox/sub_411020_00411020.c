// busybox.exe @ 0x411020 size=316

unsigned int __cdecl sub_411020(LPWSTR a1, BYTE **a2, unsigned int a3, int *a4)
{
  int *v4; // eax
  int v5; // eax
  unsigned int v6; // esi
  BYTE *v7; // eax
  unsigned int v8; // edi
  WCHAR *v9; // ebx
  int i; // eax
  BYTE *v11; // ecx
  unsigned int v13; // ebx
  int v14; // esi
  int v15; // eax
  int v16; // [esp+28h] [ebp-34h]
  WCHAR v17[15]; // [esp+3Eh] [ebp-1Eh] BYREF
  int *v18; // [esp+6Ch] [ebp+10h]

  v4 = (int *)&unk_485A24;
  if ( a4 != nullptr )
    v4 = a4;
  v18 = v4;
  v16 = sub_4115C0();
  v5 = sub_4114E0();
  if ( a2 == nullptr )
    return 0;
  v6 = v5;
  v7 = *a2;
  if ( *a2 == nullptr )
    return 0;
  if ( a1 != nullptr )
  {
    v8 = 0;
    if ( a3 != 0 )
    {
      v9 = a1;
      for ( i = sub_410E20(a1, v7, a3, v18, v16, v6); i > 0; i = sub_410E20(v9, v11, a3 - v8, v18, v16, v6) )
      {
        v8 += i;
        ++v9;
        v11 = &(*a2)[i];
        *a2 = v11;
        if ( a3 <= v8 )
          return v8;
      }
      if ( v8 < a3 && i == 0 )
        *a2 = nullptr;
    }
    return v8;
  }
  else
  {
    v13 = v6;
    v17[0] = 0;
    v14 = 0;
    while ( 1 )
    {
      v15 = sub_410E20(v17, &v7[v14], v13, v18, v16, v13);
      if ( v15 <= 0 )
        break;
      v14 += v15;
      v7 = *a2;
    }
    return v14;
  }
}

