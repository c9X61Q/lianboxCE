// busybox.exe @ 0x431b2c size=111

int __usercall sub_431B2C@<eax>(__int16 a1@<ax>, FILE *a2@<edx>)
{
  unsigned __int8 v2; // bl
  int Character; // esi

  v2 = a1;
  if ( (a1 & 0x180) == 0x180 )
  {
    sub_46EF20("M-", a2);
    v2 &= ~0x80u;
  }
  Character = v2;
  if ( v2 == 0x9B )
  {
    Character = 123;
    goto LABEL_9;
  }
  if ( (v2 & 0xE0) == 0 )
  {
    Character = v2 + 64;
LABEL_9:
    fputc(94, a2);
    return fputc(Character, a2);
  }
  if ( v2 == 127 )
  {
    Character = 63;
    goto LABEL_9;
  }
  return fputc(Character, a2);
}

