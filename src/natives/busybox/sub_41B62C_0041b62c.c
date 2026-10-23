// busybox.exe @ 0x41b62c size=449

int __usercall sub_41B62C@<eax>(unsigned int a1@<eax>, unsigned __int8 a2@<dl>, int a3@<ecx>)
{
  unsigned int v3; // edi
  _BYTE *v4; // edi
  int v5; // ebx
  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // esi
  int v11; // edx
  char *v12; // ecx
  const char *v13; // esi
  size_t v14; // eax
  int v15; // ecx
  unsigned int v16; // ebx
  int v17; // eax
  char *v18; // ebp
  const char *v19; // esi
  char *Str; // [esp+0h] [ebp-24h]
  int Val; // [esp+4h] [ebp-20h]
  unsigned __int8 v22; // [esp+Bh] [ebp-19h]
  HANDLE hHandle; // [esp+10h] [ebp-14h]

  v3 = a1;
  v22 = a2;
  if ( a2 == 22 )
  {
    v4 = (_BYTE *)(sub_465874(a3, 1) + a1);
    *v4 = 94;
    sub_459AA4();
    *v4 = sub_4351A8();
    sub_468370(a3, 1);
    return (int)(v4 + 1);
  }
  else
  {
    v5 = dword_486010;
    if ( a2 == 27 )
    {
      *(_BYTE *)(dword_486010 + 19) = 0;
      sub_468398();
      *(_DWORD *)(v5 + 32) = 0;
      sub_4298B0();
      *(_DWORD *)(v5 + 60) = 0;
      if ( *(_BYTE *)(v3 - 1) != 10 )
        return (__PAIR64__(v3, *(_DWORD *)v5) - *(unsigned int *)(v5 + 8)) >> 32;
    }
    else if ( a2 == 127 || a2 == 8 )
    {
      if ( *(_DWORD *)dword_486010 < a1 )
        return sub_4657B0(3, a1 - 1);
    }
    else
    {
      if ( a2 == 10 || a2 == 13 )
      {
        sub_468398();
        v22 = 10;
      }
      sub_468370(a3, 1);
      v8 = sub_465874(v7, 1);
      *(_BYTE *)(v3 + v8) = v22;
      if ( (*(_BYTE *)(v5 + 16) & 2) != 0 && strchr(")]}", v22) != nullptr )
      {
        v9 = sub_4309F0();
        if ( v9 != 0 )
        {
          v10 = *(_DWORD *)(v5 + 8);
          *(_DWORD *)(v5 + 8) = v9;
          sub_459AA4();
          hHandle = GetStdHandle(0xFFFFFFF6);
          sub_42F128(v11);
          WaitForSingleObject(hHandle, 0x190u);
          Val = (int)v12;
          Str = v12;
          *(_DWORD *)(v5 + 8) = v10;
          sub_459AA4();
        }
        else
        {
          sub_439A7C();
        }
      }
      v3 += v8 + 1;
      if ( (*(_BYTE *)(v5 + 16) & 1) != 0 && v22 == 10 )
      {
        v13 = (const char *)sub_44DC1C(Str, Val);
        v14 = strspn(v13, " \t");
        v16 = v14;
        if ( v14 != 0 )
        {
          v17 = sub_465874(v15, v14);
          v18 = (char *)(v3 + v17);
          v19 = &v13[v17];
          sub_468370(a3, v16);
          qmemcpy(v18, v19, v16);
          return (int)&v18[v16];
        }
      }
    }
  }
  return v3;
}

