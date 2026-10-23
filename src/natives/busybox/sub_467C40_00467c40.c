// busybox.exe @ 0x467c40 size=61

__int16 __usercall sub_467C40@<ax>(unsigned int a1@<eax>, _WORD *a2@<edx>, _DWORD *a3@<ecx>)
{
  if ( a1 > 0xFFFF )
  {
    a1 -= 0x10000;
    *a2 = (a1 >> 10) & 0x3FF | 0xD800;
    LOWORD(a1) = a1 & 0x3FF | 0xDC00;
    a2[1] = a1;
    *a3 = 2;
  }
  else
  {
    *a2 = a1;
    *a3 = 1;
  }
  return a1;
}

