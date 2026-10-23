// busybox.exe @ 0x430668 size=525

int __cdecl sub_430668(char a1, _DWORD *a2)
{
  _DWORD *v2; // edx
  int *v3; // ebx
  int *v4; // ecx
  int v5; // esi
  char v6; // al
  size_t v7; // eax
  char v8; // al
  u_long i; // esi
  char *v10; // eax
  char v11; // dl
  int v12; // ecx
  int j; // esi
  int v14; // eax
  char *v15; // edi
  _DWORD **v16; // esi
  int v17; // ebx
  BOOL v18; // eax
  char v19; // al
  _DWORD *v21; // [esp+10h] [ebp-74h]
  _DWORD v22[28]; // [esp+14h] [ebp-70h] BYREF

  v22[24] = &a1;
  v2 = a2;
  memset(&MultiByteStr, 0, 0x17u);
  *(&NumOfElements + 1) = 0x7FFFFFFF;
  qword_485BF8 = 30720;
  *((_BYTE *)&qword_485BF0 + 4) = 1;
  *((_BYTE *)&qword_485BF0 + 7) = 1;
  v3 = a2;
  do
  {
    v4 = v3++;
    v5 = *v3;
    if ( *v3 == 0 )
      break;
    if ( *(_BYTE *)v5 != 45 )
      break;
    v6 = *(_BYTE *)(v5 + 1);
    if ( v6 == 0 )
      break;
    if ( v6 == 45 && *(_BYTE *)(v5 + 2) == 0 )
    {
      v5 = v3[1];
      v3 = v4 + 2;
      break;
    }
    v21 = v2;
    v7 = strspn((const char *)(v5 + 1), "HLP");
    v2 = v21;
  }
  while ( *(_BYTE *)(v5 + v7 + 1) == 0 );
  *v3 = 0;
  v8 = sub_435D44(v2, "+HLP");
  if ( (v8 & 1) != 0 )
    *((_BYTE *)&qword_485BF0 + 7) |= 0x44u;
  if ( (v8 & 2) != 0 )
    *((_BYTE *)&qword_485BF0 + 7) |= 0x42u;
  *v3 = v5;
  for ( i = 0; ; ++i )
  {
    v10 = (char *)v3[i];
    if ( v10 == nullptr )
      break;
    v11 = *v10;
    if ( *v10 == 45 )
      break;
    if ( (v11 == 33 || v11 == 40) && v10[1] == 0 )
      break;
  }
  if ( i == 0 )
  {
    *--v3 = (int)".";
    i = 1;
  }
  qword_485BF0 = (char *)sub_44ADA8();
  v3[i] = 0;
  if ( *((_BYTE *)&qword_485BF0 + 5) != 0 )
  {
    *(&MultiByteStr + 1) = i;
    MultiByteStr = sub_4728CC();
    for ( j = 0; ; ++j )
    {
      v14 = v3[j];
      if ( v14 == 0 )
        break;
      if ( sub_444C28(v14, v22) == 0 )
        *(_DWORD *)(MultiByteStr + j * 4) = v22[0];
    }
  }
  while ( *v3 != 0 )
  {
    if ( sub_45927C(sub_42F364, 0, 0) == 0 )
      *((_BYTE *)&qword_485BF0 + 6) |= 1u;
    ++v3;
  }
  v15 = qword_485BF0;
  while ( 1 )
  {
    v15 += 4;
    v16 = *((_DWORD ***)v15 - 1);
    if ( v16 == nullptr )
      break;
    while ( 1 )
    {
      v17 = (int)*v16;
      if ( *v16 == nullptr )
        break;
      if ( *(_UNKNOWN **)v17 == &sub_432840 && *(_DWORD *)(v17 + 24) != 0 )
      {
        v18 = sub_42692C(*v16, nullptr, v12);
        if ( *(_BYTE *)(v17 + 4) != 0 )
          v18 = !v18;
        if ( !v18 )
        {
          v19 = 1;
          goto LABEL_44;
        }
      }
      ++v16;
    }
  }
  v19 = 0;
LABEL_44:
  *((_BYTE *)&qword_485BF0 + 6) |= v19;
  return *((unsigned __int8 *)&qword_485BF0 + 6);
}

