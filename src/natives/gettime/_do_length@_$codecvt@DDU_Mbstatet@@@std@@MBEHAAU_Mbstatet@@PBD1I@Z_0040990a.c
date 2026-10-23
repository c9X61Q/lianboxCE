// gettime.exe @ 0x40990a size=21

unsigned int __stdcall std::codecvt<char,char,_Mbstatet>::do_length(int a1, int a2, int a3, unsigned int a4)
{
  unsigned int result; // eax

  result = a3 - a2;
  if ( a3 - a2 >= a4 )
    return a4;
  return result;
}

