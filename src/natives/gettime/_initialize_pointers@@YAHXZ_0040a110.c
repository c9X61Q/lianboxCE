// gettime.exe @ 0x40a110 size=698

int __cdecl initialize_pointers()
{
  HMODULE ModuleHandleW; // esi

  ModuleHandleW = GetModuleHandleW(L"kernel32.dll");
  FlsAlloc = (DWORD (__stdcall *)(PFLS_CALLBACK_FUNCTION))GetProcAddress(ModuleHandleW, "FlsAlloc");
  FlsFree = (BOOL (__stdcall *)(DWORD))GetProcAddress(ModuleHandleW, "FlsFree");
  FlsGetValue = (PVOID (__stdcall *)(DWORD))GetProcAddress(ModuleHandleW, "FlsGetValue");
  FlsSetValue = (BOOL (__stdcall *)(DWORD, PVOID))GetProcAddress(ModuleHandleW, "FlsSetValue");
  InitializeCriticalSectionEx_0 = (BOOL (__stdcall *)(LPCRITICAL_SECTION, DWORD, DWORD))GetProcAddress(
                                                                                          ModuleHandleW,
                                                                                          "InitializeCriticalSectionEx");
  InitOnceExecuteOnce = (BOOL (__stdcall *)(PINIT_ONCE, PINIT_ONCE_FN, PVOID, LPVOID *))GetProcAddress(
                                                                                          ModuleHandleW,
                                                                                          "InitOnceExecuteOnce");
  CreateEventExW = (HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, LPCWSTR, DWORD, DWORD))GetProcAddress(
                                                                                         ModuleHandleW,
                                                                                         "CreateEventExW");
  CreateSemaphoreW = (HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, LONG, LONG, LPCWSTR))GetProcAddress(
                                                                                         ModuleHandleW,
                                                                                         "CreateSemaphoreW");
  CreateSemaphoreExW = (HANDLE (__stdcall *)(LPSECURITY_ATTRIBUTES, LONG, LONG, LPCWSTR, DWORD, DWORD))GetProcAddress(ModuleHandleW, "CreateSemaphoreExW");
  CreateThreadpoolTimer = (PTP_TIMER (__stdcall *)(PTP_TIMER_CALLBACK, PVOID, PTP_CALLBACK_ENVIRON))GetProcAddress(ModuleHandleW, "CreateThreadpoolTimer");
  SetThreadpoolTimer = (void (__stdcall *)(PTP_TIMER, PFILETIME, DWORD, DWORD))GetProcAddress(
                                                                                 ModuleHandleW,
                                                                                 "SetThreadpoolTimer");
  WaitForThreadpoolTimerCallbacks = (void (__stdcall *)(PTP_TIMER, BOOL))GetProcAddress(
                                                                           ModuleHandleW,
                                                                           "WaitForThreadpoolTimerCallbacks");
  CloseThreadpoolTimer = (void (__stdcall *)(PTP_TIMER))GetProcAddress(ModuleHandleW, "CloseThreadpoolTimer");
  CreateThreadpoolWait = (PTP_WAIT (__stdcall *)(PTP_WAIT_CALLBACK, PVOID, PTP_CALLBACK_ENVIRON))GetProcAddress(
                                                                                                   ModuleHandleW,
                                                                                                   "CreateThreadpoolWait");
  SetThreadpoolWait = (void (__stdcall *)(PTP_WAIT, HANDLE, PFILETIME))GetProcAddress(
                                                                         ModuleHandleW,
                                                                         "SetThreadpoolWait");
  CloseThreadpoolWait = (void (__stdcall *)(PTP_WAIT))GetProcAddress(ModuleHandleW, "CloseThreadpoolWait");
  FlushProcessWriteBuffers = (void (__stdcall *)())GetProcAddress(ModuleHandleW, "FlushProcessWriteBuffers");
  FreeLibraryWhenCallbackReturns = (void (__stdcall *)(PTP_CALLBACK_INSTANCE, HMODULE))GetProcAddress(
                                                                                         ModuleHandleW,
                                                                                         "FreeLibraryWhenCallbackReturns");
  GetCurrentProcessorNumber = (DWORD (__stdcall *)())GetProcAddress(ModuleHandleW, "GetCurrentProcessorNumber");
  CreateSymbolicLinkW = (BOOLEAN (__stdcall *)(LPCWSTR, LPCWSTR, DWORD))GetProcAddress(
                                                                          ModuleHandleW,
                                                                          "CreateSymbolicLinkW");
  GetCurrentPackageId = (LONG (__stdcall *)(UINT32 *, BYTE *))GetProcAddress(ModuleHandleW, "GetCurrentPackageId");
  GetTickCount64 = (ULONGLONG (__stdcall *)())GetProcAddress(ModuleHandleW, "GetTickCount64");
  GetFileInformationByHandleEx = (BOOL (__stdcall *)(HANDLE, FILE_INFO_BY_HANDLE_CLASS, LPVOID, DWORD))GetProcAddress(ModuleHandleW, "GetFileInformationByHandleEx");
  SetFileInformationByHandle = (BOOL (__stdcall *)(HANDLE, FILE_INFO_BY_HANDLE_CLASS, LPVOID, DWORD))GetProcAddress(ModuleHandleW, "SetFileInformationByHandle");
  GetSystemTimePreciseAsFileTime = (int)GetProcAddress(ModuleHandleW, "GetSystemTimePreciseAsFileTime");
  InitializeConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                           ModuleHandleW,
                                                                           "InitializeConditionVariable");
  WakeConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                     ModuleHandleW,
                                                                     "WakeConditionVariable");
  WakeAllConditionVariable = (void (__stdcall *)(PCONDITION_VARIABLE))GetProcAddress(
                                                                        ModuleHandleW,
                                                                        "WakeAllConditionVariable");
  SleepConditionVariableCS = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PCRITICAL_SECTION, DWORD))GetProcAddress(
                                                                                                  ModuleHandleW,
                                                                                                  "SleepConditionVariableCS");
  InitializeSRWLock = (void (__stdcall *)(PSRWLOCK))GetProcAddress(ModuleHandleW, "InitializeSRWLock");
  AcquireSRWLockExclusive = (void (__stdcall *)(PSRWLOCK))GetProcAddress(ModuleHandleW, "AcquireSRWLockExclusive");
  TryAcquireSRWLockExclusive = (BOOLEAN (__stdcall *)(PSRWLOCK))GetProcAddress(
                                                                  ModuleHandleW,
                                                                  "TryAcquireSRWLockExclusive");
  ReleaseSRWLockExclusive = (void (__stdcall *)(PSRWLOCK))GetProcAddress(ModuleHandleW, "ReleaseSRWLockExclusive");
  SleepConditionVariableSRW = (BOOL (__stdcall *)(PCONDITION_VARIABLE, PSRWLOCK, DWORD, ULONG))GetProcAddress(
                                                                                                 ModuleHandleW,
                                                                                                 "SleepConditionVariableSRW");
  CreateThreadpoolWork = (PTP_WORK (__stdcall *)(PTP_WORK_CALLBACK, PVOID, PTP_CALLBACK_ENVIRON))GetProcAddress(
                                                                                                   ModuleHandleW,
                                                                                                   "CreateThreadpoolWork");
  SubmitThreadpoolWork = (void (__stdcall *)(PTP_WORK))GetProcAddress(ModuleHandleW, "SubmitThreadpoolWork");
  CloseThreadpoolWork = (void (__stdcall *)(PTP_WORK))GetProcAddress(ModuleHandleW, "CloseThreadpoolWork");
  CompareStringEx = (int (__stdcall *)(LPCWSTR, DWORD, LPCWCH, int, LPCWCH, int, LPNLSVERSIONINFO, LPVOID, LPARAM))GetProcAddress(ModuleHandleW, "CompareStringEx");
  GetLocaleInfoEx = (int (__stdcall *)(LPCWSTR, LCTYPE, LPWSTR, int))GetProcAddress(ModuleHandleW, "GetLocaleInfoEx");
  LCMapStringEx_0 = (int (__stdcall *)(LPCWSTR, DWORD, LPCWSTR, int, LPWSTR, int, LPNLSVERSIONINFO, LPVOID, LPARAM))GetProcAddress(ModuleHandleW, "LCMapStringEx");
  return 0;
}

