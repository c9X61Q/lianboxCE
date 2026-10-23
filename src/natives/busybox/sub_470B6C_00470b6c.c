// busybox.exe @ 0x470b6c size=84

int __usercall sub_470B6C@<eax>(int a1@<ecx>, struct sockaddr *a2@<edx>, int a3@<eax>)
{
  int result; // eax
  char *v5; // eax

  result = sub_442ED8(a3, a2, a1);
  if ( result < 0 )
  {
    if ( a2->sa_family == 2 )
    {
      v5 = inet_ntoa(*(struct in_addr *)&a2->sa_data[2]);
      sub_418014((int)v5, "%s (%s)", "can't connect to remote host", v5);
    }
    sub_41823C("can't connect to remote host");
  }
  return result;
}

