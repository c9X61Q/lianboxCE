// numcomp.exe @ 0x40104d size=58

int std::`dynamic initializer for 'fout''()
{
  FILE *v0; // esi

  v0 = __acrt_iob_func(1u);
  sub_405B1F();
  dword_42D000 = (int)&std::filebuf::`vftable';
  std::filebuf::_Init(v0, 0);
  return atexit(sub_41E43E);
}

