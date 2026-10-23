// busybox.exe @ 0x43ad8c size=36

int __usercall sub_43AD8C@<eax>(_BYTE *a1@<eax>, char a2@<dl>)
{
  char v2; // bl
  _BYTE *v3; // ecx
  char v4; // si

  v2 = a1[1];
  a1[1] = *a1;
  v3 = a1 + 1;
  while ( v2 != a2 )
  {
    v4 = *++v3;
    *v3 = v2;
    v2 = v4;
  }
  *a1 = v2;
  return v3 - a1;
}

