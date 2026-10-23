// gettime.exe @ 0x405e90 size=84

void __thiscall std::ctype<char>::_Tidy(int this)
{
  if ( *(int *)(this + 16) <= 0 )
  {
    if ( *(int *)(this + 16) < 0 )
      j_j__free(*(void **)(this + 12));
  }
  else
  {
    free(*(void **)(this + 12));
  }
  free(*(void **)(this + 20));
}

