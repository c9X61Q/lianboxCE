// busybox.exe @ 0x470378 size=88

char *__usercall sub_470378@<eax>(char *a1@<eax>, int a2@<edx>, char *a3@<ecx>)
{
  char v4; // bl
  bool v5; // zf
  char *Buffer; // [esp+0h] [ebp-Ch]

  Buffer = a3;
  v4 = dword_486008;
  if ( a2 != 0 )
  {
    if ( a2 == 1 )
    {
      if ( (dword_486008 & 2) != 0 )
        return Buffer;
      v5 = (dword_486008 & 1) == 0;
    }
    else
    {
      if ( (dword_486008 & 4) != 0 )
        return Buffer;
      if ( (dword_486008 & 1) == 0 )
        sub_46F0B8(9);
      v5 = (v4 & 2) == 0;
    }
    if ( v5 )
      sub_46F0B8(9);
  }
  else if ( (dword_486008 & 1) != 0 )
  {
    return Buffer;
  }
  sub_46F108(a1);
  return Buffer;
}

