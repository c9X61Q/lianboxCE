// busybox.exe @ 0x419f8c size=143

int __usercall sub_419F8C@<eax>(_DWORD *a1@<eax>)
{
  int v2; // eax
  int v3; // edi
  int i; // esi
  int v5; // edx
  int v6; // eax
  int v7; // eax
  int v8; // ebp
  int v9; // eax
  int result; // eax
  int v11; // [esp+4h] [ebp-1Ch]
  int C; // [esp+8h] [ebp-18h]
  char v13; // [esp+Fh] [ebp-11h]

  v2 = a1[8];
  v3 = a1[5];
  if ( v3 > v2 )
    v3 = v2;
  v11 = a1[3];
  for ( i = v11; i < v3; ++i )
  {
    v5 = *(unsigned __int8 *)(a1[2] + i + *a1);
    v6 = a1[12];
    if ( v6 != 0 )
      LOBYTE(v5) = *(_BYTE *)(v6 + v5);
    v13 = v5;
    C = (unsigned __int8)v5;
    v7 = islower((unsigned __int8)v5);
    v8 = a1[1];
    if ( v7 != 0 )
      *(_BYTE *)(v8 + i) = toupper(C);
    else
      *(_BYTE *)(v8 + i) = v13;
  }
  v9 = 0;
  if ( v3 >= v11 )
    v9 = v3 - v11;
  result = v11 + v9;
  a1[3] = result;
  a1[4] = result;
  return result;
}

