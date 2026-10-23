// busybox.exe @ 0x4300cc size=1077

char __usercall sub_4300CC@<al>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  char *v5; // eax
  char *v6; // ebx
  const char *v7; // eax
  int v8; // edi
  int v9; // eax
  int v10; // ebx
  int v11; // edi
  int v12; // eax
  int v13; // eax
  char *v14; // edi
  char v15; // al
  int v16; // eax
  int v17; // ecx
  int v18; // eax
  int v19; // eax
  char *v20; // eax
  int v21; // ecx
  void *Key; // [esp+0h] [ebp-B0h]
  int v24; // [esp+18h] [ebp-98h]
  int v25; // [esp+1Ch] [ebp-94h]
  int v26; // [esp+20h] [ebp-90h]
  int v27; // [esp+24h] [ebp-8Ch]
  int v28; // [esp+28h] [ebp-88h]
  char *v29; // [esp+2Ch] [ebp-84h]
  _DWORD v32[3]; // [esp+38h] [ebp-78h] BYREF
  _BYTE v33[16]; // [esp+44h] [ebp-6Ch] BYREF
  int v34; // [esp+54h] [ebp-5Ch]

  if ( sub_437D6C(a1) != 0 )
  {
    v5 = (char *)sub_462B6C();
    v6 = v5;
    *(_DWORD *)(a2 + 4) = -1;
    if ( (a3 & 2) == 0 || (v5 = (char *)sub_413848(v5)) != nullptr || (int)(v5 = (char *)sub_444C28(v6, v33)) >= 0 )
    {
      *(_BYTE *)a2 = 0;
      return (char)v5;
    }
    v5 = (char *)sub_4685AC(a1);
    if ( v5 != nullptr )
    {
      v7 = sub_416E24(a1);
      v5 = (char *)sub_430048(v7);
      if ( (int)v5 >= 0 )
      {
        *(_BYTE *)a2 = 0;
        *(_DWORD *)(a2 + 4) = 0x80000000;
        return (char)v5;
      }
    }
LABEL_72:
    *(_BYTE *)a2 = -1;
    return (char)v5;
  }
  v8 = 0;
  v9 = *(_DWORD *)(dword_485FEC + 208) + 5;
  v27 = v9 == a4;
  if ( v9 != a4 )
    a3 |= 8u;
  v5 = (char *)sub_41CBF8(a1, 0);
  v10 = (int)v5;
  if ( v5 != nullptr )
  {
    LOBYTE(v5) = v5[8];
    if ( (_BYTE)v5 == 1 )
    {
      v8 = 4;
    }
    else if ( (_BYTE)v5 == 2 )
    {
      v5 = **(char ***)(v10 + 4);
      if ( (*v5 & 2) == 0 )
        v8 = 16;
    }
    else
    {
      v8 = 24;
    }
    v11 = a3 & v8;
    if ( v11 != 0 )
    {
      v27 = v11 & 0x10;
      if ( (v11 & 0x10) != 0 )
        goto LABEL_72;
      v10 = 0;
    }
    else if ( *(_BYTE *)(v10 + 9) == 0 )
    {
      goto LABEL_77;
    }
  }
  v5 = (char *)bsearch(a1, &off_47E040, 0x28u, 8u, sub_4526FC);
  v29 = v5;
  if ( v5 != nullptr )
  {
    v5 = *(char **)v5;
    if ( (*v5 & 2) != 0 || (a3 & 8) != 0 || dword_473194 <= 0 )
    {
LABEL_73:
      if ( v27 != 0 )
      {
        ++*(_DWORD *)(dword_485FF0 + 56);
        v10 = sub_41CBF8(a1, 1);
        *(_BYTE *)(v10 + 8) = 2;
        v18 = (int)v29;
        goto LABEL_76;
      }
      *(_BYTE *)a2 = 2;
      v5 = v29;
      goto LABEL_78;
    }
  }
  if ( (a3 & 0x10) != 0 )
    goto LABEL_72;
  v12 = sub_430048(a1);
  if ( v12 >= 0 )
  {
    *(_BYTE *)a2 = 0;
    v5 = (char *)(-2 - v12);
    goto LABEL_78;
  }
  v26 = -1;
  if ( v10 != 0 && *(_BYTE *)(v10 + 9) != 0 )
  {
    v13 = dword_473194;
    if ( *(_BYTE *)(v10 + 8) != 2 )
      v13 = *(_DWORD *)(v10 + 4);
    v26 = v13;
  }
  v25 = 2;
  v28 = -1;
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v5 = (char *)sub_448618();
          if ( (int)v5 < 0 )
          {
            if ( v10 != 0 && (v27 & 1) != 0 )
              LOBYTE(v5) = sub_423094();
            if ( (a3 & 1) != 0 )
            {
              v19 = sub_41CBF8("command_not_found_handle", 0);
              if ( v19 != 0 && *(_BYTE *)(v19 + 8) == 1 )
              {
                v32[0] = "command_not_found_handle";
                v32[1] = a1;
                v32[2] = 0;
                LOBYTE(v5) = sub_42B0F4(*(_DWORD **)(v19 + 4), 2, (int)v32, 0);
              }
              else
              {
                v20 = sub_42A05C(v25, "not found");
                LOBYTE(v5) = sub_415B10(v21, (int)"%s: %s", a1, v20);
              }
            }
            goto LABEL_72;
          }
          v24 = dword_4734F0;
          ++v28;
          if ( dword_4734F0 == 0 )
            break;
          if ( *(_BYTE *)dword_4734F0 == 98 )
          {
            if ( v29 != nullptr )
              goto LABEL_73;
          }
          else if ( (a3 & 4) == 0 )
          {
            break;
          }
        }
        v14 = *(char **)(dword_485FF4 + 4);
        v15 = *v14;
        if ( *v14 != 47 && v15 != 92 && ((unsigned __int8)((v15 | 0x20) - 97) > 0x19u || v14[1] != 58) )
          break;
        if ( v26 < v28 )
          break;
        if ( v26 <= v28 )
          goto LABEL_77;
      }
      sub_413848(*(char **)(dword_485FF4 + 4));
      if ( (int)sub_444C28(v14, v33) >= 0 )
        break;
      if ( *_errno() != 2 && *_errno() != 20 )
        v25 = *_errno();
    }
    if ( (v34 & 0xF000) == 0x8000 )
      break;
    v25 = 13;
  }
  if ( v24 != 0 )
  {
    sub_462C74();
    sub_45E674();
    sub_41CC8C(0);
    sub_44D8A4();
    v16 = sub_41CBF8(a1, 0);
    v10 = v16;
    if ( v16 == 0 || (v17 = dword_485FF4, *(_BYTE *)(v16 + 8) != 1) )
      sub_415B40(v17, "%s not defined in %s", a1, v14);
    *(_DWORD *)(dword_485FF4 + 12) += *(_DWORD *)(dword_485FF4 + 4) - (_DWORD)v14;
    *(_DWORD *)(v17 + 4) = v14;
    goto LABEL_77;
  }
  if ( v27 == 0 )
  {
    *(_BYTE *)a2 = 0;
    v5 = (char *)v28;
    goto LABEL_78;
  }
  ++*(_DWORD *)(dword_485FF0 + 56);
  v10 = sub_41CBF8(a1, 1);
  *(_BYTE *)(v10 + 8) = 0;
  v18 = v28;
LABEL_76:
  *(_DWORD *)(v10 + 4) = v18;
  sub_43B8DC(Key);
LABEL_77:
  *(_BYTE *)(v10 + 9) = 0;
  *(_BYTE *)a2 = *(_BYTE *)(v10 + 8);
  v5 = *(char **)(v10 + 4);
LABEL_78:
  *(_DWORD *)(a2 + 4) = v5;
  return (char)v5;
}

