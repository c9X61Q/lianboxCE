// busybox.exe @ 0x44ded4 size=240

void __cdecl sub_44DED4(int a1, char *a2)
{
  char *v2; // ebx
  unsigned int v3; // edx
  char v4; // al
  char *v5; // ebp
  FILE *v6; // [esp+4h] [ebp-20h]
  FILE *v7; // [esp+4h] [ebp-20h]
  char Buffer[28]; // [esp+8h] [ebp-1Ch] BYREF

  v2 = a2;
  qmemcpy(Buffer, "   x", 0xBu);
  Buffer[11] = 0;
  while ( &a2[a1] != v2 )
  {
    v3 = (unsigned __int8)*v2;
    v4 = *v2;
    if ( v3 - 32 > 0x5E )
    {
      switch ( *v2 )
      {
        case 0:
          v5 = "  \\0";
          break;
        case 7:
          v5 = "  \\a";
          break;
        case 8:
          v5 = "  \\b";
          break;
        case 9:
          v5 = "  \\t";
          break;
        case 10:
          v5 = "  \\n";
          break;
        case 11:
          v5 = "  \\v";
          break;
        case 12:
          v5 = "  \\f";
          break;
        case 13:
          v5 = "  \\r";
          break;
        default:
          Buffer[6] = ((unsigned __int8)*v2 >> 6) + 48;
          Buffer[7] = ((v3 >> 3) & 7) + 48;
          Buffer[8] = (v4 & 7) + 48;
          v5 = &Buffer[5];
          break;
      }
      v7 = off_4730E8(1);
      sub_46EF20(v5, v7);
    }
    else
    {
      Buffer[3] = *v2;
      v6 = off_4730E8(1);
      sub_46EF20(Buffer, v6);
    }
    ++v2;
  }
}

