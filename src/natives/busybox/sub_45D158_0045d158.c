// busybox.exe @ 0x45d158 size=93

int __usercall sub_45D158@<eax>(__int64 a1@<edx:eax>, unsigned int a2@<ecx>)
{
  int v2; // edi
  int v3; // esi

  v2 = a1;
  LODWORD(a1) = HIDWORD(a1) | a2;
  if ( __PAIR64__(a2, HIDWORD(a1)) != 0 )
  {
    v3 = HIDWORD(a1);
    a1 = sub_443400(v2, __SPAIR64__(a2, HIDWORD(a1)), 1);
    if ( HIDWORD(a1) == -1 )
    {
      LODWORD(a1) = a1 + 1;
      if ( (_DWORD)a1 == 0 )
      {
        if ( *_errno() != 29 )
          sub_41823C("seek failure");
        LODWORD(a1) = sub_45D1B8(a2, v3);
      }
    }
  }
  return a1;
}

