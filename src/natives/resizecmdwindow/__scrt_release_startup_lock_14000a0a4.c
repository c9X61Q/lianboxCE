// resizecmdwindow.exe @ 0x14000a0a4 size=36

__int64 __fastcall _scrt_release_startup_lock(char a1)
{
  __int64 result; // rax

  result = _scrt_is_ucrt_dll_in_use();
  if ( (_DWORD)result != 0 && a1 == 0 )
    _InterlockedExchange64(&qword_14000FA78, 0);
  return result;
}

