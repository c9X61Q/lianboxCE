// busybox.exe @ 0x4145b4 size=105

int __usercall sub_4145B4@<eax>(int a1@<eax>)
{
  FILE *Stream; // esi
  unsigned int v2; // ebx
  _BYTE *v3; // eax

  while ( a1 != 0 )
  {
    sub_43E400();
    Stream = (FILE *)sub_470D10();
    while ( 1 )
    {
      v2 = sub_470E94();
      if ( v2 == 0 )
        break;
      v3 = (_BYTE *)sub_43D3D4();
      if ( v2 < (unsigned int)v3 )
        *v3 = 0;
      sub_43E384();
    }
    fclose(Stream);
  }
  return 0;
}

