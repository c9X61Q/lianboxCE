// busybox.exe @ 0x471fb0 size=383

void __cdecl __noreturn sub_471FB0(int a1, int a2)
{
  int v2; // ebx
  char v3; // si
  int v4; // eax
  int v5; // edx
  int v6; // edx
  void *v7; // ecx
  unsigned int i; // edi
  const char *v9; // edx
  int v10; // [esp+0h] [ebp-8Ch]
  int v11; // [esp+1Ch] [ebp-70h] BYREF
  int v12; // [esp+20h] [ebp-6Ch] BYREF
  unsigned int v13; // [esp+24h] [ebp-68h] BYREF
  unsigned int v14; // [esp+28h] [ebp-64h] BYREF
  _BYTE v15[96]; // [esp+2Ch] [ebp-60h] BYREF

  v13 = 2;
  v14 = 0;
  v2 = sub_414210();
  v3 = sub_435D44(a2, (int)"^l:s:apg:+c:+", &v11, &v12, &v13, &v14);
  *(_BYTE *)(v2 + 12) = 0;
  if ( (v3 & 1) != 0 )
  {
    v4 = sub_47195C(0, 0, 0x7FFFFFFF);
    v10 = v5;
    *(_DWORD *)(v2 + 8) = v4;
  }
  if ( (v3 & 2) != 0 )
  {
    *(_DWORD *)v2 = sub_471AA8(0, 0, -1, 0x7FFFFFFF);
    *(_DWORD *)(v2 + 4) = v6;
  }
  if ( (v3 & 8) != 0 )
  {
    if ( v14 == 0 )
      v14 = 30;
    v13 = v14;
    if ( v13 < v14 )
    {
      if ( v13 != 1 )
      {
        v7 = sub_470E78(10 * v14);
        for ( i = 1; v14 >= i; ++i )
        {
          if ( v14 == i || i % v13 != 0 )
            v9 = "/1 \"%02x\"";
          else
            v9 = "/1 \"%02x \"";
          v7 = (void *)sub_463250((int)v7, (int)v9);
        }
        ((void (__cdecl __noreturn *)(int))loc_416F84)(v10);
      }
      sub_462724((int)v15, (int)"%u/1 \"%%02x \"", v14);
    }
    else
    {
      sub_462724((int)v15, (int)"%u/1 \"%%02x\"", v14);
    }
    ((void (__noreturn *)(void))loc_416F84)();
  }
  if ( v14 == 0 )
    v14 = 16;
  ((void (__cdecl __noreturn *)(int))loc_416F84)(v10);
}

