// gettime.exe @ 0x42592e size=182

int __cdecl to_machine_sse_control(unsigned int a1)
{
  int v1; // ecx
  unsigned int v2; // esi
  int v3; // edi
  int v4; // ebx
  unsigned int v5; // eax

  v1 = a1 & 0xC00;
  v2 = ((a1 >> 2) | a1 & 0xC03FFFFF) >> 22;
  v3 = 0;
  switch ( v1 )
  {
    case 1024:
      v4 = 32832;
      break;
    case 2048:
      v4 = 64;
      break;
    case 3072:
      v4 = 0x8000;
      break;
    default:
      v4 = 0;
      break;
  }
  v5 = (((a1 >> 2) | a1 & 0xC03FFFFF) >> 22) & 0x300;
  if ( (v2 & 0x300) != 0 )
  {
    switch ( v5 )
    {
      case 0x100u:
        v3 = 0x2000;
        break;
      case 0x200u:
        v3 = 0x4000;
        break;
      case 0x300u:
        v3 = 24576;
        break;
      default:
        break;
    }
  }
  return v3 | v4 | (8 * (v2 & 0x30 | (8 * (v2 & 8 | (4 * ((4 * (v2 & 2 | (4 * (v2 & 1)))) | v2 & 4))))));
}

