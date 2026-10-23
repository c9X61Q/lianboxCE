// busybox.exe @ 0x451fb4 size=159

int __usercall sub_451FB4@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int *a3@<ecx>)
{
  int v5; // ecx
  int v6; // esi
  int v7; // eax
  unsigned int i; // esi
  int v9; // ecx
  unsigned int *v10; // ebp
  unsigned int v11; // edi
  int v12; // edx
  int v13; // eax
  char v15; // [esp+8h] [ebp-18h]
  char v16; // [esp+Ch] [ebp-14h]

  sub_4510E4(a1, a3);
  if ( a2 > 31 )
    sub_451890(a3, 1, v5);
  v6 = a2 & 0x1F;
  v15 = v6;
  if ( v6 != 0 )
  {
    v16 = 32 - v6;
    v7 = 0;
    for ( i = 0; ; i = v11 >> v16 )
    {
      v9 = *a3;
      if ( *a3 <= v7 )
        break;
      v10 = (unsigned int *)(a3[3] + 4 * v7);
      v11 = *v10;
      *v10 = (*v10 << v15) + i;
      ++v7;
    }
    if ( i != 0 && v7 <= 4095 )
    {
      if ( v9 == a3[1] )
        sub_451814((int)a3, v9 + 1, v9);
      v12 = a3[3];
      v13 = (*a3)++;
      *(_DWORD *)(v12 + 4 * v13) = i;
    }
  }
  sub_45100C(a3);
  return 0;
}

