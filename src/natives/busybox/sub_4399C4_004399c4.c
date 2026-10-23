// busybox.exe @ 0x4399c4 size=137

int __usercall sub_4399C4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ebx
  int v4; // ecx
  int result; // eax
  int v6; // edi
  int v7; // edx

  v2 = a1;
  v4 = -1;
  if ( a1 < 0 )
  {
    v2 = -a1;
    v4 = -2;
  }
  result = 0;
  v6 = 0;
  while ( 1 )
  {
    v7 = *(unsigned __int8 *)(a2 + result);
    if ( (_BYTE)v7 == 0 )
      sub_41784C("unmatched '%c'", v2);
    if ( v4 < 0 )
      break;
    if ( (_BYTE)v7 == 93 && v4 != result - 1 && (v4 != result - 2 || *(_BYTE *)(a2 + result - 1) != 94) )
      v4 = -1;
LABEL_21:
    ++result;
  }
  if ( v6 != 0 )
  {
    v6 = 0;
    goto LABEL_21;
  }
  if ( (_BYTE)v7 == 92 )
  {
    v6 = 1;
    goto LABEL_21;
  }
  if ( (_BYTE)v7 == 91 && v4 == -1 )
  {
    v4 = result;
    goto LABEL_21;
  }
  if ( v7 != v2 )
    goto LABEL_21;
  return result;
}

