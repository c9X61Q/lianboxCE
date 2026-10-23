// busybox.exe @ 0x41af3c size=51

int sub_41AF3C()
{
  int v0; // esi
  int v1; // ebx
  int v2; // eax

  v0 = 76;
  v1 = 0;
  while ( 1 )
  {
    v2 = sub_446AFC();
    if ( v2 == 0 )
      break;
    if ( v2 == 97 )
    {
      v1 |= 4u;
      v2 = v0;
    }
    else if ( v0 != v2 )
    {
      v1 ^= 1u;
    }
    v0 = v2;
  }
  return v1;
}

