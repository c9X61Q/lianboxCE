// busybox.exe @ 0x46c3fc size=313

int __cdecl sub_46C3FC(LPCSTR lpFileName, int *a2)
{
  HANDLE FileA; // eax
  int *v3; // ebx
  int v4; // ebx
  void *v5; // ebp
  __int64 v6; // rax
  int v7; // esi
  __int64 v8; // rax
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // rax
  struct _FILETIME SystemTimeAsFileTime; // [esp+1Ch] [ebp-20h] BYREF
  FILETIME LastAccessTime; // [esp+24h] [ebp-18h] BYREF

  FileA = CreateFileA(lpFileName, 0x100u, 0, nullptr, 3u, 0x2000000u, nullptr);
  if ( FileA == (HANDLE)-1 )
  {
    v3 = _errno();
    *v3 = sub_429CD0();
    return -1;
  }
  else
  {
    v5 = FileA;
    if ( a2 != nullptr )
    {
      v6 = a2[1] + 1000000LL * *a2;
      v7 = 10 * HIDWORD(v6);
      v8 = 10LL * (unsigned int)v6;
      HIDWORD(v8) += v7;
      LastAccessTime = (FILETIME)(v8 + 116444736000000000LL);
      v9 = a2[3] + 1000000LL * a2[2];
      v10 = 10 * HIDWORD(v9);
      v11 = 10LL * (unsigned int)v9;
      HIDWORD(v11) += v10;
      SystemTimeAsFileTime = (struct _FILETIME)(v11 + 116444736000000000LL);
    }
    else
    {
      GetSystemTimeAsFileTime(&SystemTimeAsFileTime);
      LastAccessTime = SystemTimeAsFileTime;
    }
    v4 = 0;
    if ( !SetFileTime(v5, nullptr, &LastAccessTime, &SystemTimeAsFileTime) )
    {
      *_errno() = 22;
      v4 = -1;
    }
    CloseHandle(v5);
  }
  return v4;
}

