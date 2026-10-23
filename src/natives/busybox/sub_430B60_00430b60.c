// busybox.exe @ 0x430b60 size=590

int __usercall sub_430B60@<eax>(_DWORD *a1@<eax>, unsigned int *a2@<edx>, unsigned __int8 a3@<cl>)
{
  _DWORD *v3; // ebx
  _BYTE *v4; // edi
  int v5; // esi
  BOOL v6; // ebp
  int Val; // esi
  void *v8; // eax
  unsigned int v9; // edx
  int i; // ebp
  _BYTE *v11; // ebp
  _BYTE *v12; // eax
  int v13; // edx
  char v14; // al
  int v15; // ecx
  _BYTE *v16; // edx
  char v17; // al
  _BYTE *v18; // eax
  _BYTE *v19; // edx
  _BYTE *v20; // eax
  unsigned int v21; // edx
  _BYTE *v22; // eax
  _BYTE *j; // eax
  int result; // eax
  int v26; // [esp+8h] [ebp-20h]
  unsigned int v27; // [esp+8h] [ebp-20h]
  bool v28; // [esp+8h] [ebp-20h]
  unsigned int v31; // [esp+14h] [ebp-14h]

  v3 = (_DWORD *)dword_486010;
  v4 = *(_BYTE **)(dword_486010 + 8);
  v5 = *(_DWORD *)(dword_486010 + 32);
  v6 = true;
  if ( v5 != 0 )
    v6 = v5 > sub_41F7C0(*(_DWORD *)dword_486010, (unsigned int)v4);
  Val = a3;
  if ( strchr("cdy><", a3) != nullptr )
  {
    v8 = (void *)sub_418A48((unsigned int)v4);
    v9 = (unsigned int)v8;
    v26 = v3[8];
    for ( i = 1; v26 > i; ++i )
    {
      v31 = v9;
      v8 = (void *)sub_446708();
      v9 = v31;
    }
    v27 = v9;
    v11 = sub_4298C0(v8);
LABEL_37:
    v19 = (_BYTE *)v27;
    goto LABEL_38;
  }
  if ( strchr(a0bbeefth, a3) != nullptr )
  {
    sub_4250C0(a3);
LABEL_28:
    v11 = (_BYTE *)v3[2];
    v19 = v4;
    goto LABEL_38;
  }
  if ( strchr("wW", a3) != nullptr )
  {
    sub_4250C0(a3);
    v12 = (_BYTE *)v3[2];
    if ( (unsigned int)v12 > *v3 )
    {
      if ( ((unsigned __int8)((v13 = (unsigned __int8)*(v12 - 1)) - 9) <= 4u || (_BYTE)v13 == 32)
        && (unsigned __int8)(v14 = *v12 - 9) > 4u
        && v14 != 23
        || *(_BYTE *)sub_4635B0(v13 - 9, v13) != 0 && *(_BYTE *)sub_4635B0(v15, *(unsigned __int8 *)v3[2]) == 0
        || ((v16 = (_BYTE *)v3[2], (unsigned __int8)((v17 = *(v16 - 1)) - 48) <= 9u)
         || (unsigned __int8)((v17 | 0x20) - 97) <= 0x19u)
        && (unsigned __int8)(*v16 - 48) > 9u
        && (unsigned __int8)((*v16 | 0x20) - 97) > 0x19u )
      {
        --v3[2];
      }
    }
    v18 = (_BYTE *)v3[2];
    if ( (unsigned int)v18 > *v3 && *v18 == 10 )
      v3[2] = v18 - 1;
    goto LABEL_28;
  }
  if ( strchr("H-k{", a3) == nullptr && (v6 || a3 != 71) )
  {
    v28 = a3 == 71;
    if ( strchr("L+j}\r\n", Val) == nullptr && (!v6 || !v28) )
    {
      v11 = v4;
      v21 = (unsigned int)v4;
      goto LABEL_44;
    }
    v27 = sub_418A48((unsigned int)v4);
    sub_4250C0(Val);
    sub_427928();
    v11 = (_BYTE *)v3[2];
    goto LABEL_37;
  }
  v11 = sub_4298C0(v4);
  sub_4250C0(a3);
  sub_42790C();
  v19 = (_BYTE *)v3[2];
LABEL_38:
  if ( v19 <= v11 )
  {
    if ( v19 >= v11 )
    {
      v22 = v19;
      v21 = (unsigned int)v11;
      v11 = v22;
      goto LABEL_44;
    }
    v20 = v11;
    v11 = v19;
    v19 = v20;
  }
  v21 = (unsigned int)&v19[(strchr(a0bbh, Val) == nullptr) - 1];
LABEL_44:
  for ( j = v11; ; ++j )
  {
    if ( v21 < (unsigned int)j )
    {
      result = 0;
      goto LABEL_50;
    }
    if ( *j == 10 )
      break;
  }
  result = 1;
LABEL_50:
  *a1 = v11;
  *a2 = v21;
  v3[2] = v4;
  return result;
}

