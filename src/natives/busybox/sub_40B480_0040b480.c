// busybox.exe @ 0x40b480 size=270

int __usercall sub_40B480@<eax>(int a1@<eax>)
{
  __int16 v2; // cx
  void *v3; // esp
  char *v4; // ebx
  int v5; // ecx
  int v6; // eax
  char *v7; // esi
  int v8; // eax
  int result; // eax
  struct lconv *v10; // eax
  int v11; // eax
  int v12[3]; // [esp+0h] [ebp-48h] BYREF
  _BYTE v13[12]; // [esp+10h] [ebp-38h] BYREF
  int *v14; // [esp+1Ch] [ebp-2Ch]
  _WORD v15[3]; // [esp+26h] [ebp-22h] BYREF
  int v16; // [esp+2Ch] [ebp-1Ch]

  if ( *(_DWORD *)(a1 + 16) == -3 )
  {
    *(_DWORD *)&v15[1] = 0;
    v16 = 0;
    v10 = localeconv();
    v11 = sub_410FC0((int)v15, v10->decimal_point, 16, (int)&v15[1]);
    if ( v11 <= 0 )
    {
      v2 = *(_WORD *)(a1 + 20);
    }
    else
    {
      v2 = v15[0];
      *(_WORD *)(a1 + 20) = v15[0];
    }
    *(_DWORD *)(a1 + 16) = v11;
  }
  else
  {
    v2 = *(_WORD *)(a1 + 20);
  }
  if ( v2 == 0 )
    return sub_40B130(46, a1);
  v14 = v12;
  v3 = alloca(sub_4115D8());
  *(_DWORD *)&v15[1] = 0;
  v4 = v13;
  v16 = 0;
  v12[2] = (int)&v15[1];
  v6 = sub_411260(v13, v5);
  if ( v6 <= 0 )
    return sub_40B130(46, a1);
  v7 = &v13[v6];
  do
  {
    v8 = *v4++;
    result = sub_40B130(v8, a1);
  }
  while ( v4 != v7 );
  return result;
}

