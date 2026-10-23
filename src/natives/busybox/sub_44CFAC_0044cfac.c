// busybox.exe @ 0x44cfac size=237

int __cdecl sub_44CFAC(int a1, int a2)
{
  int **i; // ebx
  const char **v3; // ebp
  int v4; // ebx
  int v5; // eax
  _DWORD *Block; // edi
  _DWORD *j; // esi
  int **k; // ecx
  char v10; // [esp+Ch] [ebp-1Ch]
  int ***v11; // [esp+10h] [ebp-18h]
  int **v12; // [esp+14h] [ebp-14h] BYREF

  v12 = nullptr;
  v10 = sub_435D44(a2, (int)"so:*", &v12);
  for ( i = v12; ; i[1] = (int *)sub_46C538() )
  {
    i = sub_43E3A8(i, "%PPID");
    if ( i == nullptr )
      break;
  }
  v3 = (const char **)(a2 + 4 * dword_473090);
  v4 = 1;
  while ( *v3 != nullptr )
  {
    v5 = sub_430A5C(*v3);
    Block = (_DWORD *)sub_44CF80(v5);
    for ( j = Block; *j != 0; ++j )
    {
      if ( (v10 & 2) != 0 )
      {
        for ( k = v12; k != nullptr; k = *v11 )
        {
          v11 = (int ***)k;
          if ( sub_470920() == *j )
            goto LABEL_15;
        }
      }
      sub_46F088(&aU_4[v4], *j);
      v4 = v10 & 1;
      if ( (v10 & 1) != 0 )
      {
        v4 = 0;
        break;
      }
LABEL_15:
      ;
    }
    free(Block);
    ++v3;
  }
  if ( v4 == 0 )
    sub_418130(10);
  return v4;
}

