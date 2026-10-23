// gettime.exe @ 0x402070 size=281

size_t *__thiscall std::string::PBDI::Z::_Reallocate_grow_by<`std::string::append'::`2'::_lambda_1_,unsigned char * const,std::string &,char const * const,unsigned int>(
        size_t *this,
        unsigned int a2,
        char a3,
        void *a4,
        size_t a5)
{
  void *v5; // eax
  void *v7; // [esp+0h] [ebp-28h]
  void *Block; // [esp+8h] [ebp-20h]
  unsigned int v9; // [esp+Ch] [ebp-1Ch]
  int v10; // [esp+10h] [ebp-18h]
  int v11; // [esp+18h] [ebp-10h] BYREF
  size_t Size; // [esp+1Ch] [ebp-Ch]
  size_t *v13; // [esp+20h] [ebp-8h]
  void *Src; // [esp+24h] [ebp-4h]

  v13 = this;
  Src = this;
  Size = *(this + 4);
  if ( std::string::max_size(this) - Size < a2 )
    sub_406010();
  v9 = *((_DWORD *)Src + 5);
  v10 = sub_404580(a2 + Size);
  sub_404E00(v13);
  v11 = std::allocator<char>::allocate(v10 + 1);
  unknown_libname_10(Src);
  *((_DWORD *)Src + 4) = a2 + Size;
  *((_DWORD *)Src + 5) = v10;
  v7 = (void *)unknown_libname_1(v11);
  if ( v9 < 0x10 )
  {
    sub_403F50(v7, Src, Size, a4, a5);
    sub_4018E0((int)Src, (int)&v11);
  }
  else
  {
    Block = *(void **)Src;
    v5 = (void *)unknown_libname_1(*(_DWORD *)Src);
    sub_403F50(v7, v5, Size, a4, a5);
    std::allocator<char>::deallocate(Block, v9 + 1);
    *(_DWORD *)Src = v11;
  }
  return v13;
}

