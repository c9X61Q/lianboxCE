// busybox.exe @ 0x4101e0 size=37

int *__cdecl sub_4101E0(int a1)
{
  int *result; // eax

  result = sub_40FFB0(1);
  if ( result != nullptr )
  {
    result[4] = 1;
    result[5] = a1;
  }
  return result;
}

