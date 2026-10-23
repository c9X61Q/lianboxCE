// gettime.exe @ 0x40ed46 size=372

int __cdecl common_vsprintf<__crt_stdio_output::format_validation_base,char>(
        int a1,
        int a2,
        _DWORD *a3,
        unsigned int a4,
        int a5,
        __crt_cached_ptd_host *a6,
        int a7)
{
  _BYTE *v8; // edi
  int v9; // eax
  int v10; // eax
  int v11; // esi
  _DWORD v12[2]; // [esp+Ch] [ebp-470h] BYREF
  int v13; // [esp+14h] [ebp-468h]
  int v14; // [esp+18h] [ebp-464h]
  _DWORD *v15; // [esp+1Ch] [ebp-460h] BYREF
  _BYTE v16[60]; // [esp+20h] [ebp-45Ch] BYREF
  _BYTE v17[1044]; // [esp+5Ch] [ebp-420h] BYREF
  int v18; // [esp+470h] [ebp-Ch]

  v15 = a3;
  if ( a5 == 0 || a4 != 0 && a3 == nullptr )
  {
    *((_BYTE *)a6 + 28) = 1;
    *((_DWORD *)a6 + 6) = 22;
    _invalid_parameter_internal(nullptr, nullptr, nullptr, 0, 0, (struct __acrt_ptd **)a6);
    return -1;
  }
  v14 = 0;
  v8 = v15;
  v12[0] = v15;
  v12[1] = a4;
  v13 = 0;
  if ( (a1 & 2) != 0 || (LOBYTE(v14) = 0, v15 == nullptr) )
    LOBYTE(v14) = 1;
  v15 = v12;
  unknown_libname_69(&v15, a1, a2, a5, a6, a7);
  v18 = 0;
  v9 = __crt_stdio_output::output_processor<char,__crt_stdio_output::string_output_adapter<char>,__crt_stdio_output::format_validation_base<char,__crt_stdio_output::string_output_adapter<char>>>::process(v16);
  v15 = (_DWORD *)v9;
  if ( v8 == nullptr )
    goto LABEL_28;
  if ( (a1 & 1) != 0 )
  {
    if ( a4 != 0 || v9 == 0 )
    {
      if ( v13 != a4 )
      {
        v8[v13] = 0;
LABEL_28:
        v11 = (int)v15;
        goto LABEL_29;
      }
      if ( v9 < 0 || v9 <= a4 )
        goto LABEL_28;
    }
    goto LABEL_24;
  }
  if ( (a1 & 2) != 0 )
  {
    if ( a4 == 0 )
      goto LABEL_28;
    if ( v9 < 0 )
    {
      *v8 = 0;
      goto LABEL_28;
    }
    v10 = v13;
    if ( v13 == a4 )
    {
      v8[a4 - 1] = 0;
      goto LABEL_28;
    }
    goto LABEL_27;
  }
  if ( a4 != 0 )
  {
    v10 = v13;
    if ( v13 == a4 )
    {
      v8[a4 - 1] = 0;
      v11 = -2;
      goto LABEL_29;
    }
LABEL_27:
    v8[v10] = 0;
    goto LABEL_28;
  }
LABEL_24:
  v11 = -1;
LABEL_29:
  __crt_stdio_output::formatting_buffer::~formatting_buffer((__crt_stdio_output::formatting_buffer *)v17);
  return v11;
}

