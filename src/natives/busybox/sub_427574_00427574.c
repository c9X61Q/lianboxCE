// busybox.exe @ 0x427574 size=107

char __cdecl sub_427574(const char *a1)
{
  _BYTE Block[96]; // [esp+8h] [ebp-60h] BYREF

  if ( sub_462E78(a1, Block) != 0 )
  {
    sub_417FE4((int)a1, "can't read file system information for '%s'", a1);
    return 0;
  }
  else
  {
    sub_44E5B4(Block);
    return 1;
  }
}

