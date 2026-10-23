// busybox.exe @ 0x45cb78 size=146

unsigned int __cdecl sub_45CB78(unsigned int a1, int a2, char *a3, int a4, int a5, int a6)
{
  unsigned int v7; // ebx
  unsigned int v8; // ebp
  char v9; // dl
  int v10; // eax
  int v11; // eax
  unsigned int v12; // ecx
  _BYTE *v13; // edx
  unsigned int v14; // eax
  char v16; // [esp+Fh] [ebp-11h]

  v7 = a4 - 1;
  v8 = 0;
  while ( v7 >= a1 )
  {
    v9 = *a3;
    v10 = (int)a3;
    if ( a6 != 0 )
    {
      *a3 = 0;
      v10 = a2;
    }
    v16 = v9;
    v11 = sub_4312E8(a4, v10, 0);
    *a3 = v16;
    if ( v11 == 0 )
      return v7;
    v12 = v7 - 1;
    if ( a5 != 0 )
    {
      if ( (--v8 & 0x80000000) != 0 )
      {
        v13 = (_BYTE *)(v7 - 1);
        do
        {
          v14 = v12 - (_DWORD)v13;
          if ( a1 >= (unsigned int)v13 )
            break;
          --v13;
        }
        while ( *v13 == 0x81 );
        v8 = v14;
      }
      if ( (v8 & 1) != 0 )
      {
        --v8;
        v12 = v7 - 2;
      }
    }
    --a3;
    v7 = v12;
  }
  return 0;
}

