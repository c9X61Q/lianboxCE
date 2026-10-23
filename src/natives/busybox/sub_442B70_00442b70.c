// busybox.exe @ 0x442b70 size=117

int __userpurge sub_442B70@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  int i; // ebx
  int v8; // edx
  int v9; // ecx
  int result; // eax
  _BYTE v11[8]; // [esp+8h] [ebp-1Ch] BYREF
  void *Block; // [esp+10h] [ebp-14h]

  for ( i = 0; i < a4; ++i )
  {
    v8 = *(_DWORD *)(a2 + 4 * i);
    v9 = *(_DWORD *)(a3 + 4 * i);
    if ( v8 != 0 )
    {
      if ( v9 != 0 )
      {
        result = sub_4542AC(v9 + 4, v8 + 4);
        if ( result != 0 )
          return result;
        *(_DWORD *)(a2 + 4 * i) = sub_453164(v11, a1);
        free(Block);
      }
    }
    else
    {
      *(_DWORD *)(a2 + 4 * i) = v9;
    }
  }
  return 0;
}

