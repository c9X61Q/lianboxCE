// gettime.exe @ 0x404d20 size=214

int *__thiscall sub_404D20(_DWORD *this, int *a2)
{
  _DWORD *v2; // eax
  int v3; // eax
  int v5; // [esp+0h] [ebp-1Ch]
  int v6; // [esp+4h] [ebp-18h]
  int v7; // [esp+8h] [ebp-14h]
  int v8; // [esp+Ch] [ebp-10h] BYREF
  int v9; // [esp+14h] [ebp-8h]
  _DWORD *v10; // [esp+18h] [ebp-4h]

  v10 = this;
  v5 = 0;
  v6 = 0;
  v7 = 0;
  if ( ((*(this + 15) & 2) == 0 || (v10[15] & 0x20) != 0) && unknown_libname_39(v10) != 0 )
  {
    v9 = std::streambuf::pbase(v10);
    v5 = v9;
    v8 = unknown_libname_39(v10);
    v2 = unknown_libname_5(&v8, v10 + 14);
    v6 = *v2 - v9;
    v3 = std::streambuf::epptr(v10);
    v7 = v3 - v9;
  }
  else if ( (v10[15] & 4) == 0 && unknown_libname_36(v10) != 0 )
  {
    v5 = unknown_libname_32(v10);
    v6 = std::streambuf::egptr(v10) - v5;
    v7 = v6;
  }
  *a2 = v5;
  a2[1] = v6;
  a2[2] = v7;
  return a2;
}

