// busybox.exe @ 0x435b88 size=328

int __cdecl sub_435B88(int a1)
{
  int i; // ecx
  char v2; // cl
  char Source; // [esp+20h] [ebp-114h] BYREF
  char Str1[275]; // [esp+21h] [ebp-113h] BYREF

  *(_DWORD *)(a1 + 8) = a1 + 32;
  *(_DWORD *)(a1 + 12) = a1 + 292;
  *(_DWORD *)(a1 + 16) = a1 + 296;
  *(_DWORD *)(a1 + 20) = a1 + 396;
  *(_DWORD *)(a1 + 24) = 0;
  *(_DWORD *)(a1 + 28) = 0;
  do
  {
    for ( i = *(_DWORD *)(a1 + 4) + 1; ; ++i )
    {
      if ( i > 25 )
      {
        *(_DWORD *)(a1 + 4) = i;
        return 0;
      }
      if ( ((1 << i) & *(_DWORD *)a1) != 0 )
        break;
    }
    *(_DWORD *)(a1 + 4) = i;
    v2 = i + 65;
    *(_BYTE *)(a1 + 32) = v2;
    *(_WORD *)(a1 + 33) = 58;
    *(_BYTE *)(a1 + 292) = v2;
    *(_DWORD *)(a1 + 293) = 12090;
    *(_BYTE *)(a1 + 396) = 0;
  }
  while ( GetDriveTypeA((LPCSTR)(a1 + 292)) - 2 > 3
       || !GetVolumeInformationA((LPCSTR)(a1 + 292), nullptr, 0, nullptr, nullptr, nullptr, (LPSTR)(a1 + 296), 0x64u) );
  if ( sub_459000((char *)(a1 + 292), &Source) != 0 )
  {
    if ( (unsigned __int8)((Source | 0x20) - 97) <= 0x19u && strcmp(Str1, ":/") == 0 )
      Str1[1] = 0;
    strcpy((char *)(a1 + 32), &Source);
  }
  return a1 + 8;
}

