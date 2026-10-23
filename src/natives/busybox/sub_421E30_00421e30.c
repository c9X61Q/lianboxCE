// busybox.exe @ 0x421e30 size=168

int __cdecl sub_421E30(int a1, int a2)
{
  char i; // si
  int v3; // eax
  _DWORD *v4; // ebx

  *(&MultiByteStr + 1) = 10;
  for ( i = 0; ; i = 1 )
  {
    v3 = sub_4040F0(a1, a2, "e:f:");
    if ( v3 <= 0 )
      break;
    if ( v3 == 101 )
    {
      sub_462BCC();
    }
    else
    {
      if ( v3 != 102 )
        sub_418164();
      sub_470CF8();
      sub_44FB18();
    }
  }
  v4 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( *v4 != 0 )
  {
    do
    {
      ++v4;
      sub_470CF8();
      sub_44FB18();
    }
    while ( *v4 != 0 );
  }
  else if ( i == 0 )
  {
    off_4730E8(0);
    sub_44FB18();
  }
  return 0;
}

