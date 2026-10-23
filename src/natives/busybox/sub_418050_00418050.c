// busybox.exe @ 0x418050 size=165

int __usercall sub_418050@<eax>(_BYTE **a1@<eax>)
{
  _BYTE *v1; // edx
  unsigned int v2; // edi
  int v3; // ecx
  unsigned int v4; // ebx
  int v5; // esi
  unsigned int v6; // ebp
  int v7; // esi
  const char *v8; // ecx

  v1 = *a1;
  if ( **a1 == 120 )
  {
    ++v1;
    v2 = 16;
    v3 = 1;
  }
  else
  {
    v2 = 8;
    v3 = 0;
  }
  v4 = 0;
  while ( 1 )
  {
    v5 = (unsigned __int8)*v1;
    v6 = v5 - 48;
    if ( (unsigned int)(v5 - 48) > 9 )
    {
      if ( ((unsigned __int8)v5 | 0x20u) <= 0x60 )
        break;
      v6 = ((unsigned __int8)v5 | 0x20) - 87;
    }
    if ( v6 >= v2 )
      break;
    if ( v6 + v2 * v4 > 0xFF )
      goto LABEL_15;
    ++v1;
    ++v3;
    v4 = v6 + v2 * v4;
    if ( v3 == 3 )
      goto LABEL_21;
  }
  if ( v2 != 16 )
  {
LABEL_15:
    if ( v3 == 0 )
    {
      v8 = "abefnrtv\\";
      while ( *v1 != *v8 )
      {
        if ( *++v8 == 0 )
          goto LABEL_20;
      }
      ++v1;
LABEL_20:
      v4 = *((unsigned __int8 *)v8 + 10);
    }
    goto LABEL_21;
  }
  v7 = 92;
  if ( v3 == 1 )
    return v7;
LABEL_21:
  *a1 = v1;
  return v4;
}

