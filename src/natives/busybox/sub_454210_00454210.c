// busybox.exe @ 0x454210 size=67

int __usercall sub_454210@<eax>(_DWORD *a1@<eax>, int a2@<edx>)
{
  _DWORD *v4; // eax

  *a1 = 1;
  a1[1] = 1;
  v4 = malloc(4u);
  a1[2] = v4;
  if ( v4 != nullptr )
  {
    *v4 = a2;
    return 0;
  }
  else
  {
    a1[1] = 0;
    *a1 = 0;
    return 12;
  }
}

