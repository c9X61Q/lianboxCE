// busybox.exe @ 0x415dec size=789

int __usercall sub_415DEC@<eax>(int a1@<eax>, _DWORD *a2@<edx>)
{
  int v2; // edi
  int v3; // ecx
  char *v4; // ebx
  int v5; // eax
  int v6; // esi
  bool v7; // zf
  _BYTE *v8; // esi
  char *v9; // eax
  char v10; // al
  int v11; // edx
  int v12; // edx
  int *v13; // eax
  _BYTE *v14; // ecx
  char *v15; // ebx
  int v17; // [esp+1Ch] [ebp-44h]
  int v19; // [esp+24h] [ebp-3Ch]
  _BYTE *v20; // [esp+24h] [ebp-3Ch]
  int v21; // [esp+28h] [ebp-38h]
  int v22; // [esp+2Ch] [ebp-34h]
  int v23; // [esp+2Ch] [ebp-34h]
  int v24; // [esp+30h] [ebp-30h]
  char *v25; // [esp+34h] [ebp-2Ch]
  _BYTE *Buf; // [esp+3Ch] [ebp-24h]
  char *Bufa; // [esp+3Ch] [ebp-24h]
  char Bufb; // [esp+3Ch] [ebp-24h]
  char Bufc; // [esp+3Ch] [ebp-24h]
  int v31; // [esp+40h] [ebp-20h] BYREF
  int v32; // [esp+44h] [ebp-1Ch] BYREF
  int v33; // [esp+48h] [ebp-18h]

  fileno(*(FILE **)a1);
  v25 = *(char **)(a1 + 4);
  v24 = *(_DWORD *)(a1 + 8);
  v2 = *(_DWORD *)(a1 + 16);
  v31 = *(_DWORD *)(a1 + 12);
  v19 = *(_DWORD *)(dword_486010 + 368);
  if ( v25 == nullptr )
    v25 = (char *)sub_452C80(&v31, 256);
  v21 = 0;
  v3 = 0;
  while ( 1 )
  {
    v4 = &v25[v24];
    if ( v2 <= 0 )
      goto LABEL_24;
    if ( (*(_DWORD *)(dword_486010 + 368) & 0xFF00) == 0x2100 )
    {
      if ( *(_BYTE *)(dword_486010 - 12) != 0 )
        v5 = *(_DWORD *)(dword_486010 + 380);
      else
        v5 = *(_DWORD *)(dword_486010 + 376);
      if ( sub_459FE8(v5, &v25[v24], 1, (int)&v32, 0) != 0 )
        goto LABEL_24;
      Buf = (_BYTE *)v32;
      v6 = v33;
      v7 = v4[v33] == 0;
    }
    else
    {
      if ( (_BYTE)v19 != 0 )
      {
        v22 = v3;
        Bufa = &v4[v3];
        v8 = strchr(&v4[v3], (unsigned __int8)v19);
        if ( v8 != nullptr || (v8 = memchr(Bufa, 0, v2 - v22)) != nullptr )
        {
          Buf = (_BYTE *)(v8 - v4);
          v6 = v8 - v4 + 1;
LABEL_36:
          v23 = 1;
          goto LABEL_38;
        }
LABEL_24:
        v6 = v2;
        Buf = (_BYTE *)v2;
        goto LABEL_25;
      }
      while ( v4[v21] == 10 )
        ++v21;
      v9 = strstr(&v4[v21], "\n\n");
      if ( v9 == nullptr )
        goto LABEL_24;
      v6 = v9 - v4;
      Buf = (_BYTE *)(v9 - v4);
      while ( 1 )
      {
        v10 = v4[v6];
        if ( v10 != 10 )
          break;
        ++v6;
      }
      v7 = v10 == 0;
    }
    if ( !v7 )
      goto LABEL_36;
LABEL_25:
    if ( v24 > 0 )
    {
      memmove(v25, v4, v2 + 1);
      v24 = 0;
    }
    v25 = (char *)sub_452C80(&v31, v24 + v2 + 128);
    v4 = &v25[v24];
    v17 = v31 + ~v2;
    do
    {
      v11 = sub_45C560(v17, &v25[v24 + v2]);
      if ( v11 <= 0 )
        break;
      v11 = sub_45A270();
    }
    while ( v11 == 0 );
    v12 = v2 + v11;
    v23 = 1;
    if ( v2 > v12 )
    {
      v13 = _errno();
      sub_45EC34((double)*v13);
      v23 = 0;
      v12 = 0;
    }
    v4[v12] = 0;
    v3 = v2;
    if ( v2 >= v12 )
      break;
    v2 = v12;
  }
  if ( v12 == 0 )
  {
    --v23;
    goto LABEL_39;
  }
  v2 = v12;
LABEL_38:
  v14 = &Buf[(_DWORD)v4];
  Bufb = Buf[(_DWORD)v4];
  *v14 = 0;
  v20 = v14;
  ((void (*)(void))sub_45EC78)();
  *a2 |= 0x200u;
  *v20 = Bufb;
  v15 = &v4[v6];
  Bufc = *v15;
  *v15 = 0;
  sub_45EC78(v20, v20);
  *v15 = Bufc;
  v12 = v2;
LABEL_39:
  *(_DWORD *)(a1 + 4) = v25;
  *(_DWORD *)(a1 + 8) = v6 + v24;
  *(_DWORD *)(a1 + 16) = v12 - v6;
  *(_DWORD *)(a1 + 12) = v31;
  return v23;
}

