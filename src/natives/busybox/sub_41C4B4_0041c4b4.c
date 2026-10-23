// busybox.exe @ 0x41c4b4 size=72

int __usercall sub_41C4B4@<eax>(_BYTE *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  _WORD v6[5]; // [esp+0h] [ebp-Ah] BYREF

  if ( *a1 != 0 )
    return 0;
  v6[0] = HIWORD(a3);
  if ( sub_432664(2, v6) == 2 && v6[0] == a2 )
  {
    *a1 = 2;
    return 0;
  }
  else
  {
    sub_4181F8("invalid magic");
    return -1;
  }
}

