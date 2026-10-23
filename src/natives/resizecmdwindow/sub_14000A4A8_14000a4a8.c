// resizecmdwindow.exe @ 0x14000a4a8 size=60

void __fastcall sub_14000A4A8()
{
  void (**i)(void); // rbx

  for ( i = &qword_14000CAE0; i < &qword_14000CAE0; ++i )
  {
    if ( *i != nullptr )
      (*i)();
  }
}

