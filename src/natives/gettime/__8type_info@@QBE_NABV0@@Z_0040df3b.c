// gettime.exe @ 0x40df3b size=31

bool __thiscall type_info::operator==(void *this, int a2)
{
  return __std_type_info_compare((int)this + 4, a2 + 4) == 0;
}

