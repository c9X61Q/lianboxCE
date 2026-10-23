// gettime.exe @ 0x403560 size=81

int __thiscall sub_403560(_DWORD *this)
{
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 20) + 4) - 80) = &std::ostringstream::`vftable';
  *(_DWORD *)((char *)this + *(_DWORD *)(*(this - 20) + 4) - 84) = *(_DWORD *)(*(this - 20) + 4) - 80;
  sub_403620(this - 19);
  return sub_403520(this - 18);
}

