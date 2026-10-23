// busybox.exe @ 0x438b88 size=111

int __fastcall sub_438B88(int a1, int a2)
{
  int v2; // eax
  char v3; // bp
  _BYTE v5[64]; // [esp+0h] [ebp-90h] BYREF
  _BYTE v6[80]; // [esp+40h] [ebp-50h] BYREF

  v2 = 0;
  do
  {
    v3 = *(_BYTE *)(a2 + v2);
    v5[v2] = v3 ^ 0x36;
    v6[v2++] = v3 ^ 0x5C;
  }
  while ( a1 != v2 );
  do
  {
    v5[v2] = 54;
    v6[v2++] = 92;
  }
  while ( v2 != 64 );
  sub_45F0AC();
  sub_45F0AC();
  sub_442554(64, v5);
  return sub_442554(64, v6);
}

