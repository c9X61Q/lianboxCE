// busybox.exe @ 0x41c90c size=75

int __usercall sub_41C90C@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  int v4; // edi
  int v5; // eax
  int result; // eax

  v4 = a1[22];
  if ( a1[5] > a2 && ((v5 = a1[3]) > a2 || v5 >= a1[8]) || (result = sub_42E4F4()) == 0 )
  {
    if ( v4 < a2 )
    {
      memset((void *)(a1[21] + 4 * v4 + 4), 0, 4 * (a2 - v4));
      a1[22] = a2;
    }
    return 0;
  }
  return result;
}

