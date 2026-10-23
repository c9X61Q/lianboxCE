// busybox.exe @ 0x451890 size=88

int __usercall sub_451890@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // edx
  int v6; // eax
  int v7; // ecx
  int v8; // edx
  int v9; // ebp
  int i; // eax
  int v11; // eax

  if ( a2 <= 0 )
    return 0;
  v5 = a2 + *a1;
  if ( a1[1] < v5 )
    sub_451814((int)a1, v5, a3);
  v6 = *a1;
  v7 = *a1 + a2;
  *a1 = v7;
  v8 = a1[3];
  v9 = v8 + 4 * v6 - 4;
  for ( i = 0; ; *(_DWORD *)(v8 + 4 * v7 + 4 * i) = *(_DWORD *)(v9 + 4 * i + 4) )
  {
    --i;
    if ( a2 > v7 + i )
      break;
  }
  v11 = 0;
  do
    *(_DWORD *)(v8 + 4 * v11++) = 0;
  while ( a2 != v11 );
  return 0;
}

