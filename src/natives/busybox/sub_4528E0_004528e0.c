// busybox.exe @ 0x4528e0 size=75

unsigned int __usercall sub_4528E0@<eax>(void *a1@<eax>, unsigned int a2@<edx>, __int64 a3)
{
  unsigned int result; // eax
  _BYTE *v6; // esi
  _BYTE v7[41]; // [esp+17h] [ebp-29h] BYREF

  result = sub_4628B0(v7, "%0*llo", a2, a3) - a2;
  v6 = &v7[result];
  if ( v7[result] == 48 )
    ++v6;
  qmemcpy(a1, v6, a2);
  return result;
}

