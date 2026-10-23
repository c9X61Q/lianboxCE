// busybox.exe @ 0x420bc4 size=40

BOOL __stdcall HandlerRoutine(DWORD CtrlType)
{
  if ( CtrlType > 1 )
    return false;
  if ( *(_DWORD *)(dword_485FF0 + 56) == 0 )
    sub_45309C();
  *(_BYTE *)(dword_485FF0 + 60) = 1;
  return true;
}

