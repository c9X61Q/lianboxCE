// busybox.exe @ 0x468ba0 size=122

_BYTE *__usercall sub_468BA0@<eax>(const void *a1@<eax>, unsigned int a2@<edx>, size_t a3@<ecx>)
{
  _BYTE *v7; // [esp+14h] [ebp-48h]
  void **v8; // [esp+18h] [ebp-44h] BYREF
  _BYTE v9[64]; // [esp+1Ch] [ebp-40h] BYREF

  v7 = nullptr;
  if ( setjmp3() == 0 && sub_462CD8((int)v9, &v8, -1, a1, a2) == 0 )
  {
    v7 = sub_441F94(a3);
    if ( v7 != nullptr )
      sub_456A60(v8, v7, a3);
  }
  sub_422708(v8);
  return v7;
}

