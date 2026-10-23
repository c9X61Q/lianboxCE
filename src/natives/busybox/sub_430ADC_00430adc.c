// busybox.exe @ 0x430adc size=131

char *__usercall sub_430ADC@<eax>(int a1@<eax>)
{
  char *v1; // edx
  int i; // ecx
  char *v3; // ebx
  int v4; // esi
  size_t Size; // ebx
  char *v6; // eax
  char *v7; // edi

  v1 = (char *)dword_4734F4;
  for ( i = 0; ; ++i )
  {
    if ( dword_4734B8 <= i )
    {
      if ( a1 != -1 )
        return nullptr;
      v4 = dword_4734B8 + 10;
      Size = 28 * (dword_4734B8 + 10);
      v6 = (char *)realloc(dword_4734F4, Size);
      if ( v6 == nullptr )
        return nullptr;
      dword_4734F4 = v6;
      v3 = &v6[Size - 280];
      v7 = v3;
      do
      {
        sub_41CA70(v7);
        v7 += 28;
      }
      while ( v7 != v3 + 280 );
      dword_4734B8 = v4;
      goto LABEL_11;
    }
    v3 = v1;
    v1 += 28;
    if ( *((_DWORD *)v1 - 1) == a1 )
      break;
  }
  if ( a1 == -1 )
LABEL_11:
    sub_41CA70(v3);
  return v3;
}

