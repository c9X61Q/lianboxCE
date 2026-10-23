// busybox.exe @ 0x411cf0 size=51

DWORD sub_411CF0()
{
  int (*v0)(void); // eax

  v0 = (int (*)(void))sub_435244("kernel32.dll", "GetTickCount64", (int)&unk_473548);
  if ( v0 != nullptr )
    return v0();
  else
    return GetTickCount();
}

