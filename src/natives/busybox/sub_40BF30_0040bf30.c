// busybox.exe @ 0x40bf30 size=392

int __usercall sub_40BF30@<eax>(_DWORD *a1@<eax>, _TBYTE a2)
{
  int v3; // eax
  int v4; // eax
  int v5; // edi
  char *Str; // esi
  int v7; // eax
  int v8; // edx
  int v9; // eax
  int v11; // eax
  int v12; // eax
  int v13; // edx
  int v14; // [esp+28h] [ebp-24h] BYREF
  int v15; // [esp+2Ch] [ebp-20h] BYREF
  int v16[3]; // [esp+30h] [ebp-1Ch]
  int v17; // [esp+3Ch] [ebp-10h]

  v3 = a1[3];
  if ( v3 < 0 )
  {
    a1[3] = 6;
    v3 = 6;
  }
  else if ( v3 == 0 )
  {
    a1[3] = 1;
    v3 = 1;
  }
  *(double *)v16 = *(double *)&a2;
  v4 = sub_40B030(2, *(double *)&a2, v16[2], v17, v3, (int)&v15, &v14);
  v5 = v15;
  Str = (char *)v4;
  if ( v15 == -32768 )
  {
    sub_40B3E0(v14, v4, (int)a1);
    return sub_40D590(Str);
  }
  else
  {
    v7 = a1[1] & 0x800;
    if ( v15 < -3 || (v8 = a1[3], v15 > v8) )
    {
      if ( v7 != 0 )
        v11 = a1[3] - 1;
      else
        v11 = strlen(Str) - 1;
      a1[3] = v11;
      sub_40BDA0(v14, Str, v5, a1);
      return sub_40D590(Str);
    }
    else
    {
      if ( v7 != 0 )
      {
        a1[3] = v8 - v15;
      }
      else
      {
        v12 = strlen(Str) - v15;
        a1[3] = v12;
        if ( v12 < 0 )
        {
          v13 = a1[2];
          if ( v13 > 0 )
            a1[2] = v13 + v12;
        }
      }
      sub_40B590(v14, Str, v5, (int)a1);
      while ( 1 )
      {
        v9 = a1[2];
        a1[2] = v9 - 1;
        if ( v9 <= 0 )
          break;
        sub_40B130(32, (int)a1);
      }
      return sub_40D590(Str);
    }
  }
}

