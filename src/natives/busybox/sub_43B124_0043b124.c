// busybox.exe @ 0x43b124 size=136

unsigned int __usercall sub_43B124@<eax>(unsigned int result@<eax>)
{
  _BYTE *v1; // ebx
  int v2; // esi
  char *v3; // edx
  _BYTE *v4; // eax
  int v5; // edx

  v1 = dword_48600C;
  v2 = *((_DWORD *)dword_48600C + 5);
  if ( *((_DWORD *)dword_48600C + 6) != v2 )
  {
    if ( result != 0 )
    {
      v3 = (char *)dword_48600C + 68;
      if ( *((_BYTE *)dword_48600C + 60) != 0 )
      {
        *((_DWORD *)dword_48600C + 16) = v3;
        v1[60] = 0;
      }
      v4 = *((_BYTE **)v1 + 16);
      if ( v4 - v3 <= 127 )
      {
        v5 = *((_DWORD *)v1 + 8);
        *((_DWORD *)v1 + 16) = v4 + 1;
        *v4 = *(_BYTE *)(v5 + v2);
      }
    }
    memmove((void *)(v2 + *((_DWORD *)v1 + 8)), (const void *)(*((_DWORD *)v1 + 8) + v2 + 1), *((_DWORD *)v1 + 6) - v2);
    --*((_DWORD *)v1 + 6);
    sub_452A78();
    sub_46F088("\x1B[J");
    return sub_43B090(*((_DWORD *)v1 + 5) - v2);
  }
  return result;
}

