// busybox.exe @ 0x438850 size=640

int __cdecl sub_438850(int a1, int a2)
{
  int v2; // ebx
  char v3; // di
  FILE *v4; // esi
  void *Block; // ebp
  char v6; // al
  int v7; // edx
  int Val; // eax
  char *v9; // eax
  _DWORD *v10; // esi
  FILE *v12; // ebx
  char *v13; // edi
  char v14; // al
  int v15; // eax
  void *v16; // ebp
  int v17[5]; // [esp+14h] [ebp-14h] BYREF

  v2 = sub_414210();
  v3 = 0;
  if ( dword_485AD0[2] == 0 )
  {
    v17[0] = 67;
LABEL_3:
    ((void (__noreturn *)(void))loc_416F84)();
  }
  while ( 1 )
  {
    Val = sub_4040F0(a1, a2, "bcdoxCe:f:n:s:vR");
    v17[0] = Val;
    if ( Val <= 0 )
      break;
    v9 = strchr("bcdoxCe:f:n:s:vR", Val);
    if ( v9 == nullptr )
      sub_418164();
    if ( v9 - "bcdoxCe:f:n:s:vR" <= 4 )
      ((void (__noreturn *)(void))loc_416F84)();
    switch ( v17[0] )
    {
      case 'C':
        goto LABEL_3;
      case 'e':
        ((void (__noreturn *)(void))loc_416F84)();
      case 'f':
        v4 = (FILE *)sub_470CF8();
        while ( 1 )
        {
          Block = (void *)sub_470E94();
          if ( Block == nullptr )
            break;
          v6 = *(_BYTE *)sub_460FB8();
          if ( v6 != 0 && v6 != 35 )
            ((void (__noreturn *)(void))loc_416F84)();
          free(Block);
        }
        fclose(v4);
        break;
      default:
        break;
    }
    if ( v17[0] == 110 )
      *(_DWORD *)(v2 + 8) = sub_4708EC();
    if ( v17[0] == 115 )
    {
      *(_DWORD *)v2 = sub_471AE8(0, 0, -1, 0x7FFFFFFF, "b");
      *(_DWORD *)(v2 + 4) = v7;
    }
    if ( v17[0] == 118 )
    {
      *(_BYTE *)(v2 + 12) = 0;
    }
    else if ( v17[0] == 82 )
    {
      v3 = 1;
    }
  }
  if ( *(_DWORD *)(v2 + 16) == 0 )
    ((void (__noreturn *)(void))loc_416F84)();
  v10 = (_DWORD *)(a2 + 4 * dword_473090);
  if ( v3 != 0 )
  {
    v12 = off_4730E8(0);
    if ( *v10 != 0 )
      goto LABEL_45;
    --v10;
    while ( 1 )
    {
      while ( 1 )
      {
        v15 = sub_470E94();
        v16 = (void *)v15;
        if ( v15 == 0 )
          break;
        v13 = (char *)v15;
        while ( 1 )
        {
          while ( (unsigned __int8)(*v13 - 48) <= 9u || (unsigned __int8)((*v13 | 0x20) - 97) <= 5u )
            ++v13;
          while ( 1 )
          {
            v14 = *v13;
            if ( *v13 != 32 )
              break;
            ++v13;
          }
          if ( (unsigned __int8)(v14 - 48) > 9u && (unsigned __int8)((v14 | 0x20) - 97) > 5u
            || sub_4629F4(v13, "%x ", v17) != 1 )
          {
            break;
          }
          sub_46F0B8(v17[0]);
        }
        free(v16);
      }
      fclose(v12);
      if ( v10[1] == 0 )
        sub_42F138(0);
      ++v10;
LABEL_45:
      v12 = (FILE *)sub_470CF8();
    }
  }
  return sub_4170C0(v2, a2 + 4 * dword_473090, a2);
}

