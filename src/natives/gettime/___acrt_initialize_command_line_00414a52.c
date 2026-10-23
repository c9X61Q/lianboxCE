// gettime.exe @ 0x414a52 size=25

char __acrt_initialize_command_line()
{
  dword_438A04 = (int)GetCommandLineA();
  dword_438A08 = (int)GetCommandLineW();
  return 1;
}

