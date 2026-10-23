// busybox.exe @ 0x43cbd0 size=30

void __noreturn sub_43CBD0()
{
  int Value; // eax

  Value = (unsigned __int8)byte_4735D4;
  BYTE1(Value) = 1;
  longjmp(Buf, Value);
}

