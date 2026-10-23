// busybox.exe @ 0x46fbac size=229

int __fastcall sub_46FBAC(char *Str, char a2, int a3)
{
  signed int v4; // edi
  int v5; // ecx
  unsigned int v6; // edx
  char Destination[524]; // [esp+Ch] [ebp+0h] BYREF

  memset(Destination, 0, 0x200u);
  Destination[156] = a2;
  strcpy(Destination, "././@LongLink");
  strcpy(&Destination[100], "00000000000000000000000000000000000000000000000");
  Destination[107] = 0;
  Destination[115] = 0;
  Destination[123] = 0;
  v4 = a3 + strlen(Str) + 1;
  sub_4528E0(&Destination[124], 0xCu, v4);
  sub_41C6C4(v5, (int)Destination);
  sub_471D00(v4 - 2 * a3, Str);
  sub_471D00(2 * a3, "/");
  v6 = -v4 & 0x1FF;
  memset(Destination, 0, v6);
  return sub_471D00(v6, Destination);
}

