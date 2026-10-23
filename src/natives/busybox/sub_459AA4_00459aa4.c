// busybox.exe @ 0x459aa4 size=626

int __usercall sub_459AA4@<eax>(int a1@<eax>)
{
  _DWORD *v1; // ebp
  int v2; // ebx
  int v3; // esi
  int v4; // edx
  _DWORD *v5; // esi
  char *v6; // eax
  signed int v7; // edi
  char v8; // bl
  signed int v9; // edx
  char *v10; // ecx
  size_t Size; // eax
  char *v12; // edx
  char *v13; // eax
  char *v14; // esi
  unsigned int v15; // ecx
  unsigned int v16; // edi
  unsigned int v17; // ebx
  char *v18; // eax
  int v19; // edx
  int v20; // eax
  int v21; // edx
  int v22; // ebx
  int v23; // ecx
  unsigned int v24; // ebx
  FILE *v25; // eax
  int result; // eax
  char *Buf; // [esp+10h] [ebp-28h]
  char *Buffer; // [esp+14h] [ebp-24h]
  _BYTE *Buffera; // [esp+14h] [ebp-24h]
  char *Bufferb; // [esp+14h] [ebp-24h]
  unsigned int i; // [esp+18h] [ebp-20h]
  int v32; // [esp+1Ch] [ebp-1Ch]
  char *v34; // [esp+24h] [ebp-14h]

  v1 = (_DWORD *)dword_486010;
  v2 = *(_DWORD *)(dword_486010 + 40);
  v3 = *(_DWORD *)(dword_486010 + 36);
  sub_452F24();
  v4 = v1[10];
  if ( v4 != v2 || v1[9] != v3 )
  {
    sub_44614C(v1[9], v4);
    a1 = 1;
  }
  sub_46443C(v1 + 12, v1 + 11);
  Buf = (char *)v1[17];
  for ( i = 0; v1[9] - 1 > i; ++i )
  {
    Buffer = (char *)v1[13];
    v5 = v1 + 210;
    v6 = Buf;
    v7 = 0;
    v8 = 126;
    while ( 1 )
    {
      v9 = v7;
      if ( v7 >= (unsigned int)(v1[10] + v1[20]) )
        break;
      if ( v1[1] <= (unsigned int)v6 )
      {
        v10 = v6;
        goto LABEL_23;
      }
      v10 = v6 + 1;
      v8 = *v6;
      if ( *v6 == 10 )
        break;
      if ( v8 == -101 )
      {
        v8 = 46;
        goto LABEL_23;
      }
      if ( (unsigned __int8)v8 > 0x1Fu )
      {
        if ( v8 != 127 )
          goto LABEL_23;
LABEL_18:
        ++v7;
        *((_BYTE *)v5 + v9) = 94;
        if ( v8 == 127 )
          v8 = 63;
        else
          v8 += 64;
        goto LABEL_23;
      }
      if ( v8 != 9 )
        goto LABEL_18;
      while ( v7 % v1[20] != v1[20] - 1 )
        *((_BYTE *)v1 + ++v7 + 839) = 32;
      v8 = 32;
LABEL_23:
      Size = v7 + 1;
      *((_BYTE *)v5 + v7) = v8;
      v32 = v1[20];
      v12 = (char *)(v7 + 1);
      if ( v7 + 1 > (int)Buffer )
        v12 = Buffer;
      ++v7;
      if ( (int)v12 >= v32 )
      {
        v34 = v10;
        memmove(v1 + 210, (char *)v5 + v32, Size);
        v7 -= v32;
        Buffer -= v32;
        v10 = v34;
      }
      if ( v1[1] <= (unsigned int)v10 )
        break;
      v6 = v10;
    }
    v13 = (char *)v7;
    if ( v7 > (int)Buffer )
      v13 = Buffer;
    v14 = (char *)v5 + (_DWORD)v13;
    v15 = v1[10];
    v16 = v7 - (_DWORD)v13;
    if ( v15 > v16 )
      memset(&v14[v16], 32, v15 - v16);
    v17 = v1[1];
    if ( v17 > (unsigned int)Buf )
    {
      v18 = (char *)memchr(Buf, 10, v17 - (_DWORD)Buf);
      if ( v18 == nullptr )
        v18 = (char *)(v17 - 1);
      Buf = v18 + 1;
    }
    v19 = v1[10];
    v20 = v19 - 1;
    Buffera = (_BYTE *)(i * v19 + v1[18]);
    v21 = 0;
    if ( a1 != 0 )
    {
      v22 = v20;
      v23 = a1;
      v21 = 0;
    }
    else
    {
      while ( 1 )
      {
        if ( v21 > v20 )
        {
          v22 = v20;
          v23 = 0;
          goto LABEL_46;
        }
        if ( v14[v21] != Buffera[v21] )
          break;
        ++v21;
      }
      v22 = v20;
      do
      {
        if ( v14[v22] != Buffera[v22] )
          break;
        --v22;
      }
      while ( v21 <= v22 );
      v23 = 1;
LABEL_46:
      if ( v1[13] != v1[28] )
        v23 = 1;
    }
    if ( v20 < (unsigned int)v22 )
      v22 = v20;
    if ( v21 > v22 )
    {
      v22 = v20;
      v21 = 0;
    }
    if ( v23 != 0 )
    {
      v24 = v22 - v21 + 1;
      Bufferb = &Buffera[v21];
      qmemcpy(Bufferb, &v14[v21], v24);
      sub_44D22C(i, v21);
      v25 = off_4730E8(1);
      sub_46EF84(Bufferb, v24, 1u, v25);
    }
  }
  sub_44D22C(v1[11], v1[12]);
  result = v1[13];
  v1[28] = result;
  return result;
}

