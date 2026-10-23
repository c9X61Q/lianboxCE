// busybox.exe @ 0x471374 size=214

int __usercall sub_471374@<eax>(char *a1@<eax>)
{
  int v2; // ebx
  char *v3; // eax
  int v4; // ecx
  char *v5; // ebp
  const char *v6; // eax
  const char *Source; // ebp
  size_t v8; // esi
  size_t v9; // eax
  int v10; // ecx
  CHAR *v11; // eax
  char *v12; // esi
  char *v13; // edi
  int v14; // ecx
  char *Str; // [esp+0h] [ebp-18h]

  *_errno() = 0;
  v2 = sub_471350(a1);
  if ( v2 == 0 && *_errno() == 2 )
  {
    v3 = strrchr(a1, 47);
    v5 = v3;
    if ( v3 != nullptr )
    {
      *v3 = 0;
      v6 = (const char *)sub_471350(a1);
      if ( v6 != nullptr )
      {
        Source = v5 + 1;
        v8 = strlen(v6);
        v9 = strlen(Source);
        v2 = sub_471600(v10, v8 + v9 + 2);
        *(_BYTE *)(v2 + v8) = 47;
        strcpy((char *)(v2 + v8 + 1), Source);
      }
    }
    else
    {
      v11 = sub_471218(a1, v4);
      v12 = v11;
      if ( v11 != nullptr )
      {
        if ( *v11 == 47 )
        {
          v2 = sub_471374(Str);
        }
        else
        {
          v13 = (char *)sub_471624();
          v2 = sub_41E9A4(v13, v12, v14);
          free(v13);
        }
        free(v12);
      }
    }
  }
  return v2;
}

