// busybox.exe @ 0x462e0c size=108

int __cdecl sub_462E0C(int a1, int a2)
{
  char (__cdecl *v2)(const char *); // edi
  int v3; // esi
  int i; // ebx
  const char *v5; // eax
  int v6; // eax
  _DWORD v8[4]; // [esp+Ch] [ebp-10h] BYREF

  v8[0] = 0;
  v2 = sub_427574;
  if ( (sub_435D44(a2, (int)"^tLfc:", v8) & 4) == 0 )
    v2 = sub_4274E0;
  v3 = a2 + 4 * dword_473090;
  for ( i = 1; ; i &= v6 )
  {
    v3 += 4;
    v5 = *(const char **)(v3 - 4);
    if ( v5 == nullptr )
      break;
    LOBYTE(v6) = v2(v5);
  }
  return i ^ 1;
}

