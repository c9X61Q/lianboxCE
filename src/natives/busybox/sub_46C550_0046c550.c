// busybox.exe @ 0x46c550 size=108

_BYTE *__usercall sub_46C550@<eax>(unsigned int a1@<eax>, _BYTE *a2@<edx>, int a3@<ecx>)
{
  int v5; // ebp
  unsigned int v6; // ebx
  unsigned int v7; // eax
  int v9; // [esp+0h] [ebp-18h]
  int v10; // [esp+4h] [ebp-14h]

  if ( a3 != 0 )
  {
    v9 = 10;
    v5 = 0;
    v6 = 1000000000;
    do
    {
      v10 = a1 / v6;
      v7 = a1;
      a1 %= v6;
      if ( v7 >= v6 || v5 != 0 || v6 == 1 )
      {
        if ( --a3 == 0 )
          return a2;
        ++v5;
        *a2++ = v10 + 48;
      }
      else
      {
        v5 = 0;
      }
      v6 /= 0xAu;
      --v9;
    }
    while ( v9 != 0 );
  }
  return a2;
}

