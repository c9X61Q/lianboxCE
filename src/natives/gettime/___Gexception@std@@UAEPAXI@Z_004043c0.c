// gettime.exe @ 0x4043c0 size=46

std::exception *__thiscall std::exception::`scalar deleting destructor'(std::exception *this, char a2)
{
  std::exception::~exception(this);
  if ( (a2 & 1) != 0 )
    sub_40A6BA(this);
  return this;
}

