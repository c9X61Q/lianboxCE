// busybox.exe @ 0x46443c size=302

int *__usercall sub_46443C@<eax>(_BYTE *a1@<eax>, unsigned int *a2@<edx>, int *a3@<ecx>)
{
  unsigned int v3; // eax
  unsigned int v4; // ebp
  int v5; // ebx
  unsigned int v6; // edx
  unsigned int v7; // eax
  _BYTE *v8; // esi
  unsigned int v9; // edi
  unsigned int i; // esi
  void *v11; // eax
  signed int v12; // edi
  signed int v13; // esi
  signed int k; // ecx
  unsigned __int8 v15; // al
  int v16; // eax
  int v17; // ecx
  unsigned int j; // [esp+4h] [ebp-1Ch]

  v3 = sub_418A48((unsigned int)a1);
  v4 = v3;
  v5 = dword_486010;
  v6 = *(_DWORD *)(dword_486010 + 68);
  if ( v6 <= v3 )
  {
    v11 = sub_4298F8();
    if ( v4 <= (unsigned int)v11 )
      goto LABEL_4;
    v7 = sub_41F7C0((unsigned int)v11, v4);
    if ( (unsigned int)(*(_DWORD *)(v5 + 36) - 1) >> 1 >= v7 )
    {
      v12 = 0;
      v13 = v7 - 1;
      while ( v13 > v12 )
      {
        *(_DWORD *)(v5 + 68) = sub_446708(*(void **)(v5 + 68));
        ++v12;
      }
      goto LABEL_4;
    }
  }
  else
  {
    v7 = sub_41F7C0(v3, v6);
  }
  *(_DWORD *)(v5 + 68) = v4;
  if ( (unsigned int)(*(_DWORD *)(v5 + 36) - 1) >> 1 < v7 )
  {
    for ( i = 0; (unsigned int)(*(_DWORD *)(v5 + 36) - 1) >> 1 > i; ++i )
      *(_DWORD *)(v5 + 68) = sub_44DC1C(*(_DWORD *)(v5 + 68));
  }
LABEL_4:
  v8 = *(_BYTE **)(v5 + 68);
  v9 = *(_DWORD *)(v5 + 36) - 1;
  for ( j = 0; v8 != (_BYTE *)v4 && v9 > j; ++j )
    v8 = sub_446708(v8);
  for ( k = 0; v8 < a1; ++k )
  {
    v15 = *v8;
    if ( *v8 == 10 )
      break;
    if ( v15 == 9 )
    {
      k += *(_DWORD *)(v5 + 80) - 1 - k % *(_DWORD *)(v5 + 80);
    }
    else if ( v15 == 127 || v15 <= 0x1Fu )
    {
      ++k;
    }
    ++v8;
  }
  if ( *(_DWORD *)(v5 + 52) > k )
    *(_DWORD *)(v5 + 52) = k;
  v16 = *(_DWORD *)(v5 + 40);
  if ( v16 + *(_DWORD *)(v5 + 52) <= (unsigned int)k )
    *(_DWORD *)(v5 + 52) = k - v16 + 1;
  if ( a1 == (_BYTE *)v4 && *a1 == 9 )
    *(_DWORD *)(v5 + 52) = 0;
  v17 = k - *(_DWORD *)(v5 + 52);
  *a2 = j;
  *a3 = v17;
  return a3;
}

