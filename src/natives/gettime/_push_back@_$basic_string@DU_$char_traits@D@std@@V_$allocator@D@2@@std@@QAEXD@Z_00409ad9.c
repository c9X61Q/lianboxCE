// gettime.exe @ 0x409ad9 size=56

unsigned __int8 __thiscall std::string::push_back(void **this, char a2)
{
  unsigned int v2; // edx
  bool v3; // cf

  v2 = (unsigned int)*(this + 4);
  if ( v2 >= (unsigned int)*(this + 5) )
    return (unsigned __int8)std::string::D::Z::_Reallocate_grow_by<`std::string::push_back'::`2'::_lambda_1_,unsigned char * const,void,char>(
                              this,
                              1u,
                              (int)this,
                              a2);
  v3 = (unsigned int)*(this + 5) < 0x10;
  *(this + 4) = (void *)(v2 + 1);
  if ( !v3 )
    this = (void **)*this;
  *((_BYTE *)this + v2) = a2;
  *((_BYTE *)this + v2 + 1) = 0;
  return a2;
}

