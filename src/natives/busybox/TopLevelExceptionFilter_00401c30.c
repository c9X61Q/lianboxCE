// busybox.exe @ 0x401c30 size=418

LONG __stdcall TopLevelExceptionFilter(struct _EXCEPTION_POINTERS *ExceptionInfo)
{
  DWORD ExceptionCode; // eax
  _crt_signal_t v2; // eax
  _crt_signal_t v4; // eax
  _crt_signal_t v5; // eax

  ExceptionCode = ExceptionInfo->ExceptionRecord->ExceptionCode;
  if ( ExceptionCode == -1073741677 )
  {
LABEL_6:
    v2 = signal(8, nullptr);
    if ( v2 == (_crt_signal_t)1 )
    {
      signal(8, (_crt_signal_t)1);
      sub_401770();
      return -1;
    }
LABEL_7:
    if ( v2 != nullptr )
    {
      v2(8);
      return -1;
    }
    goto LABEL_8;
  }
  if ( ExceptionCode > 0xC0000093 )
  {
    if ( ExceptionCode == -1073741676 )
    {
      v2 = signal(8, nullptr);
      if ( v2 == (_crt_signal_t)1 )
      {
        signal(8, (_crt_signal_t)1);
        return -1;
      }
      goto LABEL_7;
    }
    if ( ExceptionCode != -1073741674 )
      goto LABEL_8;
LABEL_18:
    v5 = signal(4, nullptr);
    if ( v5 == (_crt_signal_t)1 )
    {
      signal(4, (_crt_signal_t)1);
      return -1;
    }
    if ( v5 != nullptr )
    {
      v5(4);
      return -1;
    }
    goto LABEL_8;
  }
  if ( ExceptionCode == -1073741795 )
    goto LABEL_18;
  if ( ExceptionCode <= 0xC000001D )
  {
    if ( ExceptionCode == -1073741819 )
    {
      v4 = signal(11, nullptr);
      if ( v4 == (_crt_signal_t)1 )
      {
        signal(11, (_crt_signal_t)1);
        return -1;
      }
      if ( v4 != nullptr )
      {
        v4(11);
        return -1;
      }
    }
    goto LABEL_8;
  }
  if ( ExceptionCode + 1073741683 <= 4 )
    goto LABEL_6;
LABEL_8:
  if ( dword_4859F8 != nullptr )
    return dword_4859F8(ExceptionInfo);
  else
    return 0;
}

