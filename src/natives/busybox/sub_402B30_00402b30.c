// busybox.exe @ 0x402b30 size=261

double __cdecl sub_402B30(int a1, int a2)
{
  char v2; // al
  double v4; // [esp+28h] [ebp-24h]
  int v5; // [esp+34h] [ebp-18h] BYREF
  double v6; // [esp+38h] [ebp-14h] BYREF

  v2 = sub_408F10(a1, a2, &unk_473064, &v5, &v6);
  switch ( v2 & 7 )
  {
    case 0:
    case 6:
      v4 = 0.0;
      break;
    case 1:
      LODWORD(v4) = LODWORD(v6);
      HIDWORD(v4) = HIDWORD(v6) & 0xFFEFFFFF | ((v5 + 1075) << 20);
      break;
    case 2:
      v4 = v6;
      break;
    case 3:
      v4 = INFINITY;
      break;
    case 4:
      v4 = NAN;
      break;
    case 5:
      *(_QWORD *)&v4 = *(_QWORD *)&v6 | 0x7FF0000000000000LL;
      break;
    default:
      break;
  }
  if ( (v2 & 8) != 0 )
    HIDWORD(v4) |= 0x80000000;
  return v4;
}

