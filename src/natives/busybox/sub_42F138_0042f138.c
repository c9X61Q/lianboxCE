// busybox.exe @ 0x42f138 size=46

void __usercall __noreturn sub_42F138(char a1@<al>)
{
  FILE *v1; // eax
  FILE *Stream; // [esp+0h] [ebp-4h]

  byte_4735D4 = a1;
  v1 = off_4730E8(1);
  if ( fflush(v1) != 0 )
    sub_41823C("standard output");
  sub_470D44(Stream);
}

