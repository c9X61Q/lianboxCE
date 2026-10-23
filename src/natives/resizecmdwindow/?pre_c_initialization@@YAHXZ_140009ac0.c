// resizecmdwindow.exe @ 0x140009ac0 size=182

int __fastcall pre_c_initialization()
{
  int startup_file_mode; // eax
  struct _exception *v1; // rcx
  int v2; // ebx
  charNode *v3; // rcx
  _crt_argv_mode v4; // eax
  struct _exception *v5; // rcx
  int v6; // eax
  struct _exception *v7; // rcx
  struct _exception *v8; // rcx
  int result; // eax

  set_app_type(_crt_console_app);
  startup_file_mode = get_startup_file_mode();
  set_fmode(startup_file_mode);
  v2 = UserMathErrorFunction(v1);
  *_p__commode() = v2;
  if ( (unsigned __int8)_scrt_initialize_onexit_tables(1) != 0 )
  {
    sub_14000A46C();
    atexit(sub_14000A4A8);
    v4 = (unsigned int)charNode::raw_length(v3);
    if ( configure_narrow_argv(v4) == 0 )
    {
      sub_140009A40();
      if ( (unsigned int)_scrt_is_user_matherr_present() != 0 )
        _setusermatherr(UserMathErrorFunction);
      v6 = UserMathErrorFunction(v5);
      configthreadlocale(v6);
      if ( (unsigned __int8)sub_14000A208() != 0 )
        initialize_narrow_environment();
      UserMathErrorFunction(v7);
      result = j_UserMathErrorFunction(v8);
      if ( result == 0 )
        return result;
    }
  }
  _scrt_fastfail(7);
  JUMPOUT(0x140009B75LL);
}

