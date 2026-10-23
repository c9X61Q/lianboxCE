// gettime.exe @ 0x4064a0 size=146

void __thiscall std::ios_base::clear(std::ios_base *this, char a2, bool a3)
{
  int v3; // edx
  const struct std::error_code *error_code; // eax
  _BYTE pExceptionObject[20]; // [esp+0h] [ebp-28h] BYREF
  _BYTE v6[8]; // [esp+14h] [ebp-14h] BYREF
  std::ios_base *v7; // [esp+1Ch] [ebp-Ch]
  char *Str; // [esp+20h] [ebp-8h]
  int v9; // [esp+24h] [ebp-4h]

  v7 = this;
  v3 = a2 & 0x17;
  *((_DWORD *)this + 3) = v3;
  v9 = *((_DWORD *)v7 + 4) & v3;
  if ( v9 != 0 )
  {
    if ( a3 )
      _CxxThrowException(nullptr, nullptr);
    if ( (v9 & 4) != 0 )
    {
      Str = "ios_base::badbit set";
    }
    else if ( (v9 & 2) != 0 )
    {
      Str = "ios_base::failbit set";
    }
    else
    {
      Str = "ios_base::eofbit set";
    }
    error_code = (const struct std::error_code *)std::make_error_code(v6, 1);
    std::ios_base::failure::failure((std::ios_base::failure *)pExceptionObject, Str, error_code);
    _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI5_AVfailure_ios_base_std__);
  }
}

