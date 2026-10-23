// gettime.exe @ 0x416599 size=80

char uninitialize_allocated_io_buffers()
{
  _free_base(dword_438A40);
  dword_438A40 = nullptr;
  _free_base(dword_438A44);
  dword_438A44 = nullptr;
  _free_base(dword_4389FC);
  dword_4389FC = nullptr;
  _free_base(dword_438A00);
  dword_438A00 = nullptr;
  return 1;
}

