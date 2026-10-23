// busybox.exe @ 0x43ee6c size=200

int __usercall sub_43EE6C@<eax>(const char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char *Block; // ebx
  int v5; // edx
  _BYTE v7[16]; // [esp+Ch] [ebp-68h] BYREF
  int v8; // [esp+1Ch] [ebp-58h]

  Block = (char *)sub_41E9A4(a1, (const char *)(a2 + 8), a3);
  if ( sub_443484(Block, v7) != 0 )
  {
    sub_417FE4(v5, "stat %s", Block);
  }
  else if ( *(_BYTE *)(a2 + 8) != 46 || (dword_486008 & 2) != 0 )
  {
    sub_43E1C0(Block);
    if ( (v8 & 0xF000) == 0x4000
      && (dword_486008 & 1) != 0
      && (*(_BYTE *)(a2 + 8) != 46 || *(_BYTE *)(a2 + 9) != 0 && (*(_DWORD *)(a2 + 8) & 0xFFFF00) != 0x2E00) )
    {
      sub_46F088("\n%s:\n", Block);
      sub_43CB78(Block, (void (__fastcall *)(int, int))sub_43EE6C, 0);
      sub_418130(10);
    }
  }
  free(Block);
  return 0;
}

