// gettime.exe @ 0x4106e5 size=133

// Microsoft VisualC universal runtime
char __thiscall unknown_libname_76(int this)
{
  _QWORD **v2; // edx
  _QWORD *v3; // edi
  int v4; // eax
  int v6; // eax
  int v7; // eax
  int v8; // eax

  v2 = *(_QWORD ***)(this + 16);
  *(_DWORD *)(this + 16) = v2 + 1;
  v3 = *v2;
  if ( _get_printf_count_output() == 0 )
    goto LABEL_2;
  v6 = __crt_stdio_output::to_integer_size(*(_DWORD *)(this + 40)) - 1;
  if ( v6 != 0 )
  {
    v7 = v6 - 1;
    if ( v7 != 0 )
    {
      v8 = v7 - 2;
      if ( v8 != 0 )
      {
        if ( v8 != 4 )
        {
LABEL_2:
          v4 = *(_DWORD *)(this + 8);
          *(_BYTE *)(v4 + 28) = 1;
          *(_DWORD *)(v4 + 24) = 22;
          _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, *(struct __acrt_ptd ***)(this + 8));
          return 0;
        }
        *v3 = *(int *)(this + 20);
      }
      else
      {
        *(_DWORD *)v3 = *(_DWORD *)(this + 20);
      }
    }
    else
    {
      *(_WORD *)v3 = *(_WORD *)(this + 20);
    }
  }
  else
  {
    *(_BYTE *)v3 = *(_BYTE *)(this + 20);
  }
  *(_BYTE *)(this + 44) = 1;
  return 1;
}

