// resizecmdwindow.exe @ 0x14000a46c size=60

void sub_14000A46C()
{
  void (**i)(void); // rbx

  for ( i = qword_14000CAD0; i < qword_14000CAD0; ++i )
  {
    if ( *i != nullptr )
      (*i)();
  }
}

