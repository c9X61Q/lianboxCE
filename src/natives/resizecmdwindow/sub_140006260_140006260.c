// resizecmdwindow.exe @ 0x140006260 size=62

__int64 __fastcall sub_140006260(__int64 **a1)
{
  __int64 result; // rax
  __int64 v3; // rcx

  if ( !std::uncaught_exception() )
    std::ostream::_Osfx(*a1);
  result = **a1;
  v3 = *(__int64 *)((char *)*a1 + *(int *)(result + 4) + 72);
  if ( v3 != 0 )
  {
    __wind
    {
      result = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v3 + 16LL))(v3);
    }
    __unwind
    {
      __std_terminate();
    }
  }
  return result;
}

