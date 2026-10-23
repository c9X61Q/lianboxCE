// busybox.exe @ 0x42a078 size=135

int __cdecl sub_42A078(int a1, char *a2, int a3)
{
  char v3; // dl
  int result; // eax
  bool v5; // cc
  unsigned __int8 v6; // dl

  v3 = *a2;
  result = 1;
  if ( *a2 < 0 )
  {
    if ( v3 == -114 )
    {
      if ( a3 > 1 )
      {
        result = 2;
        v5 = (unsigned __int8)(a2[1] + 95) <= 0x3Eu;
        goto LABEL_14;
      }
LABEL_10:
      *_errno() = 22;
      return -1;
    }
    if ( v3 == -113 )
    {
      if ( a3 <= 2 )
        goto LABEL_10;
      if ( (unsigned __int8)(a2[1] + 95) <= 0x5Du )
      {
        v6 = a2[2] + 95;
        result = 3;
LABEL_13:
        v5 = v6 <= 0x5Du;
LABEL_14:
        if ( v5 )
          return result;
      }
    }
    else
    {
      if ( a3 <= 1 )
        goto LABEL_10;
      if ( (unsigned __int8)(v3 + 95) <= 0x5Du )
      {
        v6 = a2[1] + 95;
        result = 2;
        goto LABEL_13;
      }
    }
    *_errno() = 42;
    return -1;
  }
  return result;
}

