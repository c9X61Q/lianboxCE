// busybox.exe @ 0x410100 size=216

int *__cdecl sub_410100(int *a1, int a2, int a3)
{
  int v3; // ecx
  __int64 v4; // rdi
  unsigned __int64 v5; // rax
  int *v6; // ebp
  int *v8; // eax
  __int64 v9; // [esp+10h] [ebp-2Ch]
  int v10; // [esp+1Ch] [ebp-20h]

  v3 = 0;
  HIDWORD(v4) = a3;
  LODWORD(v4) = a3 >> 31;
  v10 = a1[4];
  LODWORD(v9) = a2;
  do
  {
    HIDWORD(v9) = a2 >> 31;
    v5 = __PAIR64__(v4, HIDWORD(v4)) + v9 * (unsigned int)a1[v3 + 5];
    a1[v3 + 5] = v5;
    LODWORD(v4) = 0;
    ++v3;
    HIDWORD(v4) = HIDWORD(v5);
  }
  while ( v10 > v3 );
  v6 = a1;
  if ( v4 != 0 )
  {
    if ( a1[2] <= v10 )
    {
      v8 = sub_40FFB0(a1[1] + 1);
      v6 = v8;
      if ( v8 != nullptr )
      {
        memcpy(v8 + 3, a1 + 3, 4 * a1[4] + 8);
        sub_4100A0(a1);
        v6[v10 + 5] = HIDWORD(v4);
        v6[4] = v10 + 1;
      }
    }
    else
    {
      v6 = a1;
      a1[v10 + 5] = HIDWORD(v5);
      a1[4] = v10 + 1;
    }
  }
  return v6;
}

