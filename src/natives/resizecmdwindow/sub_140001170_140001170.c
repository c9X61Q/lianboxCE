// resizecmdwindow.exe @ 0x140001170 size=32

void __noreturn sub_140001170()
{
  _QWORD pExceptionObject[5]; // [rsp+20h] [rbp-28h] BYREF

  sub_140001140(pExceptionObject);
  throw (std::bad_array_new_length *)pExceptionObject;
}

