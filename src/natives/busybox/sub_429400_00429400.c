// busybox.exe @ 0x429400 size=144

int __usercall sub_429400@<eax>(int *a1@<eax>, int a2@<edx>, unsigned __int16 a3@<cx>)
{
  int result; // eax
  int v7; // ebp
  int v8; // [esp+0h] [ebp-18h]
  unsigned int v9; // [esp+4h] [ebp-14h]

  result = sub_453E54(*(_DWORD *)(*a1 + 8 * a2 + 4), *(_DWORD *)(*a1 + 8 * a2));
  if ( result != -1 )
  {
    v8 = *a1;
    v7 = *a1 + 8 * result;
    v9 = *(_DWORD *)(v7 + 4) & 0xFFFC00FF | ((a3 & 0x3FF) << 8);
    *(_DWORD *)(v7 + 4) = v9;
    *(_DWORD *)(v7 + 4) = (((*(_WORD *)(v8 + 8 * a2 + 5) | a3) & 0x3FF) << 8) | 0x40000 | v9 & 0xFFF800FF;
    *(_DWORD *)(a1[4] + 4 * result) = a2;
  }
  return result;
}

