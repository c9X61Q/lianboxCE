// busybox.exe @ 0x43c4d8 size=63

BOOL __usercall sub_43C4D8@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // eax
  int v3; // edx
  _BYTE v5[16]; // [esp+8h] [ebp-60h] BYREF
  int v6; // [esp+18h] [ebp-50h]

  if ( a2 != 0 )
    v2 = sub_444C28(a1, v5);
  else
    v2 = sub_443484(a1, v5);
  v3 = 0;
  if ( v2 == 0 )
    return (v6 & 0xF000) == 0x4000;
  return v3;
}

