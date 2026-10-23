// busybox.exe @ 0x44cc6c size=41

int sub_44CC6C()
{
  int v0; // ebx
  void *v1; // ecx

  while ( 1 )
  {
    v0 = sub_44CA70();
    if ( v0 != 92 )
      break;
    if ( sub_44CA70() != 10 )
    {
      sub_452778();
      return v0;
    }
    sub_446CD0(v1);
  }
  return v0;
}

