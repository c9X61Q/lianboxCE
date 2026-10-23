// gettime.exe @ 0x4259e4 size=182

unsigned int __cdecl to_machine_x87_control(unsigned int a1)
{
  unsigned int v1; // esi
  int v2; // edi
  int v3; // ebx
  unsigned int v4; // eax

  v1 = (a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14;
  v2 = 0;
  if ( (a1 & 0x3000) != 0 )
  {
    if ( (a1 & 0x3000) == 0x1000 )
      v3 = 512;
    else
      v3 = 0;
  }
  else
  {
    v3 = 768;
  }
  v4 = ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 0x300;
  if ( (v1 & 0x300) != 0 )
  {
    switch ( v4 )
    {
      case 0x100u:
        v2 = 1024;
        break;
      case 0x200u:
        v2 = 2048;
        break;
      case 0x300u:
        v2 = 3072;
        break;
      default:
        break;
    }
  }
  return v2
       | v3
       | (a1 >> 2) & 0x1000
       | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 15) & 4
       | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 18) & 3
       | (2 * ((4 * (v1 & 2 | (4 * (v1 & 1)))) | ((a1 & 0xC00000 | (a1 >> 2) & 0xFC000) >> 14) & 4));
}

