// busybox.exe @ 0x41c430 size=46

int __usercall sub_41C430@<eax>(FILE *a1@<eax>)
{
  FILE *Stream; // [esp+0h] [ebp-Ch]

  if ( fileno(a1) == -1 || ferror(a1) == 0 )
    return (int)Stream;
  else
    return sub_41C460();
}

