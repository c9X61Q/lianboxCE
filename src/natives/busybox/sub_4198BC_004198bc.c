// busybox.exe @ 0x4198bc size=203

int __fastcall sub_4198BC(char *a1, int a2, _BYTE *a3, int a4, int *a5)
{
  void *v7; // eax
  void *v8; // ebx
  int v9; // ebp
  int result; // eax
  void *v12; // [esp+10h] [ebp-18h] BYREF
  char v13; // [esp+14h] [ebp-14h]

  v7 = calloc(0x20u, 1u);
  if ( v7 == nullptr )
  {
    *a5 = 12;
    return 0;
  }
  v8 = v7;
  v9 = sub_4192A4(a1, a2, (int)v7, 0);
  if ( v9 != 0 )
  {
    free(v8);
    *a5 = v9;
    return 0;
  }
  while ( *a3 != 0 )
  {
    *((_DWORD *)v8 + (*a3 >> 5)) |= 1 << *a3;
    ++a3;
  }
  if ( a4 != 0 )
    sub_418CB4((int)v8);
  v13 = 3;
  v12 = v8;
  result = sub_4209D0(&v12);
  if ( result == 0 )
  {
    free(v8);
    *a5 = 12;
    return 0;
  }
  return result;
}

