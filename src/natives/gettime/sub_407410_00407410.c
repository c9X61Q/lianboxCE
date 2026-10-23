// gettime.exe @ 0x407410 size=172

int *__thiscall sub_407410(int *this, size_t a2, size_t Size, char a4)
{
  int *v5; // [esp+0h] [ebp-14h]
  int v6; // [esp+8h] [ebp-Ch]

  sub_404610(this, a2);
  v6 = *(this + 4);
  if ( Size > *(this + 5) - v6 )
    return std::string::IID::Z::_Reallocate_grow_by<`std::string::insert'::`2'::_lambda_1_,unsigned char * const,std::string &,unsigned int,unsigned int,char>(
             this,
             Size,
             0,
             a2,
             Size,
             a4);
  *(this + 4) = Size + v6;
  v5 = unknown_libname_18(this);
  unknown_libname_25((char *)v5 + a2 + Size, (char *)v5 + a2, v6 - a2 + 1);
  std::_Narrow_char_traits<char,int>::assign((char *)v5 + a2, Size, a4);
  return this;
}

