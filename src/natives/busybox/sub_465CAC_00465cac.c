// busybox.exe @ 0x465cac size=424

DWORD __cdecl sub_465CAC(char a1, int a2)
{
  int v2; // ebx
  unsigned int v3; // eax
  unsigned int v4; // esi
  int v5; // eax
  const char *v6; // edx
  char **v7; // ebx
  void *v8; // eax
  int v9; // ebx
  DWORD ProcessId; // eax
  double v12; // [esp+10h] [ebp-28h]
  DWORD ExitCode; // [esp+1Ch] [ebp-1Ch] BYREF
  int v14; // [esp+20h] [ebp-18h] BYREF
  const char *v15[5]; // [esp+24h] [ebp-14h] BYREF

  v15[2] = &a1;
  v2 = a2;
  ExitCode = 0;
  v14 = 0;
  v15[0] = "TERM";
  byte_4735D4 = 125;
  sub_435D44(a2, (int)"+s:", v15, &v14);
  v3 = sub_4354AC(v15[0]);
  if ( v3 > 0xF || (v4 = v3, v5 = 33281, !_bittest(&v5, v4)) )
    sub_41784C("unknown signal '%s'", v15[0]);
  v6 = *(const char **)(v2 + 4 * dword_473090);
  if ( v6 == nullptr || (++dword_473090, v12 = sub_449C6C(v6), *(v7 = (char **)(v2 + 4 * dword_473090)) == nullptr) )
    sub_418164();
  v8 = (void *)sub_444C0C(v7);
  if ( v8 == (void *)-1 )
  {
    byte_4735D4 = (*_errno() != 13) + 126;
    sub_418014((int)*v7, "can't execute '%s'", *v7);
  }
  v9 = (int)v12;
  hObject = v8;
  sub_4014D0((_onexit_t)sub_43CFF0);
  do
  {
    sub_461010(1);
    if ( v4 != 0 && --v9 <= 0 )
    {
      ExitCode = v4 == 9 ? 137 : 124;
      ProcessId = GetProcessId(hObject);
      sub_43CDF4(ProcessId, v4);
      goto LABEL_15;
    }
  }
  while ( WaitForSingleObject(hObject, 0) != 0 );
  GetExitCodeProcess(hObject, &ExitCode);
LABEL_15:
  CloseHandle(hObject);
  hObject = (HANDLE)-1;
  return ExitCode;
}

