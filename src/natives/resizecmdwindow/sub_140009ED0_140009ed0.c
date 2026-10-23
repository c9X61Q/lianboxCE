// resizecmdwindow.exe @ 0x140009ed0 size=32

void __noreturn sub_140009ED0()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_140009EB0(pExceptionObject);
  throw (std::bad_alloc *)pExceptionObject;
}

