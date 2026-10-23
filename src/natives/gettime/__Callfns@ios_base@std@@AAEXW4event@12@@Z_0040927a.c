// gettime.exe @ 0x40927a size=51

int __thiscall std::ios_base::_Callfns(int ***this, int a2)
{
  int **i; // edi
  int result; // eax

  for ( i = *(this + 11); i != nullptr; i = (int **)*i )
    result = ((int (__cdecl *)(int, int ***, int *))i[2])(a2, this, i[1]);
  return result;
}

