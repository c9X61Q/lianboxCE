// busybox.exe @ 0x4654c4 size=426

int __cdecl sub_4654C4(int a1, _BYTE **a2)
{
  _BYTE *v2; // eax
  int v3; // ecx
  int *v4; // ebx
  int Str1; // edx
  const char *v6; // eax
  int v7; // ebx
  void *v8; // esi
  _BYTE *v9; // eax
  int v10; // ecx
  bool v11; // zf
  _BYTE *v12; // edx
  int v13; // eax
  __int64 v14; // rax
  int *v15; // eax
  const char *v16; // eax
  int *v18; // [esp+24h] [ebp+Ch]

  v2 = sub_416E24(*a2);
  if ( *v2 == 91 )
  {
    v4 = (int *)&a2[a1 - 1];
    Str1 = *v4;
    if ( v2[1] != 0 )
    {
      if ( strcmp((const char *)Str1, "]]") != 0 )
      {
        v6 = "missing ]]";
        goto LABEL_6;
      }
    }
    else if ( *(_BYTE *)Str1 != 93 || *(_BYTE *)(Str1 + 1) != 0 )
    {
      v6 = "missing ]";
LABEL_6:
      sub_4181F8(v6);
      return 2;
    }
    *v4 = 0;
  }
  dword_486000 = (void *)sub_4728CC(v3);
  v7 = setjmp3();
  v8 = dword_486000;
  if ( v7 != 0 )
    goto LABEL_34;
  v18 = (int *)(a2 + 1);
  *(_DWORD *)dword_486000 = v18;
  while ( 1 )
  {
    v9 = (_BYTE *)*v18;
    if ( *v18 == 0 )
    {
      v13 = 1;
      goto LABEL_21;
    }
    v10 = v18[1];
    if ( v10 == 0 )
    {
      v11 = *v9 == 0;
LABEL_19:
      v13 = v11;
LABEL_21:
      v7 ^= v13;
      goto LABEL_34;
    }
    if ( v18[2] != 0 )
    {
      v12 = (_BYTE *)v18[3];
      if ( v12 != nullptr )
      {
        v10 = (int)v18;
        if ( v18[4] == 0 && *v9 == 40 && v9[1] == 0 && *v12 == 41 && v12[1] == 0 )
        {
          v18[3] = 0;
          ++v18;
        }
      }
      else
      {
        sub_41C3EC(v18[1], v10);
        if ( *(_BYTE *)(*((_DWORD *)v8 + 1) + 1) == 1 )
        {
          *(_DWORD *)v8 = v18;
          v11 = sub_418B04() == 0;
          goto LABEL_19;
        }
      }
    }
    if ( *(_BYTE *)*v18 != 33 || *(_BYTE *)(*v18 + 1) != 0 )
      break;
    ++v18;
    v7 ^= 1u;
  }
  sub_41C3EC(**(_DWORD **)v8, v10);
  LODWORD(v14) = sub_44796C();
  v7 = v14 == 0;
  v15 = *(int **)v8;
  if ( **(_DWORD **)v8 != 0 )
  {
    *(_DWORD *)v8 = v15 + 1;
    v16 = (const char *)v15[1];
    if ( v16 != nullptr )
    {
      sub_41783C("%s: unknown operand", v16);
      v7 = 2;
    }
  }
LABEL_34:
  free(*((void **)v8 + 2));
  free(v8);
  return v7;
}

