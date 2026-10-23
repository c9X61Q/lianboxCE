// busybox.exe @ 0x46f190 size=28

_crt_signal_t __cdecl sub_46F190(int Signal, _crt_signal_t Function)
{
  _crt_signal_t result; // eax

  if ( Signal != 13 )
    return signal(Signal, Function);
  result = (_crt_signal_t)dword_473594;
  dword_473594 = (int)Function;
  return result;
}

