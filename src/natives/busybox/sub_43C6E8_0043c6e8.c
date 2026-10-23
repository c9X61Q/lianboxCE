// busybox.exe @ 0x43c6e8 size=529

int __cdecl sub_43C6E8(int *a1, char *Str1, signed int MaxCount, _WORD *a4, _DWORD *a5)
{
  char v5; // al
  char **v6; // edi
  const char *Str2; // eax
  signed int v8; // ebx
  signed int i; // eax
  int v10; // edx
  int v11; // edx
  char **v12; // ecx
  unsigned int v13; // eax
  int v14; // edx
  int v15; // ecx
  unsigned int v16; // esi
  int v17; // edx
  int v18; // eax
  int v20; // [esp+18h] [ebp-30h]
  int v21; // [esp+1Ch] [ebp-2Ch]
  unsigned int v22; // [esp+20h] [ebp-28h] BYREF
  int v23; // [esp+24h] [ebp-24h] BYREF
  _BYTE v24[32]; // [esp+28h] [ebp-20h] BYREF

  v23 = 0;
  v5 = *Str1;
  v6 = &off_4733C0;
  if ( *Str1 == 27 )
  {
    while ( 1 )
    {
      Str2 = *v6;
      if ( *v6 == nullptr )
        goto LABEL_12;
      v8 = (signed int)v6[1];
      if ( MaxCount >= v8 )
      {
        if ( strncmp(Str1, Str2, (size_t)v6[1]) == 0 )
        {
          a1[6] = (_DWORD)v6[3] << 8;
          *a5 = 0;
          return v8;
        }
      }
      else if ( strncmp(Str1, Str2, MaxCount) == 0 )
      {
        goto LABEL_22;
      }
      v6 += 4;
    }
  }
  v10 = a1[6];
  if ( v5 == 14 )
  {
    v11 = a1[6] & 0xFF00 | 1;
LABEL_18:
    a1[6] = v11;
    *a5 = 0;
    return 1;
  }
  if ( v5 == 15 )
  {
    v11 = a1[6] & 0xFF00;
    goto LABEL_18;
  }
  v20 = 0;
  v21 = 0;
  if ( (unsigned __int8)v5 > 0x1Fu )
  {
    v21 = BYTE1(v10);
    v20 = (unsigned __int8)v10;
  }
  v12 = &(&off_4733C0)[4 * v21];
  v8 = (signed int)v12[2];
  if ( v8 > MaxCount )
  {
LABEL_22:
    *_errno() = 22;
    return -1;
  }
  for ( i = 0; i < v8; ++i )
  {
    if ( Str1[i] < 0 )
      goto LABEL_12;
  }
  v13 = (unsigned int)v12[1];
  qmemcpy(v24, (&off_4733C0)[4 * v21], v13);
  if ( v20 == 1 )
    v24[v13++] = 14;
  qmemcpy(&v24[v13], Str1, v8);
  v14 = *a1;
  if ( (unsigned int)(*a1 - 50220) <= 2 && v20 == 1 )
  {
    v13 = dword_4733E4;
    v15 = dword_4733E4;
    qmemcpy(v24, off_4733E0, dword_4733E4);
    qmemcpy(&v24[v15], Str1, v8);
  }
  v16 = v13 + v8;
  v22 = v13 + v8;
  if ( dword_4730F4(&v23, v14, v24, &v22, a4, a5) != 0
    || v16 != v22
    || (v17 = a1[6], *a4 == (unsigned __int8)*Str1) && v17 != 0 )
  {
LABEL_12:
    *_errno() = 42;
    return -1;
  }
  v18 = v20 | (v21 << 8);
  if ( v18 != v17 )
    a1[6] = v18;
  return v8;
}

