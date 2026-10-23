// resizecmdwindow.exe @ 0x1400010b0 size=19

const char *__fastcall sub_1400010B0(__int64 a1)
{
  const char *result; // rax

  result = "Unknown exception";
  if ( *(_QWORD *)(a1 + 8) != 0 )
    return *(const char **)(a1 + 8);
  return result;
}

