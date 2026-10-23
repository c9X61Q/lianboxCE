// busybox.exe @ 0x42e2ec size=167

int __fastcall sub_42E2EC(int a1, _BYTE **a2)
{
  int v3; // esi
  char v4; // al
  int v5; // edi
  const char **v6; // ebp
  const char *Str; // ebx
  int v8; // esi
  char *v9; // eax
  char *v10; // edx

  v3 = 0;
  while ( 1 )
  {
    v4 = sub_446AFC();
    if ( v4 == 0 )
      break;
    if ( v4 == 110 )
      v3 = 1;
  }
  v5 = 1;
  if ( **a2 == 114 )
  {
    v3 = 0;
    v5 = 2;
  }
  v6 = (const char **)dword_47310C;
  Str = *(const char **)dword_47310C;
  if ( *(_DWORD *)dword_47310C != 0 )
  {
    v8 = ~v3;
    do
    {
      v9 = strchr(Str, 61);
      v10 = v9 + 1;
      if ( v9 != nullptr || (sub_4382E4(), (v10 = *(char **)sub_430DE0()) == nullptr) )
        sub_45EB78(v8 & v5, v10);
      else
        *((_DWORD *)v10 + 1) = v8 & (v5 | *((_DWORD *)v10 + 1));
      Str = *++v6;
    }
    while ( *v6 != nullptr );
  }
  else
  {
    sub_4604E0(0, v5);
  }
  return 0;
}

