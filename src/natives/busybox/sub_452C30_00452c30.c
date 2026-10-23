// busybox.exe @ 0x452c30 size=78

int sub_452C30()
{
  int v0; // ebx
  const char *v1; // esi
  int v2; // eax

  v0 = dword_485FF0;
  v1 = *(const char **)(dword_485FF0 + 36);
  v2 = sub_41AF3C();
  if ( (v2 & 4) != 0 )
  {
    sub_44DE6C();
  }
  else
  {
    if ( v2 != 0 )
    {
      if ( *(_DWORD *)(v0 + 40) == v0 + 62 )
        sub_45E938();
      v1 = *(const char **)(v0 + 40);
    }
    sub_4480E8("%s\n", v1);
  }
  return 0;
}

