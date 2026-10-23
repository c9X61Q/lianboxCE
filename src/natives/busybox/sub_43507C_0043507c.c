// busybox.exe @ 0x43507c size=297

_BYTE *__usercall sub_43507C@<eax>(_BYTE *a1@<eax>, int *a2@<edx>)
{
  char v4; // al
  _BYTE *v5; // ebx
  unsigned int *v6; // esi
  unsigned int v7; // eax
  char v8; // al
  unsigned __int8 v9; // al
  unsigned int v10; // edx
  unsigned int v11; // eax
  unsigned int *v12; // ebp
  int v13; // ecx
  int v14; // eax
  _DWORD v16[5]; // [esp+14h] [ebp-14h] BYREF

  *a2 = -1;
  v4 = *a1;
  switch ( v4 )
  {
    case '.':
      v5 = a1 + 1;
      v6 = (unsigned int *)dword_486010;
      v7 = *(_DWORD *)(dword_486010 + 8);
LABEL_19:
      v10 = sub_418A48(v7);
      v11 = *v6;
      goto LABEL_9;
    case '\'':
      v8 = a1[1];
      if ( (unsigned __int8)(v8 - 65) <= 0x19u )
        v8 += 32;
      v5 = a1 + 2;
      v9 = v8 - 97;
      if ( v9 <= 0x19u )
      {
        v10 = *(_DWORD *)(dword_486010 + 4 * v9 + 236);
        if ( v10 != 0 )
        {
          v11 = *(_DWORD *)dword_486010;
LABEL_9:
          *a2 = sub_41F7C0(v11, v10);
        }
      }
      break;
    case '/':
      v5 = (_BYTE *)sub_4635B0(a1 + 1, 47);
      v12 = (unsigned int *)dword_486010;
      if ( a1 + 1 != v5 )
      {
        free(*(void **)(dword_486010 + 104));
        v12[26] = sub_4718A8(v13, v5 - a1);
      }
      if ( *v5 == 47 )
        ++v5;
      v14 = sub_446708();
      v10 = (unsigned int)sub_41B7F0(v14, (const char *)(v12[26] + 1), 3);
      if ( v10 != 0 )
      {
        v11 = *v12;
        goto LABEL_9;
      }
      break;
    case '$':
      v5 = a1 + 1;
      v6 = (unsigned int *)dword_486010;
      v7 = *(_DWORD *)(dword_486010 + 4) - 1;
      goto LABEL_19;
    default:
      v5 = a1;
      if ( (unsigned __int8)(v4 - 48) <= 9u )
      {
        sub_462940(a1, "%d%n", a2, v16);
        return &a1[v16[0]];
      }
      break;
  }
  return v5;
}

