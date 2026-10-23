// busybox.exe @ 0x465364 size=351

void __cdecl __noreturn sub_465364(int a1, int a2)
{
  int v2; // ecx
  int v3; // ebx
  char **v4; // ebp
  FILE **v5; // ebx
  char **v6; // esi
  int v7; // edi
  char *v8; // eax
  int v9; // eax
  FILE **v10; // edx
  int v11; // eax
  size_t v12; // esi
  int v13; // esi
  char v14; // [esp+13h] [ebp-15h]
  char v15; // [esp+14h] [ebp-14h]
  FILE **v16; // [esp+14h] [ebp-14h]

  v15 = sub_435D44(a2, (int)"ia");
  v3 = dword_473090;
  if ( (v15 & 1) != 0 )
    sub_46F190(2, 1);
  v4 = (char **)(a2 + 4 * v3);
  v5 = (FILE **)sub_4728CC(v2);
  *v5 = off_4730E8(1);
  v6 = v4;
  v7 = 0;
  v14 = 0;
  while ( 1 )
  {
    setbuf(v5[v7], nullptr);
    while ( 1 )
    {
      if ( *v6 == nullptr )
      {
        while ( 1 )
        {
          v11 = sub_45C560(1024, (LPSTR)&MultiByteStr, 0);
          v12 = v11;
          if ( v11 <= 0 )
            break;
          v10 = v5;
          do
          {
            v16 = v10;
            sub_46EF84(&MultiByteStr, 1u, v12, *v10);
            v10 = v16 + 1;
          }
          while ( v16[1] != nullptr );
        }
        if ( v11 != 0 )
          v14 = 1;
        *(v4 - 1) = "standard input";
        *v5 = off_4730E8(0);
        v13 = 0;
        do
        {
          sub_4235CC(v5[v13], v4[v13 - 1]);
          ++v13;
        }
        while ( v5[v13] != nullptr );
        sub_42F138(v14);
      }
      v5[v7 + 1] = off_4730E8(1);
      v8 = *v6;
      if ( **v6 == 45 && v8[1] == 0 )
        break;
      v9 = sub_4314F0(v8, &aW_0[v15 & 2]);
      v5[v7 + 1] = (FILE *)v9;
      if ( v9 != 0 )
        break;
      v14 = 1;
      ++v6;
    }
    v4[v7++] = *v6++;
  }
}

