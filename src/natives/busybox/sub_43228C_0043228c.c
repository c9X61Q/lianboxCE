// busybox.exe @ 0x43228c size=261

int __usercall sub_43228C@<eax>(const char *a1@<eax>, const char *a2@<edx>)
{
  const char *v4; // eax
  int result; // eax

  if ( qword_485BF0 != nullptr )
    sub_41783C("cmd %s %s", a1, a2);
  if ( a1 != nullptr )
  {
    v4 = "%s %s\r\n";
    if ( a2 == nullptr )
      v4 = "%s %s\r\n" + 3;
    sub_46EEFC((FILE *)*(&NumOfElements + 1), v4, a1, a2);
    fflush((FILE *)*(&NumOfElements + 1));
    fseek((FILE *)*(&NumOfElements + 1), 0, 1);
  }
  do
  {
    strcpy((char *)&qword_485BF8, off_4753F3);
    if ( fgets((char *)&qword_485BF8, 998, (FILE *)*(&NumOfElements + 1)) == nullptr )
      sub_4320C4(nullptr);
  }
  while ( (unsigned __int8)(qword_485BF8 - 48) > 9u || HIBYTE(qword_485BF8) != 32 );
  fseek((FILE *)*(&NumOfElements + 1), 0, 1);
  HIBYTE(qword_485BF8) = 0;
  result = sub_470920();
  HIBYTE(qword_485BF8) = 32;
  return result;
}

