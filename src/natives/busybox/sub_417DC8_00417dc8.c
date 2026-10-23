// busybox.exe @ 0x417dc8 size=128

char *__usercall sub_417DC8@<eax>(unsigned __int16 a1@<ax>)
{
  int v1; // esi
  int v2; // ecx
  int v3; // edi
  char *v4; // ebp
  char v5; // bl
  int i; // edx

  byte_473180[0] = byte_484760[a1 >> 12];
  v1 = 256;
  v2 = 0;
  do
  {
    v3 = 3 * v2;
    v4 = &byte_473180[3 * v2];
    v5 = 0;
    for ( i = 0; i != 3; ++i )
    {
      v4[i + 1] = 45;
      if ( ((unsigned __int16)v1 & a1) != 0 )
      {
        v4[i + 1] = byte_4803C0[i];
        v5 = i;
      }
      v1 >>= 1;
    }
    if ( (a1 & (4096 >> ++v2)) != 0 )
      byte_473183[v3] = byte_4803C3[(v5 & 2) + (v2 == 3)];
  }
  while ( v2 != 3 );
  return byte_473180;
}

