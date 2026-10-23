// busybox.exe @ 0x446afc size=195

int __usercall sub_446AFC@<eax>(_BYTE *a1@<eax>)
{
  unsigned __int8 *v2; // ebx
  _BYTE *v3; // eax
  int result; // eax
  char v5; // dl
  unsigned __int8 v6; // dl
  int v7; // esi
  int *v8; // edx
  int v9; // ecx

  v2 = (unsigned __int8 *)dword_4734CC;
  if ( dword_4734CC == 0 || *(_BYTE *)dword_4734CC == 0 )
  {
    v3 = *(_BYTE **)dword_47310C;
    if ( *(_DWORD *)dword_47310C == 0 )
      return 0;
    if ( *v3 != 45 )
      return 0;
    v2 = v3 + 1;
    v5 = v3[1];
    if ( v5 == 0 )
      return 0;
    dword_47310C += 4;
    if ( v5 == 45 && v3[2] == 0 )
      return 0;
  }
  v6 = *v2;
  while ( *a1 != v6 )
  {
    if ( *a1 == 0 )
      sub_415B40((int)a1, "illegal option -%c", *v2);
    if ( a1[1] == 58 )
      a1 += 2;
    else
      ++a1;
  }
  v7 = (int)(v2 + 1);
  result = v6;
  if ( a1[1] == 58 )
  {
    if ( v2[1] == 0 )
    {
      v8 = (int *)dword_47310C;
      v9 = dword_47310C + 4;
      dword_47310C += 4;
      v7 = *v8;
      if ( *v8 == 0 )
        sub_415B40(v9, "no arg for -%c option", result);
    }
    dword_4734C8 = v7;
    v7 = 0;
  }
  dword_4734CC = v7;
  return result;
}

