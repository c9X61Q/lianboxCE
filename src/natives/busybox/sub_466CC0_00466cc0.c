// busybox.exe @ 0x466cc0 size=49

int __usercall sub_466CC0@<eax>(int result@<eax>)
{
  int v1; // ebx

  if ( *(_BYTE *)result == 0 )
  {
    v1 = result;
    result = sub_4708BC("%lld", *(_QWORD *)(result + 8));
    *(_DWORD *)(v1 + 8) = result;
    *(_BYTE *)v1 = 1;
  }
  return result;
}

