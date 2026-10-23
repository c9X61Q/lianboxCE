// gettime.exe @ 0x426ce8 size=29

int __cdecl fegetenv(fenv_t *Env)
{
  unsigned __int16 v1; // fps

  Env->_Fe_ctl = __acrt_fenv_get_control();
  Env->_Fe_stat = __acrt_fenv_get_status(v1);
  return 0;
}

