// busybox.exe @ 0x4112b0 size=277

unsigned int __cdecl sub_4112B0(LPSTR a1, WCHAR **a2, unsigned int a3)
{
  unsigned int v3; // ebx
  CHAR *v4; // esi
  int v5; // edi
  WCHAR *v6; // ebp
  WCHAR *v7; // ebx
  int v8; // ebp
  unsigned int v9; // edi
  int v10; // eax
  int v12; // ebp
  WCHAR *i; // edi
  int v14; // eax
  int v15; // [esp+1Ch] [ebp-30h]
  CHAR v17[33]; // [esp+2Bh] [ebp-21h] BYREF

  v3 = 0;
  v4 = a1;
  v15 = sub_4115C0();
  v5 = sub_4114E0();
  v6 = *a2;
  if ( *a2 == nullptr )
    return v3;
  if ( a1 == nullptr )
  {
    v12 = v5;
    for ( i = *a2; ; ++i )
    {
      v14 = sub_4111C0(v17, *i, v15, v12);
      if ( v14 <= 0 )
        break;
      v3 += v14;
      if ( v17[v14 - 1] == 0 )
        return v3 - 1;
    }
    return -1;
  }
  if ( a3 != 0 )
  {
    v7 = *a2;
    v8 = v5;
    v9 = 0;
    while ( 1 )
    {
      v10 = sub_4111C0(v4, *v7, v15, v8);
      if ( v10 <= 0 )
        return -1;
      v4 += v10;
      v9 += v10;
      if ( *(v4 - 1) == 0 )
      {
        *a2 = nullptr;
        return v9 - 1;
      }
      ++v7;
      if ( a3 <= v9 )
      {
        v6 = v7;
        v3 = v9;
        break;
      }
    }
  }
  *a2 = v6;
  return v3;
}

