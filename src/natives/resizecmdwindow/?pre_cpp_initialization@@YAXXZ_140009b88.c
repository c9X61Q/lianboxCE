// resizecmdwindow.exe @ 0x140009b88 size=25

void __fastcall pre_cpp_initialization()
{
  struct _exception *v0; // rcx
  int v1; // eax

  _scrt_set_unhandled_exception_filter();
  v1 = UserMathErrorFunction(v0);
  set_new_mode(v1);
}

