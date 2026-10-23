// busybox.exe @ 0x463120 size=135

void sub_463120()
{
  _DWORD *v0; // ebx
  const char *v1; // eax

  v0 = (_DWORD *)dword_486010;
  if ( *(int *)(dword_486010 + 12) < 0 )
  {
    if ( (dword_486008 & 6) != 0 )
    {
      sub_440B60();
      return;
    }
    sub_41CA38();
    if ( *v0 != 0 )
    {
      if ( sub_415CF4() == 0 )
      {
        sub_418130(58);
        return;
      }
      v1 = "(END)";
    }
    else
    {
      v1 = (const char *)v0[17];
    }
    if ( v0[15] <= 1u )
      sub_46F088("\x1B[7m%s\x1B[m", v1);
    else
      sub_46F088("\x1B[7m%s (file %i of %i)\x1B[m", v1, v0[16], v0[15]);
  }
}

