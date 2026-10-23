// busybox.exe @ 0x424888 size=31

void *__usercall sub_424888@<eax>(_DWORD *a1@<eax>, void *a2@<edx>)
{
  _DWORD *v3; // esi
  void *v5; // [esp+0h] [ebp-Ch]

  v5 = a2;
  while ( a1 != nullptr )
  {
    v3 = (_DWORD *)*a1;
    sub_426A60(a1);
    if ( a1 == v3 )
      break;
    a1 = v3;
  }
  return v5;
}

