// numcomp.exe @ 0x4011a0 size=143

int __cdecl sub_4011A0(int a1, int a2, char a3)
{
  int v4; // [esp+0h] [ebp-2Ch]
  char *v5; // [esp+8h] [ebp-24h]
  _BYTE v6[24]; // [esp+10h] [ebp-1Ch] BYREF

  sub_402820(v6);
  v5 = (char *)sub_404290(a2);
  v4 = sub_4042B0(a2);
  while ( v5 != (char *)v4 )
  {
    if ( *v5 != a3 )
      std::string::operator+=(*v5);
    ++v5;
  }
  sub_402650(v6);
  sub_402F60(v6);
  return a1;
}

