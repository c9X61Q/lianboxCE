// gettime.exe @ 0x405f30 size=137

int __thiscall sub_405F30(void **this)
{
  void *Block; // [esp+4h] [ebp-Ch]
  char v4; // [esp+Fh] [ebp-1h] BYREF

  unknown_libname_10(this);
  if ( std::_String_val<std::_Simple_types<char>>::_Large_string_engaged(this) )
  {
    Block = *this;
    sub_404E00((_Cnd_internal_imp_t *)this);
    sub_401820();
    std::allocator<char>::deallocate(Block, (int)*(this + 5) + 1);
  }
  *(this + 4) = nullptr;
  *(this + 5) = (void *)15;
  v4 = 0;
  return unknown_libname_21(this, &v4);
}

