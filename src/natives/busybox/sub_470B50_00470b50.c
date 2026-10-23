// busybox.exe @ 0x470b50 size=25

int __usercall sub_470B50@<eax>(int a1@<eax>)
{
  int FileHandle; // [esp+0h] [ebp-4h]

  if ( sub_442EA4(a1) != 0 )
    sub_41823C("close failed");
  return FileHandle;
}

