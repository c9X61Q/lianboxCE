// busybox.exe @ 0x467984 size=407

int __cdecl sub_467984(int a1, int a2)
{
  int v2; // esi
  const char *v3; // ebp
  const char *v4; // ebx
  char *Block; // edi
  int v6; // edx
  int v7; // eax
  __time32_t v9; // [esp+10h] [ebp-4Ch]
  int v10; // [esp+14h] [ebp-48h]
  __time32_t v11; // [esp+18h] [ebp-44h] BYREF
  int v12; // [esp+1Ch] [ebp-40h]
  __time32_t v13; // [esp+20h] [ebp-3Ch] BYREF
  int v14; // [esp+24h] [ebp-38h]
  struct tm v15; // [esp+28h] [ebp-34h] BYREF

  v2 = sub_435D44(a2, (int)"^is");
  if ( v2 != 0 )
  {
    sub_443A9C("TZ=UTC0");
    tzset();
  }
  v3 = *(const char **)(a2 + 4 * dword_473090);
  if ( v3 == nullptr )
  {
    v3 = "%H:%M:%S";
    if ( v2 == 0 )
      v3 = "%b %d %H:%M:%S";
  }
  v4 = sub_43C630(v3, "%.S");
  if ( v4 != nullptr || (v4 = sub_43C630(v3, "%.s")) != nullptr )
  {
    *((_BYTE *)v4 + 1) = v4[2];
    *((_BYTE *)v4++ + 2) = 0;
  }
  sub_436500(&v11);
  while ( 1 )
  {
    off_4730E8(0);
    Block = (char *)sub_470EE8();
    if ( Block == nullptr )
      break;
    sub_436500(&v13);
    if ( v2 != 0 )
    {
      if ( (v2 & 1) != 0 )
      {
        v10 = v14;
        v9 = v13;
      }
      v6 = v13 - v11;
      v13 -= v11;
      v7 = v14 - v12;
      v14 = v7;
      if ( v7 < 0 )
      {
        v13 = v6 - 1;
        v14 = v7 + 1000000;
      }
      if ( (v2 & 1) != 0 )
      {
        v11 = v9;
        v12 = v10;
      }
    }
    sub_43E8F8(&v13, &v15);
    sub_444C3C((char *)&MultiByteStr, 0x400u, (int)v3, &v15);
    if ( v4 != nullptr )
      sub_46F088("%s.%06u %s", (const char *)&MultiByteStr, v14, Block);
    else
      sub_46F088("%s %s", (const char *)&MultiByteStr, Block);
    free(Block);
  }
  return 0;
}

