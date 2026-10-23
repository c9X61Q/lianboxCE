// busybox.exe @ 0x467800 size=240

int __cdecl sub_467800(int a1, int a2)
{
  const char **v2; // ebx
  int v3; // ebp
  int v4; // edi
  int v5; // edx
  int v6; // edx
  LPCSTR lpFileNamea; // [esp+0h] [ebp-2Ch]
  LPCSTR lpFileName; // [esp+0h] [ebp-2Ch]
  LONG lDistanceToMovea; // [esp+4h] [ebp-28h]
  LONG lDistanceToMove; // [esp+4h] [ebp-28h]
  int v12; // [esp+Ch] [ebp-20h]
  LARGE_INTEGER v13; // [esp+10h] [ebp-1Ch]
  _DWORD v14[5]; // [esp+18h] [ebp-14h] BYREF

  v12 = sub_435D44(a2, (int)"^cs:", v14) & 1;
  v13.QuadPart = sub_4709D8(lpFileNamea, lDistanceToMovea);
  v2 = (const char **)(a2 + 4 * dword_473090);
  v3 = 0;
  while ( *v2 != nullptr )
  {
    v4 = sub_443508((char *)*v2, v12 == 0 ? 257 : 1, 438);
    if ( v4 >= 0 )
    {
      if ( sub_404860(v4, v13) == -1 )
      {
        sub_417FE4(v6, "%s: truncate", *v2);
        v3 = 1;
      }
      sub_470B50(lpFileName, lDistanceToMove);
    }
    else if ( *_errno() != 2 || v12 == 0 )
    {
      sub_417FE4(v5, "%s: open", *v2);
      v3 = 1;
    }
    ++v2;
  }
  return v3;
}

