// busybox.exe @ 0x42a474 size=614

int __usercall sub_42A474@<eax>(int a1@<ecx>, int a2@<ebx>)
{
  u_long v2; // ebx
  int v3; // eax
  int v4; // esi
  u_long v5; // eax
  int v7; // esi
  size_t v8; // edi
  int v9; // ebp
  int v10; // esi
  size_t v11; // esi
  int v12; // esi
  int v13; // edi
  int v14; // [esp+8h] [ebp-18h]

  if ( *(_DWORD *)MultiByteStr == 0 || (v3 = sub_439918(a1, *(_DWORD *)MultiByteStr), v4 = v3 + 1, v3 == -1) )
  {
    v2 = MultiByteStr;
    if ( *(_DWORD *)MultiByteStr == 0 )
      goto LABEL_8;
    if ( sub_446A68() == 0 )
    {
      if ( sub_446A68() == 0 )
      {
        MultiByteStr = v2 + 4;
        return sub_463530();
      }
LABEL_8:
      sub_418210("syntax error");
    }
    MultiByteStr = v2 + 4;
    a2 = sub_42A100();
    if ( sub_446A68() == 0 )
      goto LABEL_8;
    MultiByteStr += 4;
  }
  else
  {
    v5 = MultiByteStr;
    MultiByteStr += 4;
    if ( v4 == 1 )
    {
      if ( *(_DWORD *)(v5 + 4) != 0 )
      {
        MultiByteStr = v5 + 8;
        return sub_463530();
      }
      goto LABEL_8;
    }
    if ( v4 == 2 )
    {
      v7 = sub_42A474();
      sub_466CC0();
      v8 = strlen(*(const char **)(v7 + 8));
      a2 = sub_4728CC();
      *(_DWORD *)(a2 + 8) = v8;
      *(_DWORD *)(a2 + 12) = 0;
LABEL_33:
      sub_431F68();
      return a2;
    }
    v9 = sub_42A474();
    switch ( v4 )
    {
      case 3:
        v10 = sub_42A474();
        a2 = sub_427670(v9, v10);
        sub_431F68();
        goto LABEL_33;
      case 4:
        v14 = sub_42A474();
        sub_466CC0();
        sub_466CC0();
        v11 = strcspn(*(const char **)(v9 + 8), *(const char **)(v14 + 8)) + 1;
        a2 = sub_4728CC();
        *(_DWORD *)(a2 + 8) = v11;
        *(_DWORD *)(a2 + 12) = 0;
        if ( strlen(*(const char **)(v9 + 8)) + 1LL == v11 )
        {
          *(_DWORD *)(a2 + 8) = 0;
          *(_DWORD *)(a2 + 12) = 0;
        }
        sub_431F68();
        goto LABEL_33;
      case 5:
        v12 = sub_42A474();
        v13 = sub_42A474();
        sub_466CC0();
        if ( (unsigned __int8)sub_466BE8() != 0
          && (unsigned __int8)sub_466BE8() != 0
          && (strlen(*(const char **)(v9 + 8)) < *(_DWORD *)(v12 + 8)) + *(_DWORD *)(v12 + 12) <= 0
          && (*(_DWORD *)(v12 + 8) != 0) + *(_DWORD *)(v12 + 12) > 0
          && *(__int64 *)(v13 + 8) > 0 )
        {
          a2 = sub_470E78();
          *(_BYTE *)a2 = 1;
          *(_DWORD *)(a2 + 8) = sub_4718A8();
        }
        else
        {
          a2 = sub_463530();
        }
        sub_431F68();
        sub_431F68();
        goto LABEL_33;
      default:
        break;
    }
  }
  return a2;
}

