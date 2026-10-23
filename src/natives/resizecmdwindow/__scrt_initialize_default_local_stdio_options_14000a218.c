// resizecmdwindow.exe @ 0x14000a218 size=27

_QWORD *_scrt_initialize_default_local_stdio_options()
{
  _QWORD *v0; // rax
  _QWORD *result; // rax

  v0 = sub_140001000();
  *v0 |= 0x24uLL;
  result = sub_14000A210();
  *result |= 2uLL;
  return result;
}

