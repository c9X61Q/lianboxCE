// busybox.exe @ 0x401520 size=49

void (*__cdecl sub_401520())(void)
{
  void (*result)(void); // eax

  for ( result = (void (*)(void))(*off_47305C)[0]; result != nullptr; off_47305C = (int (*)[8])((char *)off_47305C + 4) )
  {
    result();
    result = (void (*)(void))(*off_47305C)[1];
  }
  return result;
}

