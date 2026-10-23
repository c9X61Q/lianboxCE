// gettime.exe @ 0x40b1e0 size=283

LONG __usercall __scrt_fastfail@<eax>(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  void *v4; // eax
  int v5; // ecx
  int v6; // edx
  unsigned int v7; // kr00_4
  BOOL v8; // eax
  bool v9; // bl
  LONG result; // eax
  _DWORD v11[179]; // [esp+8h] [ebp-324h] BYREF
  _DWORD v12[20]; // [esp+2D4h] [ebp-58h] BYREF
  struct _EXCEPTION_POINTERS ExceptionInfo; // [esp+324h] [ebp-8h] BYREF
  int savedregs; // [esp+32Ch] [ebp+0h]
  _UNKNOWN *retaddr; // [esp+330h] [ebp+4h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  sub_40B3A5(3);
  v4 = memset(v11, 0, sizeof(v11));
  v11[44] = v4;
  v11[43] = v5;
  v11[42] = v6;
  v11[41] = a1;
  v11[40] = a3;
  v11[39] = a2;
  LOWORD(v11[50]) = __SS__;
  LOWORD(v11[47]) = __CS__;
  LOWORD(v11[38]) = __DS__;
  LOWORD(v11[37]) = __ES__;
  LOWORD(v11[36]) = __FS__;
  LOWORD(v11[35]) = __GS__;
  v7 = __readeflags();
  v11[48] = v7;
  v11[46] = retaddr;
  v11[49] = &retaddr;
  v11[0] = 65537;
  v11[45] = savedregs;
  memset(v12, 0, sizeof(v12));
  v12[0] = 1073741845;
  v12[1] = 1;
  v12[3] = retaddr;
  v8 = IsDebuggerPresent();
  ExceptionInfo.ExceptionRecord = (PEXCEPTION_RECORD)v12;
  ExceptionInfo.ContextRecord = (PCONTEXT)v11;
  v9 = v8;
  SetUnhandledExceptionFilter(nullptr);
  result = UnhandledExceptionFilter(&ExceptionInfo);
  if ( result == 0 && !v9 )
    return sub_40B3A5(3);
  return result;
}

