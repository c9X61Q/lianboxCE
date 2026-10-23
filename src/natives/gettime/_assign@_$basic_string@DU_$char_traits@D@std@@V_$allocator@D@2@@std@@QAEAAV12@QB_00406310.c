// gettime.exe @ 0x406310 size=120

void **__thiscall std::string::assign(int this, void *Src, size_t Size)
{
  int *v4; // [esp+0h] [ebp-Ch]
  char v6; // [esp+Bh] [ebp-1h] BYREF

  if ( Size > *(_DWORD *)(this + 20) )
    return std::string::PBD::Z::_Reallocate_for<`std::string::assign'::`2'::_lambda_1_,unsigned char * const,std::string &,char const * const,unsigned int>(
             (void **)this,
             Size,
             0,
             Src);
  v4 = unknown_libname_18((int *)this);
  *(_DWORD *)(this + 16) = Size;
  unknown_libname_25(v4, Src, Size);
  v6 = 0;
  unknown_libname_21((_BYTE *)v4 + Size, &v6);
  return (void **)this;
}

