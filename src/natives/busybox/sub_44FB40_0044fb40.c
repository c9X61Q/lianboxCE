// busybox.exe @ 0x44fb40 size=735

int *__usercall sub_44FB40@<eax>(int a1@<eax>, FILE *a2@<edx>, FILE *a3@<ecx>)
{
  size_t v4; // esi
  size_t v5; // eax
  int v6; // edi
  bool v7; // zf
  int v8; // ebp
  int v9; // ecx
  int i; // edx
  _DWORD *v11; // ebp
  int v12; // eax
  _DWORD *v13; // edx
  _DWORD *v14; // ebp
  int v15; // ecx
  int v16; // eax
  int *result; // eax
  int (__cdecl *v18)(int, _BYTE *, int); // eax
  int v19; // ebp
  int v20; // edx
  int v21; // eax
  _BYTE *Src; // [esp+14h] [ebp-450h]
  int v23; // [esp+18h] [ebp-44Ch]
  int v24; // [esp+1Ch] [ebp-448h]
  int v26; // [esp+24h] [ebp-440h]
  _BYTE *v27; // [esp+28h] [ebp-43Ch]
  int v29; // [esp+30h] [ebp-434h] BYREF
  _BYTE v30[32]; // [esp+34h] [ebp-430h] BYREF
  _BYTE Buffer[512]; // [esp+54h] [ebp-410h] BYREF
  _BYTE v32[528]; // [esp+254h] [ebp-210h] BYREF

  v4 = 0;
  while ( feof(a2) == 0 )
  {
    v5 = fread(&Buffer[v4], 1u, 512 - v4, a2);
    if ( v5 == 0 )
      goto LABEL_36;
LABEL_4:
    v4 += v5;
    v24 = 512;
    v27 = v32;
    Src = Buffer;
    while ( 1 )
    {
      while ( 1 )
      {
        if ( v4 == 0 )
          goto LABEL_34;
        v23 = *(_DWORD *)(a1 + 28);
        v26 = *(_DWORD *)(a1 + 60);
        v29 = 16;
        v6 = (*(int (__cdecl **)(int, _BYTE *, size_t, _BYTE *, int *))(a1 + 12))(a1 + 4, Src, v4, v30, &v29);
        if ( v6 != -1 )
          break;
        v7 = (*(_BYTE *)(a1 + 40) & 4) == 0;
        *(_DWORD *)(a1 + 28) = v23;
        if ( v7 )
          goto LABEL_30;
        v6 = 1;
LABEL_10:
        Src += v6;
        v4 -= v6;
      }
      if ( v29 == 0 )
        goto LABEL_10;
      v8 = *(_DWORD *)(a1 + 32);
      if ( v8 != 0 )
      {
        v9 = sub_46C0A8();
        for ( i = v8; *(_DWORD *)i != 0; i += 12 )
        {
          if ( (*(_BYTE *)(i + 8) & 1) != 0 && v9 == *(_DWORD *)(i + 4) )
          {
            sub_467C40(&v29, v30);
            break;
          }
        }
      }
      v11 = *(_DWORD **)(a1 + 64);
      if ( v11 != nullptr )
      {
        v12 = sub_46C0A8();
        v13 = v11;
        while ( 1 )
        {
          v14 = v13;
          v15 = *v13;
          if ( *v13 == 0 )
            break;
          v13 += 3;
          if ( (v14[2] & 2) != 0 && v12 == v15 )
          {
            sub_467C40(&v29, v30);
            break;
          }
        }
      }
      v16 = (*(int (__cdecl **)(int, _BYTE *, int, _BYTE *, int))(a1 + 48))(a1 + 36, v30, v29, v27, v24);
      if ( v16 == -1 )
        break;
LABEL_29:
      Src += v6;
      v27 += v16;
      v4 -= v6;
      v24 -= v16;
    }
    if ( (*(_BYTE *)(a1 + 40) & 4) != 0 && *_errno() != 7 )
    {
      *(_DWORD *)(a1 + 60) = v26;
      v16 = 0;
      goto LABEL_29;
    }
    *(_DWORD *)(a1 + 28) = v23;
    *(_DWORD *)(a1 + 60) = v26;
LABEL_30:
    if ( *_errno() != 7 )
    {
      result = _errno();
      if ( *result != 22 || (result = (int *)feof(a2)) != nullptr )
LABEL_33:
        sub_418014((int)result, "conversion error");
    }
LABEL_34:
    sub_46EF84(v32, 1u, 512 - v24, a3);
    memmove(Buffer, Src, v4);
  }
  v5 = v4;
LABEL_36:
  if ( v4 != 0 )
    goto LABEL_4;
  v18 = *(int (__cdecl **)(int, _BYTE *, int))(a1 + 56);
  if ( v18 == nullptr )
  {
    v21 = 512;
    goto LABEL_45;
  }
  v19 = *(_DWORD *)(a1 + 60);
  v20 = v18(a1 + 36, v32, 512);
  if ( v20 != -1 )
    goto LABEL_43;
  if ( (*(_BYTE *)(a1 + 40) & 4) == 0 || *_errno() == 7 )
  {
    *(_DWORD *)(a1 + 60) = v19;
    v21 = 512;
    v4 = -1;
  }
  else
  {
    v20 = 0;
LABEL_43:
    v21 = 512 - v20;
LABEL_45:
    *(_DWORD *)(a1 + 28) = 0;
    *(_DWORD *)(a1 + 60) = 0;
  }
  result = (int *)sub_46EF84(v32, 1u, 512 - v21, a3);
  if ( v4 == -1 )
    goto LABEL_33;
  return result;
}

