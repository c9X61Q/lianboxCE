// busybox.exe @ 0x441b54 size=243

const char *__userpurge sub_441B54@<eax>(unsigned __int64 a1@<edx:eax>, unsigned int a2@<ecx>, unsigned int a3)
{
  int v3; // esi
  int v4; // edx
  void *v5; // eax
  __int64 v6; // kr00_8
  unsigned int v7; // ebx
  const char *v8; // esi
  unsigned __int8 *v9; // edi

  if ( a1 != 0 )
  {
    if ( a2 > 1 )
    {
      v3 = a2 * HIDWORD(a1);
      a1 = a2 * (unsigned __int64)(unsigned int)a1;
      HIDWORD(a1) += v3;
    }
    if ( a3 != 0 )
    {
      LODWORD(v6) = sub_4026E0((a3 >> 1) + a1, a3, 0);
      HIDWORD(v6) = v4;
      v5 = (void *)sub_4708BC("%llu", v6);
      return (const char *)sub_415D34(v5);
    }
    v7 = 0;
    v8 = "%llu";
    v9 = (unsigned __int8 *)&unk_484804;
    while ( a1 > 0x3FF )
    {
      ++v9;
      v7 = (10 * (a1 & 0x3FF) + 512) >> 10;
      a1 >>= 10;
      v8 = "%llu.%u%c";
    }
    if ( v7 == 10 )
    {
      ++a1;
      v7 = 0;
      if ( a2 == 0 )
      {
LABEL_15:
        v8 = "%llu%*c";
        v7 = 1;
      }
    }
    else if ( a2 == 0 )
    {
      if ( v7 > 4 )
        ++a1;
      goto LABEL_15;
    }
    v5 = (void *)sub_4708BC(v8, a1, v7, *v9);
    return (const char *)sub_415D34(v5);
  }
  return "0";
}

