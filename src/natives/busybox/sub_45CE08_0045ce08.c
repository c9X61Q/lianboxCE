// busybox.exe @ 0x45ce08 size=117

int __usercall sub_45CE08@<eax>(const char *a1@<eax>)
{
  int v2; // ebp
  int i; // edi
  int v4; // ebx
  unsigned __int16 *v5; // eax
  int v7; // [esp+8h] [ebp-18h] BYREF
  _DWORD v8[5]; // [esp+Ch] [ebp-14h] BYREF

  sub_441AD8(a1, &v7, v8, 0x1FFFu);
  v2 = dword_486010;
  for ( i = v8[0]; ; v7 = v4 - i + (v4 - i < 0 ? 0x1FFF : 0) )
  {
    v4 = v7;
    v5 = *(unsigned __int16 **)(v2 + 4 * v7 + 105560);
    if ( v5 == nullptr || strcmp(a1, *(const char **)(v2 + 4 * **(unsigned __int16 **)(v2 + 4 * *v5 + 65528))) == 0 )
      break;
  }
  return v4;
}

