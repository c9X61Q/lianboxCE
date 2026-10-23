// gettime.exe @ 0x407620 size=66

int __cdecl sub_407620(int a1)
{
  if ( *(_DWORD *)a1 == std::numeric_limits<unsigned int>::max() )
    return std::numeric_limits<unsigned int>::max() == 0;
  else
    return *(_DWORD *)a1;
}

