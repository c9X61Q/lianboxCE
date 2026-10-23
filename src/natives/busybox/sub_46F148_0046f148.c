// busybox.exe @ 0x46f148 size=71

int __cdecl sub_46F148(int a1, LPSTR lpMultiByteStr, unsigned int a3)
{
  int v3; // ebx
  int v4; // eax

  v3 = sub_443B44(a1, lpMultiByteStr, a3);
  v4 = sub_43C4B4(a1);
  if ( v3 > 0 && v4 != 0 )
    sub_46EE30(v3, lpMultiByteStr, lpMultiByteStr);
  return v3;
}

