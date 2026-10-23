// busybox.exe @ 0x448590 size=27

__int64 sub_448590()
{
  __int64 result; // rax

  if ( (dword_486008 & 0x20) != 0 )
    LODWORD(result) = sub_42722C();
  else
    LODWORD(result) = sub_4270D4();
  return (int)result;
}

