// busybox.exe @ 0x41c274 size=158

int __usercall sub_41C274@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  char v5; // cl
  int i; // eax
  int v7; // edi
  int v8; // ebp
  int v10; // [esp+0h] [ebp-20h]

  v5 = sub_4564EC(*(_DWORD *)(a1 + 72), a3);
  for ( i = 0; *(_DWORD *)(a2 + 8) > i; ++i )
  {
    v7 = *(_DWORD *)(*(_DWORD *)(a2 + 12) + 4 * i);
    v8 = **(_DWORD **)(a1 + 68) + 8 * v7;
    v10 = *(_DWORD *)(v8 + 4) >> 8;
    if ( *(_BYTE *)(v8 + 4) == 2
      && ((v10 & 0x3FF) == 0
       || ((v10 & 4) == 0 || (v5 & 1) != 0)
       && ((v10 & 8) == 0 || (v5 & 1) == 0)
       && ((v10 & 0x20) == 0 || (v5 & 2) != 0)
       && ((v10 & 0x80) == 0 || (v5 & 8) != 0)) )
    {
      return v7;
    }
  }
  return 0;
}

