// busybox.exe @ 0x42a1c0 size=358

int sub_42A1C0()
{
  int i; // esi
  int v1; // ebp
  int v2; // edi
  __int64 v3; // rcx
  __int64 v4; // rax
  bool v5; // sf
  bool v6; // of
  bool v7; // sf
  bool v8; // of
  unsigned __int8 v9; // bl

  for ( i = sub_42A328(); ; *(_DWORD *)(i + 12) = 0 )
  {
    v1 = sub_446A68();
    if ( v1 == 0 )
    {
      v1 = sub_446A68();
      if ( v1 == 0 )
      {
        v1 = sub_446A68();
        if ( v1 == 0 )
        {
          v1 = sub_446A68();
          if ( v1 == 0 )
          {
            v1 = sub_446A68();
            if ( v1 == 0 )
            {
              v1 = sub_446A68();
              if ( v1 == 0 )
              {
                v1 = sub_446A68();
                if ( v1 == 0 )
                  break;
              }
            }
          }
        }
      }
    }
    MultiByteStr += 4;
    v2 = sub_42A328();
    sub_466BE8();
    sub_466BE8();
    if ( *(_BYTE *)i == 1 || *(_BYTE *)v2 == 1 )
    {
      sub_466CC0();
      sub_466CC0();
      v3 = strcmp(*(const char **)(i + 8), *(const char **)(v2 + 8));
      v4 = 0;
    }
    else
    {
      v3 = *(_QWORD *)(i + 8);
      HIDWORD(v4) = *(_DWORD *)(v2 + 8);
      LODWORD(v4) = *(_DWORD *)(v2 + 12);
    }
    switch ( v1 )
    {
      case '<':
        v6 = __OFSUB__(v3, __PAIR64__(v4, HIDWORD(v4)));
        v5 = (((v3 - __PAIR64__(v4, HIDWORD(v4))) >> 32) & 0x80000000) != 0LL;
LABEL_24:
        v9 = v5 ^ v6;
        goto LABEL_27;
      case 'y':
        v8 = __OFSUB__(__PAIR64__(v4, HIDWORD(v4)), v3);
        v7 = (((__PAIR64__(v4, HIDWORD(v4)) - v3) >> 32) & 0x80000000) != 0LL;
        break;
      case 'z':
      case '=':
        v9 = v4 == __PAIR64__(v3, HIDWORD(v3));
        goto LABEL_27;
      case '^':
        v9 = v4 != __PAIR64__(v3, HIDWORD(v3));
        goto LABEL_27;
      case '>':
        v6 = __OFSUB__(__PAIR64__(v4, HIDWORD(v4)), v3);
        v5 = (((__PAIR64__(v4, HIDWORD(v4)) - v3) >> 32) & 0x80000000) != 0LL;
        goto LABEL_24;
      default:
        v8 = __OFSUB__(v3, __PAIR64__(v4, HIDWORD(v4)));
        v7 = (((v3 - __PAIR64__(v4, HIDWORD(v4))) >> 32) & 0x80000000) != 0LL;
        break;
    }
    v9 = v7 == v8;
LABEL_27:
    sub_431F68();
    sub_431F68();
    i = sub_4728CC();
    *(_DWORD *)(i + 8) = v9;
  }
  return i;
}

