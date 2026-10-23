// gettime.exe @ 0x4093d0 size=160

void **__thiscall std::string::D::Z::_Reallocate_grow_by<`std::string::push_back'::`2'::_lambda_1_,unsigned char * const,void,char>(
        void **this,
        unsigned int a2,
        int a3,
        char a4)
{
  size_t v4; // ebx
  unsigned int v5; // esi
  void *v6; // esi
  void *v9; // [esp+10h] [ebp-8h]
  unsigned int v10; // [esp+14h] [ebp-4h]

  v4 = (size_t)*(this + 4);
  if ( 0x7FFFFFFF - v4 < a2 )
    sub_406010();
  v10 = (unsigned int)*(this + 5);
  v5 = std::string::_Calculate_growth(v4 + a2, v10, 0x7FFFFFFFu);
  v9 = (void *)std::_Allocate<8,std::_Default_allocate_traits,0>(v5 + 1);
  *(this + 4) = (void *)(v4 + a2);
  *(this + 5) = (void *)v5;
  if ( v10 < 0x10 )
  {
    memmove(v9, this, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
  }
  else
  {
    v6 = *this;
    memmove(v9, *this, v4);
    *((_BYTE *)v9 + v4) = a4;
    *((_BYTE *)v9 + v4 + 1) = 0;
    std::_Deallocate<8,0>(v6, v10 + 1);
  }
  *this = v9;
  return this;
}

