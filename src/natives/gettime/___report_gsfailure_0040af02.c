// gettime.exe @ 0x40af02 size=250

void __cdecl __noreturn __report_gsfailure()
{
  int v0; // ebx
  int v1; // edi
  int v2; // esi
  int v3; // edx
  int v4; // ecx
  unsigned int v5; // kr00_4
  int vars0; // [esp+324h] [ebp+0h]
  int retaddr; // [esp+328h] [ebp+4h]
  char v8; // [esp+32Ch] [ebp+8h] BYREF

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(2u);
  dword_438470 = 0;
  dword_43846C = v4;
  dword_438468 = v3;
  dword_438464 = v0;
  dword_438460 = v2;
  dword_43845C = v1;
  word_438488 = __SS__;
  word_43847C = __CS__;
  word_438458 = __DS__;
  word_438454 = __ES__;
  word_438450 = __FS__;
  word_43844C = __GS__;
  v5 = __readeflags();
  dword_438480 = v5;
  dword_438474 = vars0;
  dword_438478 = retaddr;
  dword_438484 = (int)&v8;
  dword_4383C0 = 65537;
  dword_43837C = retaddr;
  dword_438370 = -1073740791;
  dword_438374 = 1;
  dword_438380 = 1;
  dword_438384 = 2;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

