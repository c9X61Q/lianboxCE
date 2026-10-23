// busybox.exe @ 0x45b550 size=126

u_long __usercall sub_45B550@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  _DWORD *v3; // eax
  u_long v4; // ebx
  int v5; // eax
  int i; // edi
  _DWORD Key[4]; // [esp+14h] [ebp-10h] BYREF

  Key[0] = a1;
  v3 = bsearch(
         Key,
         (const void *)*(&MultiByteStr + 1),
         unk_485BE8,
         0x10u,
         (_CoreCrtNonSecureSearchSortCompareFunction)sub_418E5C);
  v4 = (u_long)v3;
  if ( v3 != nullptr )
  {
    if ( v3[3] > a2 && ((unsigned int)((v5 = v3[1]) - 8) <= 1 || v5 == 6) )
    {
      v4 = MultiByteStr + *(_DWORD *)(v4 + 8);
      for ( i = 0; i < (int)a2; ++i )
        v4 += strlen((const char *)v4) + 1;
    }
    else
    {
      return 0;
    }
  }
  return v4;
}

