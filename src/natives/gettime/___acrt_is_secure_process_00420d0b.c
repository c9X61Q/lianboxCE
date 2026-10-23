// gettime.exe @ 0x420d0b size=19

unsigned int __acrt_is_secure_process()
{
  return NtCurrentTeb()->ProcessEnvironmentBlock->ProcessParameters->Flags >> 31;
}

