// busybox.exe @ 0x442e6c size=56

int __cdecl sub_442E6C(char *FileName, int a2)
{
  int AccessMode; // ebx
  char v4[44]; // [esp+8h] [ebp-2Ch] BYREF

  AccessMode = a2;
  if ( sub_433748(FileName, v4) == 0 && (v4[0] & 0x10) != 0 )
    LOBYTE(AccessMode) = a2 | 0x92;
  return chmod(FileName, AccessMode);
}

