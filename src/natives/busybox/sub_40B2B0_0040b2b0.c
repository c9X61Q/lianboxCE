// busybox.exe @ 0x40b2b0 size=201

int __usercall sub_40B2B0@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edi
  int v5; // eax
  int result; // eax
  char *v8; // edi
  int v9; // eax
  int v10; // eax

  v3 = a2;
  v5 = *(_DWORD *)(a3 + 12);
  if ( v5 >= 0 && a2 > v5 )
    v3 = *(_DWORD *)(a3 + 12);
  result = *(_DWORD *)(a3 + 8);
  if ( result <= v3 )
  {
    *(_DWORD *)(a3 + 8) = -1;
    if ( v3 != 0 )
      goto LABEL_6;
LABEL_18:
    *(_DWORD *)(a3 + 8) = -2;
    return result;
  }
  v10 = result - v3;
  *(_DWORD *)(a3 + 8) = v10;
  if ( (*(_BYTE *)(a3 + 5) & 4) != 0 )
  {
    if ( v3 == 0 )
    {
      *(_DWORD *)(a3 + 8) = v10 - 1;
      do
      {
LABEL_9:
        sub_40B130(32, a3);
        result = *(_DWORD *)(a3 + 8);
        *(_DWORD *)(a3 + 8) = result - 1;
      }
      while ( result > 0 );
      return result;
    }
  }
  else
  {
    *(_DWORD *)(a3 + 8) = v10 - 1;
    do
    {
      sub_40B130(32, a3);
      result = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 8) = result - 1;
    }
    while ( result != 0 );
    if ( v3 == 0 )
      goto LABEL_18;
  }
LABEL_6:
  v8 = &a1[v3];
  do
  {
    v9 = *a1++;
    sub_40B130(v9, a3);
  }
  while ( a1 != v8 );
  result = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = result - 1;
  if ( result > 0 )
    goto LABEL_9;
  return result;
}

