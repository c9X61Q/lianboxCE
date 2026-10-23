// busybox.exe @ 0x432dd0 size=380

int __usercall sub_432DD0@<eax>(char *Str@<ecx>, int a2@<eax>, int a3@<edx>, const char **a4)
{
  int v7; // eax
  char *v8; // eax
  const char *v9; // eax
  int v10; // ebx
  const char *v11; // eax
  int v13; // [esp+14h] [ebp-1Ch]
  int Val; // [esp+18h] [ebp-18h]
  int v15[5]; // [esp+1Ch] [ebp-14h] BYREF

  if ( (dword_486008 & 4) != 0 )
    dword_473094 = 0;
  dword_473090 = 0;
  v13 = 0;
  while ( 1 )
  {
    v7 = (dword_486008 & 0x80u) == 0 ? sub_404120(a3, a2, Str, a4, v15) : sub_404150(a3, a2, Str, a4, v15);
    if ( v7 == -1 )
      break;
    if ( v7 == 58 || v7 == 63 )
    {
      v13 = 1;
    }
    else if ( (dword_486008 & 8) == 0 )
    {
      if ( v7 == 2 )
      {
        sub_46F088(" --%s", a4[4 * v15[0]]);
        if ( a4[4 * v15[0] + 1] != nullptr )
          goto LABEL_17;
      }
      else if ( v7 == 1 || (Val = v7, sub_46F088(" -%c", v7), (v8 = strchr(Str, Val)) != nullptr) && v8[1] == 58 )
      {
LABEL_17:
        v9 = (const char *)sub_446D78();
        sub_46F088(" %s", v9);
      }
    }
  }
  if ( (dword_486008 & 8) == 0 )
  {
    sub_46F088(" --");
    v10 = a2 + 4 * dword_473090;
    while ( 1 )
    {
      v10 += 4;
      if ( *(_DWORD *)(v10 - 4) == 0 )
        break;
      v11 = (const char *)sub_446D78();
      sub_46F088(" %s", v11);
    }
    sub_418130(10);
  }
  return v13;
}

