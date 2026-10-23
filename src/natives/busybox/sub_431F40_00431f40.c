// busybox.exe @ 0x431f40 size=40

int __usercall sub_431F40@<eax>(int result@<eax>)
{
  _DWORD *i; // ebx

  if ( *(_BYTE *)(result + 12) != 0 )
  {
    for ( i = *(_DWORD **)(result + 16); *i != 0; ++i )
      sub_4631A8();
    return sub_4631A8();
  }
  return result;
}

