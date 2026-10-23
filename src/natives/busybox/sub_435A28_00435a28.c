// busybox.exe @ 0x435a28 size=90

int *__cdecl sub_435A28(int a1)
{
  if ( a1 != 0 )
  {
    if ( a1 != 4095 )
      return nullptr;
    dword_473348 = (int)sub_4358EC();
    if ( dword_473348 == 0 )
      return nullptr;
  }
  else
  {
    dword_473348 = (int)"root";
  }
  dword_47334C = (int)&unk_4774F6;
  dword_473350 = a1;
  dword_47347C = dword_473348;
  dword_473354 = (int)&dword_47347C;
  return &dword_473348;
}

