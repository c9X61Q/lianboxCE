// busybox.exe @ 0x434938 size=77

int __usercall sub_434938@<eax>(const char *a1@<eax>)
{
  int v2; // ebx
  int *v3; // eax
  _BYTE v5[16]; // [esp+8h] [ebp-68h] BYREF
  unsigned __int16 v6; // [esp+18h] [ebp-58h]

  if ( sub_443484(a1, v5) != -1 )
    return v6;
  v2 = -1;
  v3 = _errno();
  if ( *v3 != 2 )
    sub_418014((int)v3, "can't stat '%s'", a1);
  return v2;
}

