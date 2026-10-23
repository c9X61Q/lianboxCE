// resizecmdwindow.exe @ 0x14000a6dc size=6

// attributes: thunk
int __cdecl seh_filter_exe(unsigned int ExceptionNum, struct _EXCEPTION_POINTERS *ExceptionPtr)
{
  return _seh_filter_exe(ExceptionNum, ExceptionPtr);
}

