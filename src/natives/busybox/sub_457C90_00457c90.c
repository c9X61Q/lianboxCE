// busybox.exe @ 0x457c90 size=29

int __usercall sub_457C90@<eax>(const char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int result; // eax

  a1[a3] = 0;
  result = sub_418398(a2, a1, nullptr);
  if ( result == -1 )
    sub_418210("invalid ar header");
  return result;
}

