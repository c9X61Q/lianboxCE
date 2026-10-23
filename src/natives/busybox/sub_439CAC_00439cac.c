// busybox.exe @ 0x439cac size=176

int __usercall sub_439CAC@<eax>(_BYTE *a1@<eax>, _DWORD *a2@<edx>)
{
  int *v3; // edi
  int v4; // ebx
  int v5; // ebp
  char *v6; // ecx
  unsigned __int8 v7; // dl
  int v8; // eax
  unsigned int v10; // eax
  int Val; // [esp+8h] [ebp-1Ch]
  int v13; // [esp+10h] [ebp-14h] BYREF

  LOBYTE(v13) = 0;
  v3 = &v13;
  v4 = 0;
  v5 = 0;
  while ( 1 )
  {
    Val = (unsigned __int8)*a1;
    if ( *a1 == 0 )
      break;
    v6 = strchr("0123456789", Val);
    v7 = v5 & 1;
    if ( v6 != nullptr )
    {
      v8 = *(unsigned __int8 *)v3;
      if ( (_BYTE)v8 == 0 && v7 != 0 )
        return 0;
      v10 = 10 * v8 + v6 - "0123456789";
      if ( v10 > 0xFF )
        return 0;
      *(_BYTE *)v3 = v10;
      if ( v5 == 0 )
      {
        if ( ++v4 > 4 )
          return 0;
        v5 = 1;
      }
    }
    else
    {
      if ( (v7 & (Val == 46)) == 0 || v4 == 4 )
        return 0;
      *((_BYTE *)v3 + 1) = 0;
      v3 = (int *)((char *)v3 + 1);
      v5 = 0;
    }
    ++a1;
  }
  if ( v4 <= 3 )
    return 0;
  *a2 = v13;
  return 1;
}

