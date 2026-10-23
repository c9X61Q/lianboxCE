// gettime.exe @ 0x402190 size=283

size_t *__thiscall std::string::ID::Z::_Reallocate_grow_by<`std::string::append'::`2'::_lambda_1_,unsigned char * const,std::string &,unsigned int,char>(
        size_t *this,
        unsigned int a2,
        char a3,
        size_t Size,
        char a5)
{
  void *v5; // eax
  void *v7; // [esp+0h] [ebp-28h]
  void *Block; // [esp+8h] [ebp-20h]
  unsigned int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+18h] [ebp-10h] BYREF
  size_t v12; // [esp+1Ch] [ebp-Ch]
  size_t *v13; // [esp+20h] [ebp-8h]
  void *Src; // [esp+24h] [ebp-4h]

  v13 = this;
  Src = this;
  v12 = *(this + 4);
  if ( std::string::max_size(this) - v12 < a2 )
    sub_406010();
  v9 = *((_DWORD *)Src + 5);
  v10 = sub_404580(a2 + v12);
  sub_404E00(v13);
  v11 = std::allocator<char>::allocate(v10 + 1);
  unknown_libname_10(Src);
  *((_DWORD *)Src + 4) = a2 + v12;
  *((_DWORD *)Src + 5) = v10;
  v7 = (void *)unknown_libname_1(v11);
  if ( v9 < 0x10 )
  {
    sub_403FB0(v7, Src, v12, Size, a5);
    sub_4018E0((int)Src, (int)&v11);
  }
  else
  {
    Block = *(void **)Src;
    v5 = (void *)unknown_libname_1(*(_DWORD *)Src);
    sub_403FB0(v7, v5, v12, Size, a5);
    std::allocator<char>::deallocate(Block, v9 + 1);
    *(_DWORD *)Src = v11;
  }
  return v13;
}

