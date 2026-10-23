// busybox.exe @ 0x452a90 size=168

int __usercall sub_452A90@<eax>(char *a1@<eax>, FILE *a2@<edx>, char *a3@<ecx>, unsigned __int8 a4)
{
  char v7; // dl
  char v8; // dl
  int result; // eax
  char v10; // [esp+Bh] [ebp-11h]
  char v11; // [esp+Bh] [ebp-11h]

  v7 = *a3;
  if ( *a3 != 10 && v7 != 0 )
  {
    fputc(10, a2);
    v7 = 10;
  }
  v10 = v7;
  sub_46EF20(a1, a2);
  v8 = v10;
  if ( *a1 != 0 )
    v8 = 120;
  if ( a4 == 2 )
  {
    fputc(0, a2);
    v8 = 120;
  }
  else if ( a4 != 1 )
  {
    fputc(a4, a2);
    v8 = a4;
  }
  v11 = v8;
  result = ferror(a2);
  if ( result != 0 )
  {
    byte_4735D4 = 4;
    sub_418210("write error");
  }
  *a3 = v11;
  return result;
}

