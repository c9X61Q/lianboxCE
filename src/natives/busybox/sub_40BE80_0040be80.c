// busybox.exe @ 0x40be80 size=171

int __usercall sub_40BE80@<eax>(_DWORD *a1@<eax>, _TBYTE a2)
{
  int v3; // eax
  int v4; // eax
  char *v5; // eax
  char *v6; // esi
  int v8; // [esp+28h] [ebp-24h] BYREF
  int v9; // [esp+2Ch] [ebp-20h] BYREF
  int v10[3]; // [esp+30h] [ebp-1Ch]
  int v11; // [esp+3Ch] [ebp-10h]

  v3 = a1[3];
  if ( v3 < 0 )
  {
    a1[3] = 6;
    v4 = 7;
  }
  else
  {
    v4 = v3 + 1;
  }
  *(double *)v10 = *(double *)&a2;
  v5 = (char *)sub_40B030(2, *(double *)&a2, v10[2], v11, v4, (int)&v9, &v8);
  v6 = v5;
  if ( v9 == -32768 )
    sub_40B3E0(v8, (int)v5, (int)a1);
  else
    sub_40BDA0(v8, v5, v9, a1);
  return sub_40D590(v6);
}

