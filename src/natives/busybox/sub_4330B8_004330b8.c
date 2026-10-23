// busybox.exe @ 0x4330b8 size=111

unsigned __int64 __usercall sub_4330B8@<edx:eax>(char *a1@<eax>, int a2@<edx>)
{
  char *v2; // esi
  unsigned __int64 result; // rax
  char *v5; // edi
  _BYTE *v6; // [esp+Ch] [ebp-10h] BYREF

  v2 = a1;
  a1[a2] = 0;
  result = sub_4044E0(a1, &v6, 8);
  if ( (*v6 & 0xDF) != 0 )
  {
    if ( *v2 >= 0 )
      sub_418210("corrupted octal value in tar header");
    result = (char)(2 * *v2) >> 1;
    v5 = &v2[a2];
    while ( ++v2 != v5 )
      result = (result << 8) + (unsigned __int8)*v2;
  }
  return result;
}

