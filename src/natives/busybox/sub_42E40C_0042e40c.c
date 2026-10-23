// busybox.exe @ 0x42e40c size=231

char __usercall sub_42E40C@<al>(int *a1@<eax>)
{
  int *i; // ebx
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  _DWORD v6[5]; // [esp+4h] [ebp-14h] BYREF

  for ( i = a1; i != nullptr; i = (int *)i[1] )
  {
    v6[0] = 0;
    v6[1] = v6;
    LOBYTE(a1) = *(_BYTE *)i;
    if ( *(char *)i > 21 )
    {
      LOBYTE(a1) = (_BYTE)a1 - 22;
      if ( (unsigned __int8)a1 <= 1u )
      {
        a1 = (int *)i[4];
        if ( a1 != nullptr )
        {
          sub_42DB08((int)a1, (int)v6, 10);
          if ( v6[0] == 0 )
            goto LABEL_12;
          v3 = *(_DWORD *)(v6[0] + 4);
          if ( sub_43C648() == 0 )
          {
            if ( i[2] != 1 )
LABEL_12:
              sub_415B40(v2, "redir error");
            *(_BYTE *)i = 17;
            goto LABEL_9;
          }
          v4 = sub_418398(10, (const char *)v3, nullptr);
          a1 = _errno();
          if ( *a1 != 0 || v4 < 0 )
          {
            if ( *(_BYTE *)v3 != 45 || *(_BYTE *)(v3 + 1) != 0 )
              sub_452FB4();
            i[3] = -1;
          }
          else
          {
            i[3] = v4;
          }
        }
      }
    }
    else if ( (char)a1 > 15 )
    {
      sub_42DB08(i[4], (int)v6, 10);
LABEL_9:
      a1 = *(int **)(v6[0] + 4);
      i[5] = (int)a1;
      continue;
    }
  }
  return (char)a1;
}

