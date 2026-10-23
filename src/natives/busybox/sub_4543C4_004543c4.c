// busybox.exe @ 0x4543c4 size=177

int __usercall sub_4543C4@<eax>(size_t *a1@<eax>, int a2@<edx>)
{
  size_t v4; // eax
  int v5; // edx
  int result; // eax
  size_t v7; // ecx
  int *Block; // edx
  size_t v9; // eax
  void *v10; // eax
  int *v11; // edx
  int v12; // eax
  int i; // ecx
  int v14; // ecx
  int v15; // ecx

  v4 = *a1;
  if ( v4 == 0 )
  {
    v5 = sub_454210(a1, a2);
    result = 1;
    if ( v5 == 0 )
      return result;
    return -1;
  }
  v7 = a1[1];
  Block = (int *)a1[2];
  if ( v7 != 0 )
  {
    if ( v4 == v7 )
    {
      v9 = 2 * v4;
      *a1 = v9;
      if ( Block != nullptr )
        v10 = realloc(Block, 4 * v9);
      else
        v10 = calloc(v9, 4u);
      if ( v10 == nullptr )
        return -1;
      a1[2] = (size_t)v10;
    }
    v11 = (int *)a1[2];
    v12 = a1[1];
    if ( *v11 <= a2 )
    {
      while ( 1 )
      {
        v15 = v11[v12 - 1];
        if ( v15 <= a2 )
          break;
        v11[v12--] = v15;
      }
    }
    else
    {
      for ( i = a1[1]; i > 0; --i )
        v11[i] = v11[i - 1];
      v14 = v12;
      if ( v12 < 0 )
        v14 = 0;
      v12 -= v14;
    }
    v11[v12] = a2;
  }
  else
  {
    *Block = a2;
  }
  ++a1[1];
  return 1;
}

