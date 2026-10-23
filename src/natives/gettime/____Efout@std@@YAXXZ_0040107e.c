// gettime.exe @ 0x40107e size=58

int std::`dynamic initializer for 'fout''()
{
  FILE *v0; // esi

  v0 = __acrt_iob_func(1u);
  sub_402960(&dword_438178);
  dword_438178 = (int)&std::filebuf::`vftable';
  std::filebuf::_Init(v0, 0);
  return atexit(sub_428479);
}

