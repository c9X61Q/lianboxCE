// gettime.exe @ 0x410408 size=49

int __cdecl __crt_stdio_output::to_integer_size(int a1)
{
  int result; // eax
  int v2; // [esp-4h] [ebp-4h]

  switch ( a1 )
  {
    case 0:
    case 3:
    case 6:
    case 7:
    case 9:
    case 10:
      v2 = 4;
      goto LABEL_4;
    case 1:
      return 1;
    case 2:
      v2 = 2;
      goto LABEL_4;
    case 4:
    case 5:
    case 11:
      v2 = 8;
LABEL_4:
      result = v2;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

