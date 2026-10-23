// busybox.exe @ 0x42fccc size=227

int __usercall sub_42FCCC@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v3; // edi
  char *v4; // eax
  const char *v5; // esi

  v3 = 1;
  if ( sub_4305B0(a2, **(_DWORD **)(a1 + 24)) != 0 )
  {
    v4 = strrchr(**(const char ***)(a1 + 24), 46);
    v3 = 1;
    if ( v4 != nullptr )
    {
      v5 = v4 + 1;
      if ( strcmp(v4 + 1, "tar") == 0 )
      {
        *(_DWORD *)(a1 + 100) = sub_433E78;
      }
      else if ( strcmp(v5, "gz") == 0 )
      {
        *(_DWORD *)(a1 + 100) = sub_4344E8;
      }
      else if ( strcmp(v5, "bz2") == 0 )
      {
        *(_DWORD *)(a1 + 100) = sub_4344B4;
      }
      else if ( strcmp(v5, "lzma") == 0 )
      {
        *(_DWORD *)(a1 + 100) = sub_43451C;
      }
      else
      {
        if ( strcmp(v5, "xz") != 0 )
          return v3;
        *(_DWORD *)(a1 + 100) = sub_434550;
      }
      return 0;
    }
  }
  return v3;
}

