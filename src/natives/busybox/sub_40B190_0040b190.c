// busybox.exe @ 0x40b190 size=287

int __usercall sub_40B190@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // eax
  int result; // eax
  int v7; // eax
  char *v8; // ebx
  char *v9; // edi
  int v10; // eax
  int v11; // eax
  int i; // [esp+1Ch] [ebp-14h]
  _BYTE v14[40]; // [esp+30h] [ebp+0h] BYREF

  sub_411260(v14, 0);
  v5 = *(_DWORD *)(a3 + 12);
  if ( v5 >= 0 && a2 > v5 )
    a2 = *(_DWORD *)(a3 + 12);
  result = *(_DWORD *)(a3 + 8);
  if ( result <= a2 )
  {
    *(_DWORD *)(a3 + 8) = -1;
    goto LABEL_6;
  }
  v11 = result - a2;
  *(_DWORD *)(a3 + 8) = v11;
  if ( (*(_BYTE *)(a3 + 5) & 4) == 0 )
  {
    *(_DWORD *)(a3 + 8) = v11 - 1;
    do
    {
      sub_40B130(32, a3);
      result = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 8) = result - 1;
    }
    while ( result != 0 );
LABEL_6:
    if ( a2 <= 0 )
    {
      *(_DWORD *)(a3 + 8) = -2;
      return result;
    }
    goto LABEL_7;
  }
  if ( a2 <= 0 )
  {
    *(_DWORD *)(a3 + 8) = v11 - 1;
    do
    {
LABEL_13:
      sub_40B130(32, a3);
LABEL_14:
      result = *(_DWORD *)(a3 + 8);
      *(_DWORD *)(a3 + 8) = result - 1;
    }
    while ( result > 0 );
    return result;
  }
LABEL_7:
  for ( i = a2; i != 0; --i )
  {
    a1 += 2;
    v7 = sub_411260(v14, *(unsigned __int16 *)(a1 - 2));
    if ( v7 <= 0 )
      goto LABEL_14;
    v8 = &v14[v7];
    v9 = v14;
    do
    {
      v10 = *v9++;
      sub_40B130(v10, a3);
    }
    while ( v9 != v8 );
  }
  result = *(_DWORD *)(a3 + 8);
  *(_DWORD *)(a3 + 8) = result - 1;
  if ( result > 0 )
    goto LABEL_13;
  return result;
}

