// busybox.exe @ 0x43abec size=57

int __usercall sub_43ABEC@<eax>(int a1@<eax>)
{
  int v1; // ecx

  if ( GetConsoleCP() == 850 && GetConsoleOutputCP() == 850 )
  {
    SetConsoleCP(0x35Au);
    SetConsoleOutputCP(0x35Au);
    return v1;
  }
  return a1;
}

