// busybox.exe @ 0x46f0b8 size=80

int __cdecl sub_46F0B8(int Character)
{
  int v1; // ebx
  CHAR MultiByteStr[5]; // [esp+7h] [ebp-5h] BYREF

  v1 = Character;
  MultiByteStr[0] = Character;
  if ( sub_43C480(1) == 0 )
    return putchar(Character);
  sub_46ED64(1, MultiByteStr, MultiByteStr);
  if ( putchar((unsigned __int8)MultiByteStr[0]) == -1 )
    return -1;
  return v1;
}

