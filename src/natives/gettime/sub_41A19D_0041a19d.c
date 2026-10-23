// gettime.exe @ 0x41a19d size=64

int __stdcall sub_41A19D(int a1)
{
  FARPROC function; // eax

  function = try_get_function(
               25,
               "AppPolicyGetProcessTerminationMethod",
               &dword_42D4FC,
               (int *)"AppPolicyGetProcessTerminationMethod");
  if ( function != nullptr )
    return ((int (__thiscall *)(FARPROC, int, int))function)(function, -6, a1);
  else
    return -1073741275;
}

