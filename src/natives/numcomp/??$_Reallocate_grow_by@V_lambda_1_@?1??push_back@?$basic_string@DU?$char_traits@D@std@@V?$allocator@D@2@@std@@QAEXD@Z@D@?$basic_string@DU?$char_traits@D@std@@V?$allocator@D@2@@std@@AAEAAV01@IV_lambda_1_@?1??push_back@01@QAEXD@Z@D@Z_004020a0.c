// numcomp.exe @ 0x4020a0 size=275

size_t *__thiscall std::string::D::Z::_Reallocate_grow_by<`std::string::push_back'::`2'::_lambda_1_,unsigned char * const,void,char>(
        size_t *this,
        size_t a2,
        char a3,
        char a4)
{
  void *v4; // eax
  void *v6; // [esp+0h] [ebp-28h]
  void *Block; // [esp+8h] [ebp-20h]
  unsigned int v8; // [esp+Ch] [ebp-1Ch]
  int v9; // [esp+10h] [ebp-18h]
  int v10; // [esp+18h] [ebp-10h] BYREF
  size_t Size; // [esp+1Ch] [ebp-Ch]
  size_t *v12; // [esp+20h] [ebp-8h]
  void *Src; // [esp+24h] [ebp-4h]

  v12 = this;
  Src = this;
  Size = *(this + 4);
  if ( std::string::max_size(this) - Size < a2 )
    sub_4042F0();
  v8 = *((_DWORD *)Src + 5);
  v9 = sub_4038A0(a2 + Size);
  sub_403B70(v12);
  v10 = std::allocator<char>::allocate(v9 + 1);
  unknown_libname_7(Src);
  *((_DWORD *)Src + 4) = a2 + Size;
  *((_DWORD *)Src + 5) = v9;
  v6 = (void *)unknown_libname_1(v10);
  if ( v8 < 0x10 )
  {
    sub_403450(v6, Src, Size, a4);
    sub_401F00((int)Src, (int)&v10);
  }
  else
  {
    Block = *(void **)Src;
    v4 = (void *)unknown_libname_1(*(_DWORD *)Src);
    sub_403450(v6, v4, Size, a4);
    std::allocator<char>::deallocate(Block, v8 + 1);
    *(_DWORD *)Src = v10;
  }
  return v12;
}

