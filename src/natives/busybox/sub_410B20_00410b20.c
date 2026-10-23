// busybox.exe @ 0x410b20 size=255

int *__cdecl sub_410B20(int a1, int a2, int a3, int a4, int a5)
{
  int v5; // esi
  int v6; // eax
  int v7; // ecx
  int *result; // eax
  char *v9; // ebp
  int v10; // ecx
  char *v11; // ebp
  char *v12; // ebx
  int v13; // edx

  v5 = a2;
  if ( a3 <= 9 )
  {
    v7 = 0;
  }
  else
  {
    v6 = 1;
    v7 = 0;
    do
    {
      v6 *= 2;
      ++v7;
    }
    while ( (a3 + 8) / 9 > v6 );
  }
  result = sub_40FFB0(v7);
  result[4] = 1;
  result[5] = a4;
  if ( a2 <= 9 )
  {
    v11 = (char *)(a1 + a5 + 9);
    v5 = 9;
  }
  else
  {
    v9 = (char *)(a1 + 9);
    do
    {
      v10 = *v9++;
      result = sub_410100(result, 10, v10 - 48);
    }
    while ( v9 != (char *)(a2 + a1) );
    v11 = (char *)(a1 + a2 + a5);
  }
  if ( a3 > v5 )
  {
    v12 = &v11[a3 - v5];
    do
    {
      v13 = *v11++;
      result = sub_410100(result, 10, v13 - 48);
    }
    while ( v12 != v11 );
  }
  return result;
}

