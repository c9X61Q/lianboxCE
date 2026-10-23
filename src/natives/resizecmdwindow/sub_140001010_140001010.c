// resizecmdwindow.exe @ 0x140001010 size=85

int sub_140001010(char *Format, ...)
{
  FILE *v2; // rbx
  unsigned __int64 *v3; // rax
  va_list va; // [rsp+58h] [rbp+10h] BYREF

  va_start(va, Format);
  v2 = _acrt_iob_func(1u);
  v3 = (unsigned __int64 *)sub_140001000();
  return _stdio_common_vfprintf(*v3, v2, Format, nullptr, va);
}

