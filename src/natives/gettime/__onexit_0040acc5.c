// gettime.exe @ 0x40acc5 size=45

_onexit_t __cdecl _onexit(_onexit_t Func)
{
  int v1; // eax

  if ( stru_438354._first == (_PVFV *)-1 )
    v1 = sub_41646C(Func);
  else
    v1 = _register_onexit_function(&stru_438354, Func);
  return v1 == 0 ? Func : nullptr;
}

