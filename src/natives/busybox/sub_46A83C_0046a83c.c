// busybox.exe @ 0x46a83c size=74

const char *sub_46A83C()
{
  int v0; // eax
  int v1; // ebx
  const char **i; // esi
  const char *result; // eax
  int v4; // eax

  v0 = 0;
  do
  {
    v1 = v0;
    v0 = sub_446AFC("vf");
  }
  while ( v0 != 0 );
  for ( i = (const char **)dword_47310C; ; ++i )
  {
    result = *i;
    if ( *i == nullptr )
      break;
    if ( v1 == 102 )
    {
      v4 = sub_41CBF8(result, 0);
      if ( v4 != 0 && *(_BYTE *)(v4 + 8) == 1 )
        sub_423094();
    }
    else
    {
      sub_46A8E0();
    }
  }
  return result;
}

