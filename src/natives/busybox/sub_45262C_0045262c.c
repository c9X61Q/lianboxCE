// busybox.exe @ 0x45262c size=125

int __usercall sub_45262C@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v4; // ebx
  char *v5; // edx
  int i; // eax
  char v7; // bl
  int v9[7]; // [esp+8h] [ebp-1Ch] BYREF

  memset(v9, 0, 0x10u);
  sub_451864(v9, a1[1], 0);
  sub_4510E4(a1, v9);
  v4 = 0;
  while ( 1 )
  {
    v5 = (char *)v9[0];
    if ( v9[0] == 0 )
      break;
    ++v4;
    *(_BYTE *)(a2 + v4 - 1) = *(_DWORD *)v9[3];
    sub_45115C(v9, 8, v9);
  }
  for ( i = v4 - 1; (int)v5 < i; --i )
  {
    v7 = v5[a2];
    v5[a2] = *(_BYTE *)(a2 + i);
    *(_BYTE *)(a2 + i) = v7;
    ++v5;
  }
  sub_45102C(v9, v5);
  return 0;
}

