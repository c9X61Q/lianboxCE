// busybox.exe @ 0x4450c8 size=54

int __cdecl sub_4450C8(char *lpFileName, int a2)
{
  int result; // eax
  int v3; // [esp+8h] [ebp-4h]

  result = sub_443508(lpFileName, a2 | 0x800000, v3);
  if ( result < 0 )
    sub_418014(result, "can't open '%s'", lpFileName);
  return result;
}

