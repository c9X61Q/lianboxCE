// busybox.exe @ 0x445848 size=78

unsigned __int8 *__usercall sub_445848@<eax>(unsigned int a1@<eax>, int a2@<edx>)
{
  unsigned __int8 *v3; // ebx
  int i; // ecx
  unsigned __int8 v5; // al

  v3 = (unsigned __int8 *)sub_418A48(a1);
  for ( i = 0; i < a2; ++i )
  {
    if ( *(_DWORD *)(dword_486010 + 4) <= (unsigned int)v3 )
      break;
    v5 = *v3;
    if ( *v3 == 10 )
      break;
    if ( v5 == 9 )
    {
      i += *(_DWORD *)(dword_486010 + 80) - 1 - i % *(_DWORD *)(dword_486010 + 80);
    }
    else if ( v5 == 127 || v5 <= 0x1Fu )
    {
      ++i;
    }
    ++v3;
  }
  return v3;
}

