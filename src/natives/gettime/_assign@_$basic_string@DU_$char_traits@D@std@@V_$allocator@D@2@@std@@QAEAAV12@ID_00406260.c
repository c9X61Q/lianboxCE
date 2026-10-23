// gettime.exe @ 0x406260 size=122

void **__thiscall std::string::assign(int this, size_t Size, char a3)
{
  int *v4; // [esp+0h] [ebp-Ch]
  char v6; // [esp+Bh] [ebp-1h] BYREF

  if ( Size > *(_DWORD *)(this + 20) )
    return std::string::D::Z::_Reallocate_for<`std::string::assign'::`2'::_lambda_1_,unsigned char * const,std::string &,unsigned int,char>(
             (void **)this,
             Size,
             0,
             a3);
  v4 = unknown_libname_18((int *)this);
  *(_DWORD *)(this + 16) = Size;
  std::_Narrow_char_traits<char,int>::assign(v4, Size, a3);
  v6 = 0;
  unknown_libname_21((_BYTE *)v4 + Size, &v6);
  return (void **)this;
}

