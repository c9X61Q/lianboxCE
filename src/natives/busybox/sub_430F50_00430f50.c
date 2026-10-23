// busybox.exe @ 0x430f50 size=512

int __usercall sub_430F50@<eax>(_BYTE *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int *v5; // ebx
  int i; // ebp
  int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // eax
  _BYTE *v10; // esi
  int v11; // eax
  int v12; // ecx
  int v13; // ecx
  int v14; // eax
  int v15; // ecx
  int v16; // ecx
  int v17; // ecx
  int v18; // ecx
  int v19; // edi
  int result; // eax
  unsigned int v22; // [esp+4h] [ebp-1Ch]

  v5 = (int *)dword_486010;
  *(_BYTE *)(dword_486010 + *(_DWORD *)(dword_486010 + 10952) + 6848) = *(_BYTE *)(dword_486010 + 10956);
  sub_419C44(v5 + 1280);
  sub_419C44(v5 + 1287);
  sub_45CA18();
  sub_45CA18();
  sub_419C44(v5 + 1294);
  for ( i = 18; i != 2; --i )
  {
    if ( HIWORD(v5[(unsigned __int8)byte_47E000[i] + 1241]) != 0 )
      break;
  }
  v7 = v5[2740];
  v5[2740] = v7 + 3 * (i + 1) + 14;
  v8 = (unsigned int)(v7 + 3 * (i + 1) + 24) >> 3;
  v9 = (unsigned int)(v5[2741] + 10) >> 3;
  v22 = v8;
  if ( v8 > v9 )
    v22 = (unsigned int)(v5[2741] + 10) >> 3;
  if ( v22 >= a2 + 4 && a1 != nullptr )
  {
    sub_45D9D8(v8, 3);
    sub_418A74();
    sub_452990();
    v10 = &a1[a2];
    while ( 1 )
    {
      v11 = *(v5 - 4);
      if ( a1 == v10 )
        break;
      v12 = *(v5 - 20);
      *(v5 - 4) = v11 + 1;
      *(_BYTE *)(v12 + v11) = *a1;
      if ( *(v5 - 4) == 0x4000 )
        sub_431150();
      ++a1;
    }
    if ( (v11 & 3) != 0 )
      sub_431150();
  }
  else
  {
    if ( v8 < v9 )
    {
      sub_45D9D8(v8, 3);
      sub_45D9D8(v15, 5);
      sub_45D9D8(v16, 5);
      sub_45D9D8(v17, 4);
      v19 = 0;
      do
      {
        sub_45D9D8(v18, 3);
        ++v19;
      }
      while ( i >= v19 );
      sub_45E0D4();
      sub_45E0D4();
      v14 = (int)(v5 + 289);
    }
    else
    {
      sub_45D9D8(v8, 3);
      v14 = (int)(v5 + 923);
    }
    sub_41E860(v14, v13);
  }
  result = sub_43AB68();
  if ( a3 != 0 )
    return sub_418A74();
  return result;
}

