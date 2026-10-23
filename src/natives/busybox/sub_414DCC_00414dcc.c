// busybox.exe @ 0x414dcc size=72

int *__usercall sub_414DCC@<eax>(int *a1@<eax>)
{
  int *v1; // ebx
  int v2; // edi
  int v3; // edx
  _DWORD *v4; // esi

  v1 = a1;
  v2 = dword_47333C;
  if ( a1 != nullptr )
  {
    while ( 1 )
    {
      v3 = *v1;
      v4 = (_DWORD *)dword_47333C;
      dword_47333C += 4;
      if ( v3 == 0 )
        break;
      *v4 = sub_446CEC();
      *((_BYTE *)v4 + dword_473338) = 1;
      ++v1;
    }
    *v4 = 0;
    return (int *)v2;
  }
  return v1;
}

