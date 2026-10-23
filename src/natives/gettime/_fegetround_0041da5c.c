// gettime.exe @ 0x41da5c size=13

int __cdecl fegetround()
{
  int control; // eax

  control = __acrt_fenv_get_control();
  return __acrt_fenv_get_common_round_control(control);
}

