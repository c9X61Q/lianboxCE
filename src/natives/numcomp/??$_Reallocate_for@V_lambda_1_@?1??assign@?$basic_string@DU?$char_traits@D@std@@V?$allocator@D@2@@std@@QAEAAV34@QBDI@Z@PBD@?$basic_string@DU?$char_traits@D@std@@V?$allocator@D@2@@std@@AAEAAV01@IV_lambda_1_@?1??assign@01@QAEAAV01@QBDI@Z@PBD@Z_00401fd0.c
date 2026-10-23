// numcomp.exe @ 0x401fd0 size=197

void **__thiscall std::string::PBD::Z::_Reallocate_for<`std::string::assign'::`2'::_lambda_1_,unsigned char * const,std::string &,char const * const,unsigned int>(
        void **this,
        size_t Size,
        char a3,
        void *Src)
{
  void *v4; // eax
  int v6; // [esp+0h] [ebp-14h]
  unsigned int v7; // [esp+4h] [ebp-10h]
  char *v8; // [esp+8h] [ebp-Ch]
  void *v9; // [esp+Ch] [ebp-8h] BYREF
  void **v10; // [esp+10h] [ebp-4h]

  v10 = this;
  if ( Size > std::string::max_size(this) )
    sub_4042F0();
  v7 = (unsigned int)v10[5];
  v8 = (char *)sub_4038A0(Size);
  v6 = sub_403B70(v10);
  v9 = (void *)std::allocator<char>::allocate(v8 + 1);
  unknown_libname_7(v10, v6);
  v10[4] = (void *)Size;
  v10[5] = v8;
  v4 = (void *)unknown_libname_1((int)v9);
  sub_4034B0(v4, Size, Src);
  if ( v7 < 0x10 )
  {
    sub_401F00((int)v10, (int)&v9);
  }
  else
  {
    std::allocator<char>::deallocate(*v10, v7 + 1);
    *v10 = v9;
  }
  return v10;
}

