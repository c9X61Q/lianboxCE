// busybox.exe @ 0x46f108 size=62

int __cdecl sub_46F108(char *Buffer)
{
  FILE *v1; // eax
  int result; // eax

  v1 = off_4730E8(1);
  result = sub_46EF20(Buffer, v1);
  if ( result != -1 )
    return -(putchar(10) == -1);
  return result;
}

