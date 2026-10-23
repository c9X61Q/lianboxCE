// busybox.exe @ 0x416e24 size=39

_BYTE *__usercall sub_416E24@<eax>(_BYTE *a1@<eax>)
{
  _BYTE *v1; // esi
  char v2; // dl

LABEL_1:
  v1 = a1;
  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == 0 )
      return v1;
    ++a1;
    if ( v2 == 47 || v2 == 92 || v2 == 58 )
      goto LABEL_1;
  }
}

