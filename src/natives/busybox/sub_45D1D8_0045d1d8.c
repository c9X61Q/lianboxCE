// busybox.exe @ 0x45d1d8 size=46

int __usercall sub_45D1D8@<eax>(int result@<eax>, int Offset@<edx>, int a3@<ecx>)
{
  if ( *(_DWORD *)(result + 12) != a3 || *(_DWORD *)(result + 8) != Offset )
  {
    *(_DWORD *)(result + 8) = Offset;
    *(_DWORD *)(result + 12) = a3;
    return fseek(*(FILE **)result, Offset, 0);
  }
  return result;
}

