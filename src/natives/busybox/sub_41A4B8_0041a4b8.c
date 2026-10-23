// busybox.exe @ 0x41a4b8 size=938

void __cdecl __noreturn sub_41A4B8(int a1, int a2)
{
  char v2; // di
  _DWORD *v3; // esi
  struct tm *v4; // eax
  int v5; // esi
  int v6; // ebx
  int v7; // edx
  unsigned int v8; // ebp
  int v9; // eax
  char *v10; // esi
  int v11; // ecx
  int i; // ebx
  _QWORD *v13; // ecx
  int v14; // ebp
  int v15; // esi
  unsigned int j; // ebx
  char *v17; // edi
  int v18; // ecx
  unsigned int m; // [esp+14h] [ebp-8F0h]
  _QWORD *v20; // [esp+18h] [ebp-8ECh]
  int k; // [esp+1Ch] [ebp-8E8h]
  int v22; // [esp+24h] [ebp-8E0h]
  __time32_t Time; // [esp+28h] [ebp-8DCh] BYREF
  char Destination[28]; // [esp+2Ch] [ebp-8D8h] BYREF
  struct tm v25; // [esp+48h] [ebp-8BCh] BYREF
  char Buffer[44]; // [esp+6Ch] [ebp-898h] BYREF
  char v27[80]; // [esp+C4h] [ebp-840h] BYREF
  _QWORD v28[21]; // [esp+114h] [ebp-7F0h] BYREF
  char v29; // [esp+1BCh] [ebp-748h] BYREF

  v2 = sub_435D44(a2, "jy");
  dword_486008 &= 1u;
  v3 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v3 != 0 )
  {
    if ( v3[1] != 0 )
    {
      if ( v3[2] != 0 )
        sub_418164();
      v6 = 0;
      if ( (v2 & 2) == 0 )
        v6 = sub_470928(12, 1);
    }
    else
    {
      v6 = 0;
    }
    v5 = sub_470928(9999, 1);
  }
  else
  {
    time(&Time);
    v4 = localtime(&Time);
    v5 = v4->tm_year + 1900;
    v6 = 0;
    if ( (v2 & 2) == 0 )
      v6 = v4->tm_mon + 1;
  }
  v7 = 7 * dword_486008;
  memset(Destination, 32, 7 * dword_486008 + 21);
  Destination[v7 + 20] = 0;
  v8 = 0;
  while ( 1 )
  {
    v25.tm_mon = v8;
    sub_444C3C(Buffer, 0x28u, (int)"%B", &v25);
    *(_DWORD *)&Buffer[4 * v8 + 40] = sub_47188C();
    if ( v8 <= 6 )
    {
      v25.tm_wday = v8;
      sub_444C3C(Buffer, 0x28u, (int)"%a", &v25);
      strncpy(&Destination[dword_486008 + v8 * (dword_486008 + 3)], Buffer, 2u);
    }
    if ( ++v8 == 12 )
    {
      if ( v6 != 0 )
      {
        sub_421C34(v28, v5);
        v9 = sub_462700(v27, "%s %u", *(const char **)&Buffer[4 * v6 + 36], v5);
        sub_46F088(
          "%*s%s\n%s\n",
          (unsigned int)(7 * dword_486008 + 20 - v9) >> 1,
          (const char *)&unk_476EB4,
          v27,
          Destination);
        v10 = (char *)v28;
        do
        {
          *sub_419BBC(v27, (int)v10) = 0;
          v10 += 28;
          sub_4677B8(v11);
        }
        while ( v10 != &v29 );
      }
      else
      {
        sub_462700(v27, "%u", v5);
        sub_41AF70(0, -8 * dword_486008 + 64);
        sub_46F108("\n");
        for ( i = 0; i != 12; ++i )
        {
          v13 = &v28[21 * i];
          sub_421C34(v13, v5);
        }
        memset(v27, 32, 0x4Fu);
        v27[79] = 0;
        v14 = 7 * dword_486008;
        v15 = 7 * dword_486008 + 20;
        for ( j = 0; j <= 0xB; j += 3 - dword_486008 )
        {
          sub_41AF70(2, v15);
          if ( dword_486008 == 0 )
            sub_41AF70(2, v15);
          sub_41AF70(0, v15);
          sub_46F088("\n%s%*s%s", Destination, 2, (const char *)&unk_476EB4, Destination);
          if ( dword_486008 == 0 )
            sub_46F088("%*s%s", 2, (const char *)&unk_476EB4, Destination);
          sub_418130(10);
          v20 = &v28[21 * j];
          for ( k = 0; k != 42; k += 7 )
          {
            v17 = v27;
            v18 = (int)v20;
            for ( m = 0; 3 - dword_486008 > m; ++m )
            {
              v22 = v18;
              sub_419BBC(v17, v18);
              v17 += v14 + 22;
              v18 = v22 + 168;
            }
            sub_4677B8(v18);
            v20 = (_QWORD *)((char *)v20 + 28);
          }
        }
      }
      sub_42F138();
    }
  }
}

