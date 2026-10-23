// busybox.exe @ 0x43e9a4 size=134

char *__usercall sub_43E9A4@<eax>(unsigned __int8 *a1@<eax>)
{
  _DWORD *v1; // eax
  int v2; // ebx
  char *result; // eax
  char v4; // dl

  v1 = (_DWORD *)sub_4382E4(a1);
  v2 = *sub_430DE0(v1);
  if ( v2 == 0 )
    return nullptr;
  if ( (*(_BYTE *)(v2 + 5) & 2) != 0 )
    (*(void (**)(void))(v2 + 12))();
  if ( (*(_BYTE *)(v2 + 4) & 0x20) != 0 )
    return nullptr;
  if ( v2 == dword_485FEC + 280 && *(_DWORD *)(v2 + 8) == dword_485FEC + 380 )
    sub_43129C(dword_485FEC + 387, 13, "%d", *(_DWORD *)(dword_485FEC + 376));
  result = *(char **)(v2 + 8);
  do
  {
    v4 = *result;
    if ( *result == 0 )
      break;
    ++result;
  }
  while ( v4 != 61 );
  return result;
}

