// busybox.exe @ 0x468004 size=272

void __cdecl __noreturn sub_468004(int a1, int a2)
{
  int v2; // eax
  unsigned int v3; // ebx
  const char *Source; // edi
  unsigned __int16 *v5; // edi
  const char *v6; // edx
  char Destination[260]; // [esp+Eh] [ebp-1DEh] BYREF
  char Buffer[65]; // [esp+112h] [ebp-DAh] BYREF
  char v9[65]; // [esp+153h] [ebp-99h] BYREF
  char v10[65]; // [esp+194h] [ebp-58h] BYREF
  char v11[11]; // [esp+1D5h] [ebp-17h] BYREF

  if ( *dword_485AD0 == 117 )
  {
    v2 = sub_435D60(a2, (int)"snrvmpioa", (int)"all");
    if ( *(_DWORD *)(a2 + 4 * dword_473090) != 0 )
      sub_418164();
    v3 = 255;
    Source = &byte_47A7FC;
    if ( (v2 & 0x100) != 0 )
    {
LABEL_9:
      sub_467EC8(Destination);
      if ( *dword_485AD0 == 97 )
      {
        sub_46F108(Buffer);
      }
      else
      {
        strcpy(v9, Source);
        strcpy(v10, Source);
        strcpy(v11, "MS/Windows");
        v5 = (unsigned __int16 *)&unk_484828;
        v6 = "%s";
        do
        {
          if ( (v3 & 1) != 0 && Destination[*v5] != 0 )
          {
            sub_46F088(v6, &Destination[*v5]);
            v6 = " %s";
          }
          ++v5;
          v3 >>= 1;
        }
        while ( v3 != 0 );
        sub_418130(10);
      }
      sub_42F138(0);
    }
    v3 = v2;
    if ( v2 == 0 )
      v3 = 1;
  }
  else
  {
    v3 = 16;
  }
  Source = "unknown";
  goto LABEL_9;
}

