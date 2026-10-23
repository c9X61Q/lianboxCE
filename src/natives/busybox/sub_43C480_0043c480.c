// busybox.exe @ 0x43c480 size=52

int __usercall sub_43C480@<eax>(int a1@<eax>)
{
  int result; // eax

  if ( word_4734F8 == 0 )
    word_4734F8 = sub_433628();
  result = sub_443380(a1);
  if ( result != 0 )
    return (char *)sub_433614() + 1 != nullptr;
  return result;
}

