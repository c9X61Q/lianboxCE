// busybox.exe @ 0x470114 size=93

char __usercall sub_470114@<al>(char *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, const char *a4)
{
  int v6; // eax
  int v7; // edx

  v6 = sub_43269C(a2, a1);
  if ( a3 == v6 )
  {
    ++*(_QWORD *)&MultiByteStr;
    return 0;
  }
  if ( a2 == v6 )
  {
    ++*(_QWORD *)&qword_485BE8;
    return 0;
  }
  sub_417FE4(v7, "error writing '%s'", a4);
  return 1;
}

