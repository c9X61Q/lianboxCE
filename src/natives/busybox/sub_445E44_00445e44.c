// busybox.exe @ 0x445e44 size=544

void __cdecl __noreturn sub_445E44(int a1, int a2)
{
  int v2; // ebx
  int v3; // edx
  int v4; // eax
  int v5; // edi
  int v6; // esi
  int v7; // esi
  int v8; // ebx
  const char *v9; // eax
  const char *v10; // eax
  u_int v11; // ebp
  SOCKET fd; // esi
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  SOCKET v16; // edx
  int v17; // [esp+14h] [ebp-220h]
  int v18; // [esp+14h] [ebp-220h]
  char v19; // [esp+14h] [ebp-220h]
  fd_set v20; // [esp+1Ch] [ebp-218h]
  fd_set v21; // [esp+120h] [ebp-114h] BYREF

  v2 = 0;
  v3 = 0;
  while ( 1 )
  {
    v17 = v3;
    v4 = sub_4040F0(a1, a2, "lp:");
    v3 = v17;
    if ( v4 <= 0 )
      break;
    if ( v4 == 108 )
    {
      ++v2;
    }
    else
    {
      if ( v4 != 112 )
        goto LABEL_9;
      v3 = sub_417B80(dword_48601C, "tcp", 0);
    }
  }
  v5 = a2 + 4 * dword_473090;
  v6 = a1 - dword_473090;
  if ( v2 != 0 )
  {
    if ( v6 > 1 )
      goto LABEL_9;
    v7 = sub_420910(*(_BYTE **)v5, v17);
    sub_470E04();
    sub_41CB70(v7);
    v8 = sub_442CF4(v7, nullptr, nullptr);
    v9 = "accept";
    if ( v8 < 0 )
LABEL_22:
      sub_41823C(v9);
    sub_442EA4(v7);
  }
  else
  {
    if ( v6 > 2 || v6 == 0 )
LABEL_9:
      sub_418164();
    v10 = *(const char **)(v5 + 4);
    if ( v10 != nullptr )
      sub_417B80(v10, "tcp", 0);
    v8 = sub_42091C();
  }
  v20.fd_array[0] = v8;
  if ( v8 != 0 )
  {
    v20.fd_array[1] = 0;
    v11 = 2;
  }
  else
  {
    v11 = 1;
  }
  while ( 1 )
  {
    v20.fd_count = v11;
    v21 = v20;
    if ( sub_443C9C(v8 + 1, &v21, nullptr, nullptr, nullptr) < 0 )
      break;
    for ( fd = 0; ; fd = v8 )
    {
      if ( _WSAFDIsSet(fd, &v21) != 0 )
      {
        v13 = sub_45C560(1024, (LPSTR)&MultiByteStr);
        v14 = v13;
        if ( v8 == fd )
        {
          if ( v13 <= 0 )
            exit(0);
        }
        else if ( v13 <= 0 )
        {
          v18 = v13;
          sub_444780(v8, 1);
          v15 = 0;
          v14 = v18;
          while ( 1 )
          {
            if ( v15 == v11 )
              goto LABEL_38;
            if ( v20.fd_array[v15] == 0 )
              break;
            ++v15;
          }
          v16 = v20.fd_array[0];
          v19 = 0;
          --v11;
          while ( v11 > v15 )
          {
            v19 = 1;
            v16 = v20.fd_array[1];
            v15 = 1;
          }
          if ( v19 != 0 )
            v20.fd_array[0] = v16;
        }
LABEL_38:
        sub_471D00(v14, &MultiByteStr);
      }
      if ( v8 == fd )
        break;
    }
  }
  v9 = "select";
  goto LABEL_22;
}

