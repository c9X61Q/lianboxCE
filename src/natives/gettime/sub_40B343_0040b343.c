// gettime.exe @ 0x40b343 size=12

LPTOP_LEVEL_EXCEPTION_FILTER sub_40B343()
{
  return SetUnhandledExceptionFilter(__scrt_unhandled_exception_filter);
}

