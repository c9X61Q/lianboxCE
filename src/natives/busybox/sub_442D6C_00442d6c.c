// busybox.exe @ 0x442d6c size=105

int __cdecl sub_442D6C(char *FileName, int a2)
{
  int result; // eax
  _BYTE v3[104]; // [esp+8h] [ebp-68h] BYREF

  if ( a2 != 0 && (a2 & 0xFFFFFFFE) == 0 || (result = access(FileName, a2 & 0xFFFFFFFE)) >= 0 && (a2 & 1) != 0 )
  {
    result = sub_444C28(FileName, v3);
    if ( result == 0 )
    {
      if ( (v3[16] & 0x40) != 0 )
        return result;
      *_errno() = 13;
    }
    return -1;
  }
  return result;
}

