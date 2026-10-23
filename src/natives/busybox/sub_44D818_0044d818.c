// busybox.exe @ 0x44d818 size=39

double sub_44D818()
{
  if ( MultiByteStr == 0 )
    sub_418210("stack underflow");
  --MultiByteStr;
  return *((double *)&NumOfElements + MultiByteStr);
}

