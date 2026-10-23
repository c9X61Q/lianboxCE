// busybox.exe @ 0x462604 size=105

int *__usercall sub_462604@<eax>(int a1@<eax>, int a2@<edx>)
{
  int *v2; // ebx
  int v4; // eax
  int v5; // eax
  int v6; // ecx
  int v7; // edi
  _BYTE *v8; // ebp
  char v9; // dl

  v2 = (int *)a1;
  if ( a1 != 0 )
  {
    v4 = sub_41F768(a1, a2);
    v5 = sub_4248A8(v4);
    v6 = 0;
    while ( 1 )
    {
      v7 = *v2;
      if ( *v2 == 0 )
        return (int *)v5;
      if ( (*(_WORD *)(v7 + 18) & 0xF000) != 0x4000 )
        break;
      if ( a2 != 0 )
      {
        if ( a2 == 1 )
          goto LABEL_13;
        v8 = *(_BYTE **)v7;
        if ( **(_BYTE **)v7 != 46 )
          goto LABEL_13;
        v9 = v8[1];
        if ( v9 != 0 && (v9 != 46 || v8[2] != 0) )
          goto LABEL_13;
      }
LABEL_14:
      ++v2;
    }
    if ( a2 != 0 )
      goto LABEL_14;
LABEL_13:
    *(_DWORD *)(v5 + 4 * v6++) = v7;
    goto LABEL_14;
  }
  return v2;
}

