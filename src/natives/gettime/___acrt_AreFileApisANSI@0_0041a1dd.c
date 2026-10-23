// gettime.exe @ 0x41a1dd size=31

int __stdcall __acrt_AreFileApisANSI()
{
  int (__stdcall *AreFileApisANSI)(); // eax

  AreFileApisANSI = try_get_AreFileApisANSI();
  if ( AreFileApisANSI != nullptr )
    return ((int (__thiscall *)(int (__stdcall *)()))AreFileApisANSI)(AreFileApisANSI);
  else
    return 1;
}

