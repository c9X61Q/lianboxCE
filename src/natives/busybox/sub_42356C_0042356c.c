// busybox.exe @ 0x42356c size=96

char __usercall sub_42356C@<al>(int *a1@<eax>, unsigned int *a2@<edx>, unsigned int a3@<ecx>)
{
  char v3; // bl
  unsigned int v4; // ebx
  unsigned int v5; // esi
  unsigned int v6; // edx
  int v7; // edi
  int v8; // esi
  unsigned int v9; // edx

  v3 = 0;
  if ( a1[3] > a3 && a1[6] > a3 )
  {
    v4 = a1[4] - a1[2];
    if ( v4 > *a2 )
      v4 = *a2;
    *a2 -= v4;
    v5 = a1[2];
    v6 = v5 + ~a3;
    if ( v5 <= a3 )
      v6 += a1[5];
    do
    {
      v7 = *a1;
      v8 = a1[2];
      a1[2] = v8 + 1;
      *(_BYTE *)(v7 + v8) = *(_BYTE *)(v7 + v6++);
      if ( a1[5] == v6 )
        v6 = 0;
      --v4;
    }
    while ( v4 != 0 );
    v9 = a1[2];
    v3 = 1;
    if ( a1[3] < v9 )
      a1[3] = v9;
  }
  return v3;
}

