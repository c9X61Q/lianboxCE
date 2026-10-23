// busybox.exe @ 0x45b26c size=412

char *__usercall sub_45B26C@<eax>(char *a1@<eax>, char a2@<dl>, _DWORD *a3@<ecx>)
{
  const char *Control; // eax
  char *v6; // edx
  char *v7; // edi
  int v8; // eax
  int v9; // esi
  char *v10; // edi
  int v11; // eax
  int v12; // ebx
  int v13; // esi
  char v14; // al
  int v15; // ecx
  char v16; // dl
  bool v17; // al
  char *v19; // [esp+8h] [ebp-24h]
  char *v20; // [esp+8h] [ebp-24h]
  unsigned int v21; // [esp+Ch] [ebp-20h]
  char *v22; // [esp+Ch] [ebp-20h]
  _DWORD *v23; // [esp+10h] [ebp-1Ch]
  int v24; // [esp+14h] [ebp-18h]
  char *v25; // [esp+18h] [ebp-14h]
  int v26; // [esp+18h] [ebp-14h]

  v23 = a3;
  Control = asc_483A3C;
  if ( a3 == nullptr )
    Control = (const char *)&unk_483A3D;
  v6 = strpbrk(a1, Control);
  if ( v6 != nullptr )
  {
    v24 = a2 & 8;
    v7 = v6;
    v19 = a1;
    if ( (a2 & 1) != 0 )
    {
      v21 = v6 - a1;
      v20 = v6;
      v8 = v6 - a1 + strlen(v6) + 1;
      if ( (a2 & 8) != 0 )
      {
        v9 = dword_485FF4;
        v10 = &a1[-*(_DWORD *)(dword_485FF4 + 4)];
        a1 = (char *)sub_441F7C(v8, dword_473334);
        v19 = &v10[*(_DWORD *)(v9 + 4)];
        v6 = &v19[v21];
      }
      else
      {
        v25 = v20;
        v11 = (a2 & 0x10) != 0 ? sub_470E78() : sub_462C74();
        v19 = a1;
        a1 = (char *)v11;
        v6 = v25;
      }
      v7 = a1;
      if ( v21 != 0 )
      {
        qmemcpy(a1, v19, v21);
        v7 = &a1[v21];
      }
    }
    v12 = a2 & 2;
    v13 = v12;
    while ( 1 )
    {
      v14 = *v6;
      if ( *v6 == 0 )
      {
        *v7 = 0;
        if ( v24 != 0 )
          dword_473334 = (int)(v7 + 1);
        return a1;
      }
      v22 = v6 + 1;
      v26 = v13;
      if ( v14 != -120 )
        break;
LABEL_30:
      v12 = v13;
      v13 = v26;
      v6 = v22;
    }
    v15 = 0;
    if ( v14 != 92 )
    {
      if ( v14 != -127 )
      {
        v15 = v13;
        if ( v23 != nullptr && v6 == &v19[*v23] )
        {
          *v23 = v7 - a1;
          v13 = 0;
          v15 = 0;
          v23 = nullptr;
        }
        goto LABEL_29;
      }
      if ( v12 != 0 )
      {
        v16 = v6[1];
        v17 = true;
        if ( (unsigned __int8)(v16 - 33) <= 0x1Eu )
          v17 = ((0x40001201u >> (v16 - 33)) & 1) == 0;
        if ( (unsigned __int8)(v16 - 91) > 3u )
        {
          v15 = v13;
          v6 = v22;
          if ( v17 )
            goto LABEL_29;
        }
        *v7 = 92;
        v15 = v13;
        ++v7;
      }
      else
      {
        v15 = v13;
      }
      v6 = v22;
    }
LABEL_29:
    v22 = v6 + 1;
    *v7 = *v6;
    v26 = v13;
    v13 = v15;
    ++v7;
    goto LABEL_30;
  }
  return a1;
}

