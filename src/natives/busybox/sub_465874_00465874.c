// busybox.exe @ 0x465874 size=177

int __usercall sub_465874@<eax>(char *a1@<eax>, signed int a2@<edx>)
{
  int *v4; // ebx
  unsigned int v5; // eax
  int v6; // ecx
  int v7; // edx
  int v8; // edx
  int v9; // eax
  int i; // ecx
  int v11; // edi
  int v13; // [esp+Ch] [ebp-14h]

  if ( a2 <= 0 )
    return 0;
  v4 = (int *)dword_486010;
  v5 = a2 + *(_DWORD *)(dword_486010 + 4);
  *(_DWORD *)(dword_486010 + 4) = v5;
  v6 = *v4;
  v7 = 0;
  if ( v5 >= *v4 + v4[3] )
  {
    v8 = v5 - *v4 + 10240;
    v4[3] = v8;
    v9 = sub_471600(v6, v8);
    v7 = v9 - *v4;
    v4[17] += v7;
    v4[2] += v7;
    v4[1] += v7;
    for ( i = 0; i != 28; ++i )
    {
      v11 = v4[i + 59];
      if ( v11 != 0 )
        v4[i + 59] = v7 + v11;
    }
    a1 += v7;
    *v4 = v9;
  }
  v13 = v7;
  memmove(&a1[a2], a1, v4[1] - a2 - (_DWORD)a1);
  memset(a1, 32, a2);
  return v13;
}

