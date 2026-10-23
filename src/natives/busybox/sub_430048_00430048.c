// busybox.exe @ 0x430048 size=129

int __usercall sub_430048@<eax>(const char *a1@<eax>)
{
  unsigned __int16 *v2; // ebp
  unsigned int v3; // ebx
  const char *Str2; // esi
  int v5; // edx
  unsigned int v6; // eax
  unsigned int v7; // eax
  unsigned int i; // ebx
  const char *j; // ecx
  char v10; // dl

  v2 = (unsigned __int16 *)&unk_47DA60;
  v3 = 1248;
  while ( 1 )
  {
    Str2 = &asc_47DA70[v2[6]];
    v5 = strcmp(a1, Str2);
    v6 = v3;
    v3 -= 156;
    if ( v5 >= 0 )
      break;
    --v2;
    if ( v3 == 156 )
    {
      v6 = 156;
      Str2 = "[";
      v3 = 0;
      break;
    }
  }
  v7 = v6 >> 3;
  for ( i = v3 >> 3; i < v7; ++i )
  {
    for ( j = a1; ; ++j )
    {
      v10 = *Str2;
      if ( *j != *Str2 )
        break;
      if ( v10 == 0 )
        return i;
      ++Str2;
    }
    while ( 1 )
    {
      ++Str2;
      if ( v10 == 0 )
        break;
      v10 = *Str2;
    }
  }
  return -1;
}

