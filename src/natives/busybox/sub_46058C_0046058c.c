// busybox.exe @ 0x46058c size=453

int __cdecl sub_46058C(char a1, int a2)
{
  int v2; // ebx
  int v3; // esi
  char **v4; // edi
  int v5; // ebx
  char *v6; // esi
  __int64 v7; // kr00_8
  LONG v8; // edx
  const CHAR *v9; // ecx
  LPCSTR lpFileName; // [esp+0h] [ebp-9Ch]
  LPCSTR lpFileNamea; // [esp+0h] [ebp-9Ch]
  LONG lDistanceToMove; // [esp+4h] [ebp-98h]
  LONG lDistanceToMovea; // [esp+4h] [ebp-98h]
  unsigned int *v15; // [esp+8h] [ebp-94h]
  unsigned int i; // [esp+18h] [ebp-84h]
  char v17; // [esp+24h] [ebp-78h]
  unsigned int v18; // [esp+28h] [ebp-74h] BYREF
  _BYTE v19[40]; // [esp+2Ch] [ebp-70h] BYREF
  __int64 v20; // [esp+54h] [ebp-48h]
  char *v21; // [esp+8Ch] [ebp-10h]

  v21 = &a1;
  v2 = a2;
  v18 = 3;
  v15 = &v18;
  v17 = sub_435D44(a2, (int)"fuzn:+vx");
  v3 = dword_473090;
  sub_4450C8("/dev/zero", 0);
  if ( v18 != 0 )
    sub_4450C8("/dev/urandom", 0);
  v4 = (char **)(v2 + 4 * v3);
  if ( *v4 == nullptr )
    sub_418164();
  while ( 1 )
  {
    v6 = *v4;
    if ( *v4 == nullptr )
      return 0;
    if ( (v17 & 1) == 0 )
      goto LABEL_12;
    v5 = sub_443508(v6, 1, (int)v15);
    if ( v5 < 0 )
    {
      sub_442E6C(v6, 438);
LABEL_12:
      v5 = sub_4450C8(v6, 1);
    }
    if ( sub_44305C(v5, (int)v19) == 0 )
    {
      v7 = v20;
      if ( v20 > 0 )
      {
        for ( i = 0; v18 > i; ++i )
        {
          sub_416F48(v7);
          lDistanceToMove = v8;
          sub_431FE8(v5);
          sub_470E28(0);
          lpFileName = v9;
        }
        if ( (v17 & 4) != 0 )
        {
          lDistanceToMove = sub_416F48(v7);
          sub_431FE8(v5);
        }
        if ( (v17 & 2) != 0 )
        {
          sub_404860(v5, 0);
          sub_470B50(lpFileNamea, lDistanceToMovea);
          sub_471CD8();
        }
        else
        {
          sub_470B50(lpFileName, lDistanceToMove);
        }
      }
    }
    ++v4;
  }
}

