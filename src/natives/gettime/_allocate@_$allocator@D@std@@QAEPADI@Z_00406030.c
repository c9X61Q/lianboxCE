// gettime.exe @ 0x406030 size=34

unsigned int __stdcall std::allocator<char>::allocate(int a1)
{
  size_t size_of; // eax

  size_of = std::_Get_size_of_n<1>(a1);
  return std::_Allocate<8,std::_Default_allocate_traits,0>(size_of);
}

