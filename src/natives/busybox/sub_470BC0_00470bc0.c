// busybox.exe @ 0x470bc0 size=103

int sub_470BC0()
{
  int hostshort; // eax
  u_short v1; // ax

  if ( sub_43228C("EPSV", nullptr) != 229 && sub_43228C("PASV", nullptr) != 227
    || (hostshort = sub_44B2F0((int)&qword_485BF8)) < 0 )
  {
    sub_4320C4("PASV");
  }
  v1 = htons(hostshort);
  sub_45E440((_WORD *)(qword_485BE8 + 4), v1);
  return sub_470C28();
}

