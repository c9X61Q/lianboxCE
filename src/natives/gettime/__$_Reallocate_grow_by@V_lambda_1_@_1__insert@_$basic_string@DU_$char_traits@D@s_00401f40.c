// gettime.exe @ 0x401f40 size=291

int *__thiscall std::string::IID::Z::_Reallocate_grow_by<`std::string::insert'::`2'::_lambda_1_,unsigned char * const,std::string &,unsigned int,unsigned int,char>(
        int *this,
        unsigned int a2,
        char a3,
        size_t a4,
        size_t Size,
        char a6)
{
  void *v6; // eax
  void *v8; // [esp+0h] [ebp-28h]
  void *Block; // [esp+8h] [ebp-20h]
  unsigned int v10; // [esp+Ch] [ebp-1Ch]
  int v11; // [esp+10h] [ebp-18h]
  int v12; // [esp+18h] [ebp-10h] BYREF
  int v13; // [esp+1Ch] [ebp-Ch]
  int *v14; // [esp+20h] [ebp-8h]
  void *Src; // [esp+24h] [ebp-4h]

  v14 = this;
  Src = this;
  v13 = *(this + 4);
  if ( std::string::max_size(this) - v13 < a2 )
    sub_406010();
  v10 = *((_DWORD *)Src + 5);
  v11 = sub_404580(a2 + v13);
  sub_404E00(v14);
  v12 = std::allocator<char>::allocate(v11 + 1);
  unknown_libname_10(Src);
  *((_DWORD *)Src + 4) = a2 + v13;
  *((_DWORD *)Src + 5) = v11;
  v8 = (void *)unknown_libname_1(v12);
  if ( v10 < 0x10 )
  {
    sub_403EB0(v8, Src, v13, a4, Size, a6);
    sub_4018E0((int)Src, (int)&v12);
  }
  else
  {
    Block = *(void **)Src;
    v6 = (void *)unknown_libname_1(*(_DWORD *)Src);
    sub_403EB0(v8, v6, v13, a4, Size, a6);
    std::allocator<char>::deallocate(Block, v10 + 1);
    *(_DWORD *)Src = v12;
  }
  return v14;
}

