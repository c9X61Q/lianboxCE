// busybox.exe @ 0x411de0 size=102

int __usercall sub_411DE0@<eax>(int a1@<eax>, char a2@<dl>, int a3@<ecx>)
{
  unsigned __int8 v5; // dl
  int result; // eax
  _BYTE *v7; // edx
  int v8; // eax

  if ( a1 == 256 )
    return 11;
  if ( a1 == 257 )
  {
    v8 = 0;
    return ((int)(unsigned __int16)word_47D42C[v8] >> (4 * a2)) & 0xF;
  }
  v5 = a1 + 127;
  result = 12;
  if ( v5 > 7u )
  {
    v7 = (_BYTE *)sub_4635B0(a3, a1);
    result = 0;
    if ( *v7 != 0 )
    {
      v8 = (unsigned __int8)byte_4841E8[v7 - "\t\n !\"$&'()*-:;<=>?[\\]`|}~"];
      return ((int)(unsigned __int16)word_47D42C[v8] >> (4 * a2)) & 0xF;
    }
  }
  return result;
}

