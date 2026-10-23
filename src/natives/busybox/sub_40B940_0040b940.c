// busybox.exe @ 0x40b940 size=203

int __usercall sub_40B940@<eax>(int a1@<eax>, _TBYTE a2)
{
  int v3; // eax
  char *v4; // eax
  char *v5; // esi
  int v6; // eax
  int v8; // [esp+28h] [ebp-24h] BYREF
  int v9; // [esp+2Ch] [ebp-20h] BYREF
  int v10[3]; // [esp+30h] [ebp-1Ch]
  int v11; // [esp+3Ch] [ebp-10h]

  v3 = *(_DWORD *)(a1 + 12);
  if ( v3 < 0 )
  {
    *(_DWORD *)(a1 + 12) = 6;
    v3 = 6;
  }
  *(double *)v10 = *(double *)&a2;
  v4 = (char *)sub_40B030(3, *(double *)&a2, v10[2], v11, v3, (int)&v9, &v8);
  v5 = v4;
  if ( v9 == -32768 )
  {
    sub_40B3E0(v8, (int)v4, a1);
    return sub_40D590(v5);
  }
  else
  {
    sub_40B590(v8, v4, v9, a1);
    while ( 1 )
    {
      v6 = *(_DWORD *)(a1 + 8);
      *(_DWORD *)(a1 + 8) = v6 - 1;
      if ( v6 <= 0 )
        break;
      sub_40B130(32, a1);
    }
    return sub_40D590(v5);
  }
}

