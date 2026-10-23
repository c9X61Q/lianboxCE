// busybox.exe @ 0x45cd18 size=112

int __usercall sub_45CD18@<eax>(const char *a1@<eax>)
{
  int v2; // edi
  int i; // ebp
  int v4; // ebx
  const char *Str1; // eax
  int v7; // [esp+8h] [ebp-18h] BYREF
  _DWORD v8[5]; // [esp+Ch] [ebp-14h] BYREF

  sub_441AD8(a1, &v7, v8, 0x3FFDu);
  v2 = dword_486010;
  for ( i = v8[0]; ; v7 = v4 - i + (v4 - i < 0 ? 0x3FFD : 0) )
  {
    v4 = v7;
    Str1 = *(const char **)(v2 + 4 * v7);
    if ( Str1 == nullptr )
      break;
    if ( strcmp(Str1, a1) == 0 )
      return v4;
  }
  *(_DWORD *)(v2 + 4 * v4) = sub_47188C();
  return v7;
}

