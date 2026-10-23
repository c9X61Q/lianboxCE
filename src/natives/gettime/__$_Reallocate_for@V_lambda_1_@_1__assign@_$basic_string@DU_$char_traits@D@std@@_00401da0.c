// gettime.exe @ 0x401da0 size=197

void **__thiscall std::string::PBD::Z::_Reallocate_for<`std::string::assign'::`2'::_lambda_1_,unsigned char * const,std::string &,char const * const,unsigned int>(
        void **this,
        size_t Size,
        char a3,
        void *Src)
{
  void *v4; // eax
  unsigned int v6; // [esp+4h] [ebp-10h]
  char *v7; // [esp+8h] [ebp-Ch]
  void *v8; // [esp+Ch] [ebp-8h] BYREF
  void **v9; // [esp+10h] [ebp-4h]

  v9 = this;
  if ( Size > std::string::max_size(this) )
    sub_406010();
  v6 = (unsigned int)v9[5];
  v7 = (char *)sub_404580(Size);
  sub_404E00(v9);
  v8 = (void *)std::allocator<char>::allocate(v7 + 1);
  unknown_libname_10(v9);
  v9[4] = (void *)Size;
  v9[5] = v7;
  v4 = (void *)unknown_libname_1((int)v8);
  sub_403F10(v4, Size, Src);
  if ( v6 < 0x10 )
  {
    sub_4018E0((int)v9, (int)&v8);
  }
  else
  {
    std::allocator<char>::deallocate(*v9, v6 + 1);
    *v9 = v8;
  }
  return v9;
}

