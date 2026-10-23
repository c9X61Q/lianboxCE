// busybox.exe @ 0x46d7b0 size=323

DWORD __usercall sub_46D7B0@<eax>(DWORD *a1@<eax>)
{
  DWORD v2; // eax
  signed int i; // ebx
  DWORD v5; // eax
  DWORD ExitCode[4]; // [esp+10h] [ebp-10h] BYREF

  v2 = qword_485BF8;
  if ( (int)qword_485BF8 >= (int)*(&qword_485BF8 + 1) )
  {
LABEL_9:
    for ( i = qword_485BF8 - 1; ; --i )
    {
      if ( i < 0 )
      {
        if ( (int)qword_485BF8 > 63 )
        {
          while ( 1 )
          {
            v5 = 64;
            if ( i + 63 < (int)qword_485BF8 )
              v5 = qword_485BF8 - i;
            if ( WaitForMultipleObjects(v5, &lpHandles[i], false, 0x64u) != 258 )
              break;
            i += 64;
            if ( (int)qword_485BF8 < i )
              i = 0;
          }
        }
        else
        {
          WaitForMultipleObjects(qword_485BF8, lpHandles, false, 0xFFFFFFFF);
        }
        goto LABEL_9;
      }
      ExitCode[0] = 0;
      if ( !GetExitCodeProcess(lpHandles[i], ExitCode) || ExitCode[0] != 259 )
        break;
    }
    CloseHandle(lpHandles[i]);
    if ( i + 1 < (int)qword_485BF8 )
      lpHandles[i] = lpHandles[qword_485BF8 - 1];
    *a1 = qword_485BF8 - 1;
    if ( *(&qword_485BF8 + 1) == 0 )
      --qword_485BF8;
    return ExitCode[0];
  }
  else
  {
    ++qword_485BF8;
    *a1 = v2;
    return 0;
  }
}

