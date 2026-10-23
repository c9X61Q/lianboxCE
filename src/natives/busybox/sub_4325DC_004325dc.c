// busybox.exe @ 0x4325dc size=134

unsigned int __usercall sub_4325DC@<eax>(int *a1@<eax>)
{
  int v2; // eax
  int v3; // eax
  int v4; // ebp
  int v5; // edx
  unsigned int v6; // ecx
  unsigned int v7; // eax
  unsigned int v8; // ecx
  int v9; // edi
  unsigned int v10; // esi

  if ( *a1 == 0 )
  {
    v2 = getpid();
    a1[2] = v2;
    *a1 = v2;
    v3 = sub_445734();
    a1[3] = v3;
    a1[1] = v3;
  }
  v4 = 1664525 * a1[1] + 1013904223;
  a1[1] = v4;
  v5 = 2 * *a1;
  if ( *a1 < 0 )
    v5 ^= 0x8000000B;
  *a1 = v5;
  v6 = a1[2];
  v7 = a1[3];
  while ( 1 )
  {
    v8 = (4 * v6) ^ v6;
    v9 = v8 ^ v7 ^ (v7 >> 3);
    v10 = v8 >> 7;
    v6 = v7;
    v7 = v10 ^ v9;
    if ( v9 != v10 )
      break;
    if ( v6 > 2 )
    {
      a1[2] = v6;
      a1[3] = v7;
      v7 = 0;
      return v5 - v4 + v7;
    }
  }
  a1[2] = v6;
  a1[3] = v7;
  return v5 - v4 + v7;
}

