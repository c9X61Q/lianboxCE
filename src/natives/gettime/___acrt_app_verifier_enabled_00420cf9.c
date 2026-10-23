// gettime.exe @ 0x420cf9 size=18

char __acrt_app_verifier_enabled()
{
  return BYTE1(NtCurrentTeb()->ProcessEnvironmentBlock->NtGlobalFlag) & 1;
}

