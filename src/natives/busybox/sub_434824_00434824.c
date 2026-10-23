// busybox.exe @ 0x434824 size=92

int sub_434824()
{
  int v0; // edi
  int i; // ebp
  int v2; // eax
  unsigned int v3; // esi
  unsigned int v4; // ecx
  int v5; // edx

  v0 = 1;
  for ( i = 0; NumOfElements != i; ++i )
  {
    v2 = *(_DWORD *)(*(&NumOfElements + 1) + 24 * i + 4);
    v3 = byte_484B10[v2];
    v4 = v0;
    while ( v3 != 0 )
    {
      v5 = v4 % v3;
      v4 = v3;
      v3 = v5;
    }
    if ( v4 != 0 )
      v4 = v0 * byte_484B10[v2] / v4;
    v0 = v4;
  }
  return v0;
}

