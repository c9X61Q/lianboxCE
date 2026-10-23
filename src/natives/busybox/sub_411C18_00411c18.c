// busybox.exe @ 0x411c18 size=215

int __usercall sub_411C18@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4@<edi>)
{
  int v6; // edx
  int result; // eax
  int v8; // ecx
  int v9; // ecx
  char v10; // cl
  _BYTE *v11; // edx

  if ( *(int *)(a1 + 52) > 0 )
  {
    v6 = ~*(_DWORD *)(a1 + 80);
    *(_DWORD *)(a1 + 80) = v6;
    *(_DWORD *)(a1 + 84) = v6 ^ __ROL4__(*(_DWORD *)(a1 + 84), 1);
    if ( *(int *)(a1 + 88) > 1 )
      *(_DWORD *)(a1 + 60) = *(_DWORD *)(a1 + 40);
    a4 = sub_411BBC((_DWORD *)a1, a2);
  }
  result = *(_DWORD *)(a1 + 12) + *(_DWORD *)(a1 + 52);
  *(_DWORD *)(a1 + 40) = result;
  *(_DWORD *)(a1 + 60) = result;
  *(_DWORD *)(a1 + 64) = result;
  if ( *(_DWORD *)(a1 + 88) == 1 )
  {
    *(_DWORD *)(a1 + 72) = 0;
    *(_DWORD *)(a1 + 68) = 0;
    result = sub_418D84(a3, *(unsigned __int8 *)(a1 + 6) + 1113221168);
  }
  if ( *(int *)(a1 + 52) > 0 )
  {
    sub_418D84(a3, 826366246);
    sub_418DE0();
    sub_418D84(v8, *(_DWORD *)(a1 + 80));
    sub_418E20();
    sub_418D98(a4, 24);
    sub_432CD4();
    result = sub_45D208();
  }
  if ( a2 != 0 )
  {
    sub_418D84(a3, 393364792);
    sub_418DE0();
    for ( result = sub_418D84(v9, *(_DWORD *)(a1 + 84)); *(int *)(result + 72) > 0; *(_DWORD *)(result + 72) -= 8 )
    {
      v10 = *(_BYTE *)(result + 71);
      v11 = *(_BYTE **)(result + 60);
      *(_DWORD *)(result + 60) = v11 + 1;
      *v11 = v10;
      *(_DWORD *)(result + 68) <<= 8;
    }
  }
  return result;
}

