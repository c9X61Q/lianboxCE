// busybox.exe @ 0x4115d8 size=42

unsigned int __usercall sub_4115D8@<eax>(unsigned int a1@<eax>, int a2@<ecx>, char a3)
{
  char *v3; // ecx
  unsigned int v5; // [esp-8h] [ebp-8h]
  int v6; // [esp-4h] [ebp-4h]

  v6 = a2;
  v5 = a1;
  v3 = &a3;
  if ( a1 >= 0x1000 )
  {
    do
    {
      v3 -= 4096;
      *(_DWORD *)v3 = *(_DWORD *)v3;
      a1 -= 4096;
    }
    while ( a1 > 0x1000 );
  }
  *(_DWORD *)&v3[-a1] = *(_DWORD *)&v3[-a1];
  return v5;
}

