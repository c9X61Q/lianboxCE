// busybox.exe @ 0x46dd8c size=611

void __cdecl __noreturn sub_46DD8C(int a1, int a2)
{
  char **v2; // eax
  char v3; // di
  int v4; // esi
  int v5; // eax
  int v6; // ebx
  int v7; // edx
  const char *v8; // eax
  unsigned int i; // ebx
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // edx
  unsigned int v13; // et2
  _QWORD *v14; // [esp+10h] [ebp-80h]
  const char *v15; // [esp+14h] [ebp-7Ch]
  char *v16; // [esp+18h] [ebp-78h]
  char v17; // [esp+1Fh] [ebp-71h]
  int v18; // [esp+20h] [ebp-70h]
  FILE *Stream; // [esp+24h] [ebp-6Ch]
  int v20; // [esp+28h] [ebp-68h]
  char *v21; // [esp+2Ch] [ebp-64h]
  char **v22; // [esp+30h] [ebp-60h]
  _QWORD v23[5]; // [esp+34h] [ebp-5Ch] BYREF
  _QWORD v24[6]; // [esp+5Ch] [ebp-34h] BYREF

  v20 = sub_435D44(a2, (int)"lwmcL");
  if ( v20 == 0 )
    v20 = 11;
  v2 = (char **)(a2 + 4 * dword_473090);
  v22 = v2;
  v15 = " %s\n";
  if ( *v2 == nullptr )
  {
    *(v2 - 1) = "standard input";
    v22 = v2 - 1;
    v15 = "\n";
  }
  v16 = "%9llu";
  if ( v22[1] == nullptr && ((v20 - 1) & v20) == 0 )
    v16 = "%llu";
  memset(v24, 0, 0x28u);
  v17 = 0;
  v18 = 0;
  v14 = v23;
  while ( 1 )
  {
    while ( 1 )
    {
      v21 = *v22;
      if ( *v22 != nullptr )
        break;
      if ( v18 <= 1 )
        sub_42F138(v17);
      v18 = 0;
      v14 = v24;
      v21 = "total";
LABEL_34:
      v8 = v16;
      for ( i = 0; i != 5; ++i )
      {
        v10 = v14[i];
        v11 = HIDWORD(v14[i]);
        v12 = v20;
        if ( _bittest(&v12, i) )
        {
          sub_46F088(v8, LODWORD(v14[i]), v11);
          v8 = " %9llu";
        }
        v13 = v10 + LODWORD(v24[i]);
        HIDWORD(v24[i]) = (__PAIR64__(v11, v10) + __PAIR64__(HIDWORD(v24[i]), v24[i])) >> 32;
        LODWORD(v24[i]) = v13;
      }
      sub_46F088(v15, v21);
    }
    ++v22;
    ++v18;
    Stream = sub_431518(v21);
    if ( Stream != nullptr )
      break;
    v17 = 1;
  }
  memset(v23, 0, sizeof(v23));
  v3 = 0;
  v4 = 0;
  while ( 1 )
  {
    v5 = sub_46F03C(Stream);
    v6 = v5;
    if ( v5 == -1 )
      break;
    ++v23[3];
    ++v23[2];
    if ( (unsigned int)(v5 - 32) > 0x5E )
    {
      if ( (unsigned int)(v5 - 9) <= 4 )
      {
        if ( v5 == 9 )
        {
          v4 = (v4 | 7) + 1;
          goto LABEL_27;
        }
LABEL_21:
        if ( v23[4] < (unsigned __int64)(unsigned int)v4 )
          v23[4] = (unsigned int)v4;
        if ( v6 == 10 )
        {
          ++v23[0];
        }
        else if ( v6 == 11 )
        {
          goto LABEL_27;
        }
        v4 = 0;
LABEL_27:
        v23[1] += v3;
        if ( v6 == -1 )
        {
          sub_42EE00(Stream);
          if ( v24[4] < v23[4] )
            v24[4] = v23[4];
          v24[4] -= v23[4];
          goto LABEL_34;
        }
        v3 = 0;
      }
    }
    else
    {
      ++v4;
      if ( v5 == 32 )
        goto LABEL_27;
      v3 = 1;
    }
  }
  if ( ferror(Stream) != 0 )
  {
    sub_418224(v21, v7);
    v17 = 1;
  }
  goto LABEL_21;
}

