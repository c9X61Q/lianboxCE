// gettime.exe @ 0x426d05 size=76

int __cdecl fesetenv(const fenv_t *Env)
{
  fenv_t Enva; // [esp+4h] [ebp-8h] BYREF

  __acrt_fenv_set_control(Env->_Fe_ctl);
  __acrt_fenv_set_status(Env->_Fe_stat);
  Enva._Fe_ctl = 0;
  Enva._Fe_stat = 0;
  return fegetenv(&Enva) != 0 || Env->_Fe_ctl != Enva._Fe_ctl || Env->_Fe_stat != Enva._Fe_stat;
}

