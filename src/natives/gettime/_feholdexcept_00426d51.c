// gettime.exe @ 0x426d51 size=77

int __cdecl feholdexcept(fenv_t *Env)
{
  unsigned int Fe_ctl; // edx
  fenv_t Enva; // [esp+0h] [ebp-8h] BYREF

  Enva._Fe_ctl = 0;
  Enva._Fe_stat = 0;
  if ( fegetenv(&Enva) != 0 )
    return 1;
  Fe_ctl = Enva._Fe_ctl;
  *Env = Enva;
  Enva._Fe_ctl = Fe_ctl | 0x1F;
  if ( fesetenv(&Enva) != 0 )
    return 1;
  _clearfp();
  return 0;
}

