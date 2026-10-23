// gettime.exe @ 0x4148fb size=25

bool __cdecl should_call_terminate_process()
{
  return __acrt_get_process_end_policy() != 1 && (unsigned __int8)__acrt_app_verifier_enabled() == 0;
}

