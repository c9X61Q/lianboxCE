// gettime.exe @ 0x406090 size=147

size_t *__thiscall std::string::append(size_t *this, size_t Size, char a3)
{
  int *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  char v7; // [esp+Fh] [ebp-1h] BYREF

  v5 = *(this + 4);
  if ( Size > *(this + 5) - v5 )
    return std::string::ID::Z::_Reallocate_grow_by<`std::string::append'::`2'::_lambda_1_,unsigned char * const,std::string &,unsigned int,char>(
             this,
             Size,
             0,
             Size,
             a3);
  *(this + 4) = Size + v5;
  v4 = unknown_libname_18((int *)this);
  std::_Narrow_char_traits<char,int>::assign((char *)v4 + v5, Size, a3);
  v7 = 0;
  unknown_libname_21((char *)v4 + Size + v5, &v7);
  return this;
}

