// busybox.exe @ 0x401010 size=276

int sub_401010()
{
  BOOL v0; // eax
  __int16 v2; // dx

  v0 = false;
  dword_4859D8 = 1;
  dword_4859D4 = 1;
  dword_4859D0 = 1;
  dword_4859C8 = 1;
  if ( MEMORY[0x400000] == 23117 && *(_DWORD *)(MEMORY[0x40003C] + 0x400000) == 17744 )
  {
    v2 = *(_WORD *)(MEMORY[0x40003C] + 4194328);
    if ( v2 == 267 )
    {
      if ( *(_DWORD *)(MEMORY[0x40003C] + 4194420) > 0xEu )
        v0 = *(_DWORD *)(MEMORY[0x40003C] + 4194536) != 0;
    }
    else if ( v2 == 523 && *(_DWORD *)(MEMORY[0x40003C] + 4194436) > 0xEu )
    {
      v0 = *(_DWORD *)(MEMORY[0x40003C] + 4194552) != 0;
    }
  }
  dword_4859AC = v0;
  if ( dword_4859E4 != 0 )
    _set_app_type(_crt_gui_app);
  else
    _set_app_type(_crt_console_app);
  *_p__fmode() = dword_473104;
  *_p__commode() = dword_4859E0;
  sub_412B78();
  if ( dword_473098 == 1 )
    sub_401C20(sub_4016F0);
  return 0;
}

