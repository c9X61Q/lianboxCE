// gettime.exe @ 0x41e5c0 size=53

void __usercall _fFEXP(__int16 a1@<cx>, int a2@<ebp>)
{
  *(_BYTE *)(a2 - 144) = -2;
  HIBYTE(a1) = 0;
  _ffexpm1(a1);
  JUMPOUT(0x41E8C4);
}

