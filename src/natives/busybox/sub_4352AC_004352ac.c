// busybox.exe @ 0x4352ac size=314

int __cdecl sub_4352AC(int a1, int a2)
{
  int v2; // ebp
  DWORD CurrentProcessId; // ebx
  int i; // ebx
  int v5; // edx
  char v6; // al
  int v7; // edx
  char v8; // al
  int v9; // edx
  char v10; // al
  LONGLONG v11; // rax
  int j; // ebx
  unsigned int v13; // ecx
  __int64 v15; // [esp+4h] [ebp-74h]
  LARGE_INTEGER PerformanceCount; // [esp+Ch] [ebp-6Ch] BYREF
  struct _SYSTEMTIME SystemTime; // [esp+14h] [ebp-64h] BYREF
  struct _MEMORYSTATUS Buffer; // [esp+24h] [ebp-54h] BYREF
  struct _SYSTEM_INFO SystemInfo; // [esp+44h] [ebp-34h] BYREF

  v2 = a2;
  if ( a2 >= 0 && a1 != 0 )
  {
    if ( (_DWORD)qword_473574 == 0 )
    {
      CurrentProcessId = GetCurrentProcessId();
      HIDWORD(v15) = GetCurrentThreadId();
      LODWORD(v15) = GetTickCount() ^ CurrentProcessId;
      GetLocalTime(&SystemTime);
      for ( i = 3; i != 7; ++i )
      {
        v5 = *((_DWORD *)&v15 + i + 1);
        v6 = i;
        *((_DWORD *)&v15 + (v6 & 1)) ^= v5;
      }
      GlobalMemoryStatus(&Buffer);
      do
      {
        v7 = *((_DWORD *)&v15 + i + 1);
        v8 = i++;
        *((_DWORD *)&v15 + (v8 & 1)) ^= v7;
      }
      while ( i != 15 );
      GetSystemInfo(&SystemInfo);
      do
      {
        v9 = *((_DWORD *)&v15 + i + 1);
        v10 = i++;
        *((_DWORD *)&v15 + (v10 & 1)) ^= v9;
      }
      while ( i != 24 );
      QueryPerformanceCounter(&PerformanceCount);
      v11 = v15 ^ PerformanceCount.QuadPart;
      if ( (unsigned int)v15 == PerformanceCount.LowPart )
        LODWORD(v11) = 1;
      qword_47357C = v11;
      qword_473574 = v11;
    }
    for ( j = a2; j > 0; j -= 4 )
    {
      SystemInfo.dwOemId = sub_4325DC((int *)&qword_473574);
      v13 = j;
      if ( j > 4 )
        v13 = 4;
      qmemcpy((void *)(a2 + a1 - j), &SystemInfo, v13);
    }
  }
  else
  {
    *_errno() = 22;
    return -1;
  }
  return v2;
}

