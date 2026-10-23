// gettime.exe @ 0x40b008 size=207

void __usercall __noreturn __report_securityfailure(int a1@<ebx>, int a2@<edi>, int a3@<esi>, unsigned int a4)
{
  int v4; // edx
  int v5; // ecx
  unsigned int v6; // kr00_4
  int vars0; // [esp+31Ch] [ebp+0h]
  int retaddr; // [esp+320h] [ebp+4h]

  if ( IsProcessorFeaturePresent(0x17u) )
    __fastfail(a4);
  dword_438470 = 0;
  dword_43846C = v5;
  dword_438468 = v4;
  dword_438464 = a1;
  dword_438460 = a3;
  dword_43845C = a2;
  word_438488 = __SS__;
  word_43847C = __CS__;
  word_438458 = __DS__;
  word_438454 = __ES__;
  word_438450 = __FS__;
  word_43844C = __GS__;
  v6 = __readeflags();
  dword_438480 = v6;
  dword_438474 = vars0;
  dword_438478 = retaddr;
  dword_438484 = (int)&a4;
  dword_43837C = retaddr;
  dword_438370 = -1073740791;
  dword_438374 = 1;
  dword_438380 = 1;
  dword_438384 = a4;
  __raise_securityfailure((struct _EXCEPTION_POINTERS *)&ExceptionInfo);
}

