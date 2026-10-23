// busybox.exe @ 0x46f03c size=74

int __cdecl sub_46F03C(FILE *Stream)
{
  int v1; // ebx
  int v2; // eax
  CHAR MultiByteStr[9]; // [esp+7h] [ebp-9h] BYREF

  v1 = getc(Stream);
  v2 = fileno(Stream);
  if ( sub_43C4B4(v2) != 0 && v1 != -1 )
  {
    MultiByteStr[0] = v1;
    sub_46EE30(1, MultiByteStr, MultiByteStr);
    return (unsigned __int8)MultiByteStr[0];
  }
  return v1;
}

