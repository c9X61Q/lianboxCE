// busybox.exe @ 0x43e8c4 size=50

int __thiscall sub_43E8C4(void *this)
{
  int *i; // ebx
  int result; // eax

  if ( dword_473464 == 0 )
    sub_415B40((int)this, "not in a function");
  for ( i = (int *)dword_47310C; ; ++i )
  {
    result = *i;
    if ( *i == 0 )
      break;
    sub_445250(this, 0);
  }
  return result;
}

