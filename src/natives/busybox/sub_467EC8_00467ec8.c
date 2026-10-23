// busybox.exe @ 0x467ec8 size=315

int __cdecl sub_467EC8(char *Destination)
{
  char *v1; // ebx
  struct _SYSTEM_INFO SystemInfo; // [esp+10h] [ebp-C8h] BYREF
  struct _OSVERSIONINFOA VersionInformation; // [esp+34h] [ebp-A4h] BYREF

  strcpy(Destination, "Windows_NT");
  if ( sub_443310(Destination + 65, 65) != 0 )
    strcpy(Destination + 65, "unknown");
  memset(&VersionInformation.dwMajorVersion, 0, 0x90u);
  VersionInformation.dwOSVersionInfoSize = 148;
  strcpy(Destination + 130, "unknown");
  strcpy(Destination + 195, "unknown");
  if ( GetVersionExA(&VersionInformation) )
  {
    sub_46276C(
      (int)(Destination + 130),
      (int)"%u.%u",
      VersionInformation.dwMajorVersion,
      VersionInformation.dwMinorVersion);
    sub_46276C((int)(Destination + 195), (int)"%u", VersionInformation.dwBuildNumber);
  }
  GetSystemInfo(&SystemInfo);
  v1 = Destination + 260;
  if ( SystemInfo.wProcessorArchitecture != 0 )
  {
    if ( SystemInfo.wProcessorArchitecture == 9 )
      strcpy(v1, "x86_64");
    else
      strcpy(v1, "unknown");
  }
  else if ( SystemInfo.wProcessorLevel > 5u )
  {
    strcpy(v1, "i686");
  }
  else
  {
    strcpy(v1, "i386");
  }
  return 0;
}

