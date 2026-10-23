// busybox.exe @ 0x467b1c size=216

int __cdecl sub_467B1C(int a1, int a2)
{
  char **v2; // ebx
  int v3; // esi
  int v4; // edi
  const char *i; // edx
  char v6; // al
  _WORD v8[10]; // [esp+Ch] [ebp-14h] BYREF

  v2 = (char **)a2;
  if ( sub_43C0D4(0, 21523, (int)v8) != 0 && sub_43C0D4(1, 21523, (int)v8) != 0 && sub_43C0D4(2, 21523, (int)v8) != 0 )
  {
    v4 = 24;
    v3 = 80;
  }
  else
  {
    v3 = v8[1];
    v4 = v8[0];
  }
  if ( *(_DWORD *)(a2 + 4) != 0 )
  {
    for ( i = "%u %u" + 3; *++v2 != nullptr; i = "%u %u" + 2 )
    {
      v6 = **v2;
      if ( v6 == 119 )
      {
        sub_46F088(i, v3);
      }
      else if ( v6 == 104 )
      {
        sub_46F088(i, v4);
      }
    }
  }
  else
  {
    sub_46F088("%u %u", v3, v4);
  }
  sub_418130(10);
  return 0;
}

