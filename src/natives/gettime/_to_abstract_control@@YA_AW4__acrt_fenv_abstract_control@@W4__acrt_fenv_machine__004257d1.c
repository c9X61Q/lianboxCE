// gettime.exe @ 0x4257d1 size=176

unsigned int __cdecl to_abstract_control(unsigned int a1)
{
  int v1; // esi
  __int16 v2; // ax
  int v3; // ebx
  int v4; // eax

  v1 = 0;
  v2 = a1 & 0x8040;
  if ( (a1 & 0x8040) == 0x8000 )
  {
    v3 = 3072;
  }
  else if ( v2 == 64 )
  {
    v3 = 2048;
  }
  else
  {
    v3 = 1024;
    if ( v2 != -32704 )
      v3 = 0;
  }
  v4 = a1 & 0x6000;
  if ( (a1 & 0x6000) != 0 )
  {
    switch ( v4 )
    {
      case 8192:
        v1 = 256;
        break;
      case 16384:
        v1 = 512;
        break;
      case 24576:
        v1 = 768;
        break;
      default:
        break;
    }
  }
  return v1
       | v3
       | ((a1 & 0x180 | ((a1 & 0x200 | ((((a1 & 0x800 | (a1 >> 2) & 0x400) >> 2) | a1 & 0x400) >> 2)) >> 3)) >> 3);
}

