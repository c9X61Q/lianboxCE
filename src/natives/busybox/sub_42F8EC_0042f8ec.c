// busybox.exe @ 0x42f8ec size=167

int __usercall sub_42F8EC@<eax>(_DWORD *a1@<eax>, int a2@<edx>, unsigned int *a3@<ecx>, unsigned int a4)
{
  int v6; // ecx
  int v7; // ecx
  __int64 v8; // rax
  int v9; // eax

  while ( *a3 < a4 )
  {
    if ( a1[12] >= a1[13] )
    {
      v6 = a1[10];
      if ( *((_QWORD *)a1 + 5) > 0x3FFBu )
        v6 = 16380;
      v7 = sub_45C560(v6, (LPSTR)(a1[9] + 4));
      a1[13] = v7;
      if ( v7 <= 0 )
      {
        a1[30] = "unexpected end of file";
        sub_412BD8(a1);
      }
      v8 = *((_QWORD *)a1 + 5);
      if ( v8 >= 0 )
        *((_QWORD *)a1 + 5) = v8 - (unsigned int)v7;
      a1[13] = v7 + 4;
      a1[12] = 4;
    }
    v9 = a1[12];
    a2 |= *(unsigned __int8 *)(a1[9] + v9) << *a3;
    a1[12] = v9 + 1;
    *a3 += 8;
  }
  return a2;
}

