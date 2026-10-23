// busybox.exe @ 0x41b7f0 size=263

const char *__usercall sub_41B7F0@<eax>(int a1@<eax>, const char *Str@<edx>, int a3@<ecx>)
{
  unsigned int *v4; // ebp
  size_t v5; // eax
  const char *v6; // eax
  const char *v7; // edi
  unsigned int v8; // eax
  unsigned int v9; // edx
  unsigned int v10; // ebp
  int v11; // ebp
  int v15; // [esp+1Ch] [ebp-34h]
  _BYTE v16[48]; // [esp+20h] [ebp-30h] BYREF

  dword_485FFC = 242428;
  v4 = (unsigned int *)dword_486010;
  if ( (*(_BYTE *)(dword_486010 + 16) & 4) != 0 )
    dword_485FFC = 2339580;
  memset(v16, 0, 0x20u);
  v5 = strlen(Str);
  v6 = (const char *)sub_453E04(Str, v5, v16);
  v7 = v6;
  if ( v6 != nullptr )
  {
    sub_463088("bad search pattern '%s': %s", Str, v6);
    return (const char *)a1;
  }
  else
  {
    if ( (a3 & 1) != 0 )
    {
      v8 = v4[1] - 1;
      if ( a3 == -1 )
        v8 = *v4;
    }
    else
    {
      v8 = sub_446708();
    }
    v15 = v8 - a1;
    v9 = a1;
    if ( (int)(v8 - a1) < 0 )
    {
      v15 = a1 - v8;
      v10 = *v4;
      v9 = v8;
      if ( v8 < v10 )
        v9 = v10;
    }
    v11 = sub_454628(v16, v9, v15, 0, v8 - a1, 0);
    sub_45A08C(v16);
    if ( v11 >= 0 )
    {
      v7 = (const char *)(a1 - v11);
      if ( a3 > 0 )
        return (const char *)(a1 + v11);
    }
  }
  return v7;
}

