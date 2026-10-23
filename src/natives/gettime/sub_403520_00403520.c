// gettime.exe @ 0x403520 size=59

int __thiscall sub_403520(_DWORD *this)
{
  int result; // eax

  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 2) + 4) - 8) = &std::ostream::`vftable';
  result = *(_DWORD *)(*(this - 2) + 4) - 8;
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 2) + 4) - 12) = result;
  return result;
}

