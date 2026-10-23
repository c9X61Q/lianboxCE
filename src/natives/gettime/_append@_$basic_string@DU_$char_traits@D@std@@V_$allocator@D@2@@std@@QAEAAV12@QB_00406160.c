// gettime.exe @ 0x406160 size=145

size_t *__thiscall std::string::append(size_t *this, void *Src, size_t Size)
{
  int *v4; // [esp+0h] [ebp-10h]
  int v5; // [esp+4h] [ebp-Ch]
  char v7; // [esp+Fh] [ebp-1h] BYREF

  v5 = *(this + 4);
  if ( Size > *(this + 5) - v5 )
    return std::string::PBDI::Z::_Reallocate_grow_by<`std::string::append'::`2'::_lambda_1_,unsigned char * const,std::string &,char const * const,unsigned int>(
             this,
             Size,
             0,
             Src,
             Size);
  *(this + 4) = Size + v5;
  v4 = unknown_libname_18((int *)this);
  unknown_libname_25((char *)v4 + v5, Src, Size);
  v7 = 0;
  unknown_libname_21((char *)v4 + Size + v5, &v7);
  return this;
}

