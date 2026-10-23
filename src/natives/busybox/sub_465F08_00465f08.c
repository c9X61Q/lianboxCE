// busybox.exe @ 0x465f08 size=57

int __usercall sub_465F08@<eax>(CHAR *a1@<eax>, int a2@<edx>)
{
  int v4; // eax
  int result; // eax
  LPCSTR lpFileName; // [esp+0h] [ebp-10h]
  int v7; // [esp+8h] [ebp-8h]

  v4 = sub_443508("/dev/urandom", 0x800000, v7);
  if ( v4 < 0 || (result = sub_456B58(v4, a1, a2)) != a2 )
    sub_470D44(lpFileName);
  return result;
}

