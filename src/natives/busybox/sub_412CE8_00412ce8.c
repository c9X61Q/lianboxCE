// busybox.exe @ 0x412ce8 size=168

int __usercall sub_412CE8@<eax>(char *Str2@<ecx>, int a2@<eax>, _DWORD *a3@<edx>)
{
  char *Str; // esi
  char *v6; // eax
  char *v7; // edi
  const char **i; // edx
  const char **v10; // [esp+8h] [ebp-14h]
  _DWORD *v11; // [esp+8h] [ebp-14h]

  if ( Str2 != nullptr )
  {
    for ( Str = Str2; ; Str = v7 + 1 )
    {
      if ( *Str == 0 )
        return a2;
      v6 = strchr(Str, 59);
      v7 = v6;
      if ( v6 != nullptr )
      {
        if ( Str == v6 )
          continue;
        *v6 = 0;
      }
      if ( a2 != 0 )
      {
        for ( i = (const char **)a2; *i != nullptr; i = v10 + 1 )
        {
          v10 = i;
          if ( strcmp(*i, Str) == 0 )
            goto LABEL_13;
        }
      }
      a2 = sub_47168C(*a3, 1028);
      v11 = (_DWORD *)(a2 + 4 * *a3);
      *v11 = sub_47188C();
      ++*a3;
LABEL_13:
      if ( v7 == nullptr )
        return a2;
      *v7 = 59;
    }
  }
  return a2;
}

