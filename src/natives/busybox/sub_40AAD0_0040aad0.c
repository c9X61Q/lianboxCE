// busybox.exe @ 0x40aad0 size=155

double __cdecl sub_40AAD0(char *a1, char **a2)
{
  char v2; // al
  float v3; // edx
  float v5; // [esp+38h] [ebp-14h] BYREF
  int v6[4]; // [esp+3Ch] [ebp-10h] BYREF

  v2 = sub_408F10(a1, a2, dword_47309C, v6, (int)&v5);
  switch ( v2 & 7 )
  {
    case 1:
    case 5:
      LODWORD(v3) = LODWORD(v5) & 0x7FFFFF | ((v6[0] + 150) << 23);
      break;
    case 2:
      v3 = v5;
      break;
    case 3:
      v3 = INFINITY;
      break;
    case 4:
      v3 = NAN;
      break;
    default:
      v3 = 0.0;
      break;
  }
  if ( (v2 & 8) != 0 )
    LODWORD(v3) |= 0x80000000;
  return v3;
}

