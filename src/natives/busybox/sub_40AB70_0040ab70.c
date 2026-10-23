// busybox.exe @ 0x40ab70 size=162

double __cdecl sub_40AB70(char *a1, char **a2)
{
  char v2; // al
  int v4; // [esp+28h] [ebp-24h] BYREF
  __int64 v5; // [esp+2Ch] [ebp-20h] BYREF
  _TBYTE v6; // [esp+34h] [ebp-18h]

  *(double *)&v6 = 0.0;
  v2 = sub_408F10(a1, a2, dword_4730B4, &v4, (int)&v5);
  switch ( v2 & 7 )
  {
    case 1:
    case 5:
      HIWORD(v6) = v4 + 16446;
      goto LABEL_3;
    case 2:
LABEL_3:
      *(_QWORD *)&v6 = v5;
      break;
    case 3:
      *(_DWORD *)((char *)&v6 + 6) = 2147450880;
      break;
    case 4:
      *(_DWORD *)((char *)&v6 + 6) = 2147467264;
      break;
    default:
      break;
  }
  if ( (v2 & 8) != 0 )
    HIWORD(v6) |= 0x8000u;
  return *(double *)&v6;
}

