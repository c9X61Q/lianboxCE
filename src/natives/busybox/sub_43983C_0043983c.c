// busybox.exe @ 0x43983c size=52

int __usercall sub_43983C@<eax>(int result@<eax>)
{
  _DWORD *i; // edx
  bool v2; // zf

  for ( i = *(_DWORD **)(dword_486010 + 48); i != nullptr; i = (_DWORD *)*i )
  {
    if ( (result & i[2]) == i[1] )
    {
      v2 = i[3] == 65;
      goto LABEL_5;
    }
  }
  v2 = *(_BYTE *)(dword_486010 + 4) == 0;
LABEL_5:
  if ( !v2 )
    sub_45E0C0();
  return result;
}

