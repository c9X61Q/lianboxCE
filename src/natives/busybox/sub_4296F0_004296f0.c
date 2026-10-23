// busybox.exe @ 0x4296f0 size=315

int __cdecl sub_4296F0(int a1, const char **a2)
{
  _BYTE *v3; // eax
  char *v4; // eax
  char v5; // bl
  char v6; // cl
  char v7; // dl
  const char **v8; // ebp
  int v9; // ebx
  _BYTE *v10; // edi
  _BYTE *j; // ebx
  const char *v12; // edx
  _BYTE *v13; // ebp
  char v14; // al
  char v15; // al
  int result; // eax
  int v17; // edx
  char v18; // [esp+6h] [ebp-16h]
  char i; // [esp+7h] [ebp-15h]
  _BYTE *v20; // [esp+8h] [ebp-14h] BYREF

  v18 = 0;
  for ( i = 1; ; i = v6 )
  {
    v3 = *++a2;
    if ( *a2 == nullptr || *v3 != 45 )
      break;
    v4 = v3 + 1;
    v5 = v18;
    v6 = i;
    do
    {
      v7 = *v4;
      if ( *v4 == 110 )
      {
        v6 = 0;
      }
      else if ( v7 == 101 )
      {
        v5 = 92;
      }
      else if ( v7 != 69 )
      {
        goto LABEL_13;
      }
      ++v4;
    }
    while ( *v4 != 0 );
    v18 = v5;
  }
LABEL_13:
  v8 = a2;
  v9 = 0;
  while ( *v8 != nullptr )
    v9 += strlen(*v8++) + 1;
  v10 = (_BYTE *)sub_470E78();
  for ( j = v10; ; ++j )
  {
    v12 = *a2;
    if ( *a2 == nullptr )
      break;
    if ( v18 != 0 )
    {
      while ( 1 )
      {
        v14 = *v12;
        if ( *v12 == 0 )
          break;
        v13 = v12 + 1;
        if ( v14 == v18 )
        {
          v15 = v12[1];
          if ( v15 == 99 )
            goto LABEL_33;
          if ( v15 == 48 && (unsigned __int8)(v12[2] - 48) <= 7u )
            v13 = v12 + 2;
          v20 = v13;
          v14 = sub_418050(&v20);
          v13 = v20;
        }
        *j++ = v14;
        v12 = v13;
      }
    }
    else
    {
      j = (_BYTE *)sub_463250();
    }
    if ( *++a2 == nullptr )
      break;
    *j = 32;
  }
  if ( i != 0 )
    *j++ = 10;
LABEL_33:
  *_errno() = 0;
  sub_43269C(j - v10, v10);
  free(v10);
  result = *_errno();
  if ( result != 0 )
  {
    sub_418224("write error", v17);
    return 1;
  }
  return result;
}

