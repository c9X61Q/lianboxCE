// busybox.exe @ 0x46204c size=722

int __usercall sub_46204C@<eax>(int a1@<eax>, const CHAR *a2@<edx>, int a3@<ecx>, char **Environment)
{
  char *v4; // edi
  int v5; // ecx
  char *v6; // ecx
  char *v7; // esi
  char *v8; // edx
  int v9; // ebx
  char v10; // al
  int m; // eax
  char *v12; // eax
  char *v13; // ebx
  char v14; // dl
  int j; // edx
  int k; // eax
  char v17; // dl
  const char *Str; // eax
  void *v19; // ebx
  intptr_t v20; // esi
  void *v21; // eax
  char *v22; // eax
  char *v25; // [esp+14h] [ebp-90h]
  int v27; // [esp+1Ch] [ebp-88h]
  int v28; // [esp+20h] [ebp-84h]
  int i; // [esp+24h] [ebp-80h]
  char *v30; // [esp+24h] [ebp-80h]
  int v31; // [esp+28h] [ebp-7Ch]
  char **Arguments; // [esp+2Ch] [ebp-78h]
  int v33; // [esp+30h] [ebp-74h]
  BOOL v34; // [esp+34h] [ebp-70h]
  _BYTE v35[16]; // [esp+38h] [ebp-6Ch] BYREF
  int v36; // [esp+48h] [ebp-5Ch]
  __int64 v37; // [esp+60h] [ebp-44h]

  v4 = (char *)a2;
  v33 = sub_444C28(a2, (int)v35);
  if ( v33 != 0 )
    return -1;
  if ( (v36 & 0xF040) != 0x8040 )
  {
    *_errno() = 13;
    return -1;
  }
  v27 = sub_463690();
  Arguments = (char **)sub_4728CC(v5);
  v31 = 0;
LABEL_5:
  if ( v31 < v27 )
  {
    v7 = *(char **)(a3 + 4 * v31);
    v34 = *v7 == 0;
    v8 = v7;
    v9 = 0;
    for ( i = 0; ; i = v28 )
    {
      v10 = *v8;
      if ( *v8 == 0 )
      {
LABEL_25:
        if ( (v9 | v34) == 0 )
          goto LABEL_49;
        v12 = (char *)sub_470E78();
        v13 = v12;
        if ( v34 )
        {
          ++v12;
          *v13 = 34;
        }
        v6 = (char *)v34;
        while ( 2 )
        {
          v14 = *v7;
          if ( *v7 != 0 )
          {
            if ( v14 == 34 )
              goto LABEL_43;
            if ( v14 != 92 )
              goto LABEL_44;
            for ( j = 0; ; v12[j - 1] = 92 )
            {
              v30 = &v12[j];
              v6 = &v7[j];
              LOBYTE(v6) = v7[j];
              if ( (_BYTE)v6 != 92 )
                break;
              ++j;
            }
            if ( (_BYTE)v6 != 34 && ((_BYTE)v6 != 0 || !v34) )
            {
              v12 += j;
              v7 += j;
              goto LABEL_44;
            }
            for ( k = 0; k != j; v30[k++] = 92 )
              ;
            v12 = &v30[k];
            v7 += j;
            if ( (_BYTE)v6 == 34 )
LABEL_43:
              *v12++ = 92;
LABEL_44:
            v17 = *v7;
            if ( *v7 != 0 )
            {
              ++v7;
              *v12++ = v17;
            }
            continue;
          }
          break;
        }
        if ( v34 )
          *v12++ = 34;
        *v12 = 0;
        v7 = v13;
LABEL_49:
        Arguments[v31++] = v7;
        goto LABEL_5;
      }
      if ( (unsigned __int8)(v10 - 9) <= 4u || v10 == 32 )
        break;
      if ( v10 == 34 )
      {
        ++v9;
LABEL_23:
        v6 = (char *)(i + 1);
        v28 = i + 1;
        v25 = v8 + 1;
        goto LABEL_24;
      }
      if ( v10 != 92 )
        goto LABEL_23;
      for ( m = 0; ; ++m )
      {
        v28 = m + i;
        v6 = &v8[m];
        v25 = &v8[m];
        LOBYTE(v6) = v8[m];
        if ( (_BYTE)v6 != 92 )
          break;
      }
      if ( (_BYTE)v6 == 34 || (_BYTE)v6 == 0 && v34 )
        v9 += 2 * m + 1;
      if ( (_BYTE)v6 == 0 )
        goto LABEL_25;
LABEL_24:
      v8 = v25;
    }
    v34 = true;
    goto LABEL_23;
  }
  if ( sub_437D24(v6) == 0 || (sub_460FFC(*Arguments), v20 = 0, v19 = nullptr, v37 != 0) )
  {
    Str = sub_416E24(v4);
    v19 = nullptr;
    if ( strchr(Str, 46) == nullptr )
    {
      v21 = (void *)sub_4708BC("%s.", v4);
      v19 = v21;
      if ( v21 != nullptr )
        v4 = (char *)v21;
    }
    v20 = spawnve(a1, v4, (const char *const *)Arguments, (const char *const *)Environment);
  }
  while ( v33 < v27 )
  {
    v22 = Arguments[v33];
    if ( v22 != *(char **)(a3 + 4 * v33) )
      free(v22);
    ++v33;
  }
  free(Arguments);
  free(v19);
  return v20;
}

