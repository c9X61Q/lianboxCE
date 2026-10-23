// busybox.exe @ 0x412b78 size=95

int sub_412B78()
{
  const char *Str1; // eax

  dword_4859C4 = -1;
  Str1 = (const char *)sub_44328C("BB_GLOBBING");
  if ( Str1 != nullptr )
  {
    if ( strcmp(Str1, "0") == 0 )
      dword_4859C4 = 0;
  }
  else
  {
    sub_45E5F8("BB_GLOBBING", (int)"0", 1);
  }
  return 0;
}

