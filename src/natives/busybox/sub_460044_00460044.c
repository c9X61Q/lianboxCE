// busybox.exe @ 0x460044 size=527

void __usercall __noreturn sub_460044(char *a1@<eax>, const char **a2@<edx>, char *a3@<ecx>, int a4)
{
  int v5; // edi
  int v6; // ebx
  const char *v7; // ebp
  int v8; // ebx
  int v9; // eax
  char v10; // cl
  char *v11; // eax
  int v12; // ecx
  const char *v14; // [esp+18h] [ebp-18h]
  char *v15; // [esp+1Ch] [ebp-14h] BYREF

  v15 = a3;
  v5 = sub_43E27C(1, 32, nullptr, nullptr);
  if ( sub_437D6C(a1) )
  {
    v6 = -1;
  }
  else
  {
    v6 = sub_430048(a1);
    if ( v6 < 0 )
    {
      v7 = a1;
      goto LABEL_10;
    }
  }
  v7 = (const char *)sub_462B6C();
  sub_4678F0(a2, v7, v5);
  if ( v6 == -1 )
  {
    v8 = *_errno();
    if ( sub_4685AC(a1) != 0 )
    {
      v14 = sub_416E24(a1);
      v9 = sub_430048(v14);
      v8 = 2;
      v10 = 127;
      if ( v9 < 0 )
        goto LABEL_23;
      sub_4678F0(a2, v14, v5);
      v8 = *_errno();
    }
LABEL_17:
    v10 = 127;
    if ( v8 != 114 )
    {
      v10 = 126;
      if ( v8 <= 114 )
      {
        v10 = 127;
        if ( v8 != 38 )
        {
          v10 = 126;
          if ( v8 <= 38 )
          {
            v10 = 127;
            if ( v8 != 2 )
              v10 = (v8 == 20) + 126;
          }
        }
      }
    }
LABEL_23:
    *(_BYTE *)dword_485FF0 = v10;
    v11 = sub_42A05C(v8, "not found");
    sub_415B20(v12, 3, (int)"%s: %s", v7, v11);
  }
LABEL_10:
  v8 = 2;
  while ( sub_448618(&v15, *a2) >= 0 )
  {
    if ( --a4 < 0 && dword_4734F0 == 0 )
    {
      sub_4678F0(a2, *(_DWORD *)(dword_485FF4 + 4), v5);
      if ( *_errno() != 2 && *_errno() != 20 )
        v8 = *_errno();
    }
  }
  goto LABEL_17;
}

