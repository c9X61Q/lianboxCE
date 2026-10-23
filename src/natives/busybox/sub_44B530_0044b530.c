// busybox.exe @ 0x44b530 size=222

int *__usercall sub_44B530@<eax>(int a1@<eax>, int *a2@<edx>, int a3@<ecx>, int a4, int a5, _DWORD *a6)
{
  int *v8; // eax
  int *v9; // ebx
  int *v10; // eax
  int *v11; // ecx
  int v14; // [esp+10h] [ebp-14h]

  v14 = *a2;
  v8 = sub_448B44(a3, a2, a4, a5, a6);
  v9 = v8;
  if ( *a6 != 0 && v8 == nullptr )
    return nullptr;
  while ( *(_BYTE *)(a3 + 4) == 10 )
  {
    sub_42F118(a4 | 0x400000, a1);
    if ( (*(_BYTE *)(a3 + 4) & 0xF7) == 2 || *(_BYTE *)(a3 + 4) == 9 && a5 != 0 )
    {
      v11 = nullptr;
    }
    else
    {
      v10 = sub_448B44(a3, a2, a4, a5, a6);
      v11 = v10;
      if ( *a6 != 0 && v10 == nullptr )
        return nullptr;
    }
    v9 = (int *)sub_420A78(v14, v9, v11, 10);
    if ( v9 == nullptr )
    {
      *a6 = 12;
      return v9;
    }
  }
  return v9;
}

