// busybox.exe @ 0x460754 size=501

void __cdecl __noreturn sub_460754(int a1, int a2)
{
  int v2; // ecx
  char v3; // di
  int *i; // ebx
  unsigned int v5; // esi
  char *v6; // eax
  char *v7; // ebx
  unsigned int v8; // ebp
  unsigned int v9; // eax
  int *v10; // eax
  int v11; // ebp
  unsigned int v12; // eax
  unsigned int j; // ebp
  int v14; // eax
  unsigned int v15; // edx
  int *v16; // eax
  unsigned int v17; // eax
  int *v18; // ebp
  char *Str; // [esp+0h] [ebp-34h]
  int Val; // [esp+4h] [ebp-30h]
  int Vala; // [esp+4h] [ebp-30h]
  int v22; // [esp+8h] [ebp-2Ch]
  unsigned int v23; // [esp+14h] [ebp-20h]
  FILE *v24; // [esp+14h] [ebp-20h]
  char *v25; // [esp+18h] [ebp-1Ch]

  v3 = sub_435D44(a2, (int)"^ei:n:o:z");
  i = (int *)(a2 + 4 * dword_473090);
  v5 = a1 - dword_473090;
  if ( (v3 & 1) == 0 )
  {
    v5 = v3 & 2;
    if ( (v3 & 2) != 0 )
    {
      v6 = strchr(v25, 45);
      v7 = v6;
      if ( v6 == nullptr )
        sub_41784C("bad range '%s'", v25);
      *v6 = 0;
      v8 = sub_470920();
      v9 = sub_470920();
      *v7 = 45;
      if ( v9 < v8 )
        sub_41784C("bad range '%s'", v25);
      v23 = v9 + 1;
      v5 = v9 + 1 - v8;
      v10 = (int *)sub_470E78();
      i = v10;
      while ( v8 != v23 )
        *v10++ = v8++;
    }
    else
    {
      if ( a1 - dword_473090 > 1 )
        sub_418164();
      v24 = (FILE *)sub_470D10(Str, Val);
      for ( i = nullptr; ; i[v5++] = v11 )
      {
        v11 = sub_470E94();
        if ( v11 == 0 )
          break;
        i = (int *)sub_47168C(v5, 1030);
      }
      sub_42EE00(v24);
    }
  }
  if ( v5 != 0 )
  {
    v12 = sub_445734();
    srand(v12);
    for ( j = v5 - 1; j != 0; --j )
    {
      v14 = rand();
      v15 = v14;
      if ( j > 0x7FFF )
        v15 = (rand() << 15) ^ v14;
      v2 = i[j];
      v16 = &i[v15 % (j + 1)];
      i[j] = *v16;
      *v16 = v2;
    }
  }
  if ( (v3 & 8) != 0 )
  {
    sub_47154C(v2, 769);
    sub_471530(Str);
  }
  if ( (v3 & 4) != 0 )
  {
    v17 = sub_470920();
    if ( v5 > v17 )
      v5 = v17;
  }
  v18 = &i[v5];
  while ( v18 != i )
  {
    v22 = (v3 & 0x10) == 0 ? 0xA : 0;
    Vala = *i;
    if ( (v3 & 2) != 0 )
      sub_46F088("%u%c", Vala, v22);
    else
      sub_46F088("%s%c", Vala, v22);
    ++i;
  }
  sub_42F138(0);
}

