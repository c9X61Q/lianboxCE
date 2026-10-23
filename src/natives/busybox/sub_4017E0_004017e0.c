// busybox.exe @ 0x4017e0 size=343

_DWORD *__usercall sub_4017E0@<eax>(const void *a1@<eax>)
{
  int v2; // esi
  int v3; // ecx
  _DWORD *result; // eax
  int v5; // edi
  int v6; // ebx
  _DWORD *v7; // eax
  const void *lpAddress; // eax
  DWORD v9; // eax
  SIZE_T RegionSize; // ecx
  PVOID BaseAddress; // edx
  DWORD *lpflOldProtect; // ebx
  DWORD LastError; // eax
  struct _MEMORY_BASIC_INFORMATION Buffer; // [esp+14h] [ebp-28h] BYREF

  v2 = dword_4859EC;
  if ( dword_4859EC <= 0 )
  {
    v2 = 0;
LABEL_6:
    v5 = sub_402170(a1);
    if ( v5 == 0 )
      sub_401780("Address %p has no image-section", a1);
    v6 = 20 * v2;
    v7 = (_DWORD *)(20 * v2 + dword_4859F0);
    v7[4] = v5;
    *v7 = 0;
    lpAddress = (const void *)(*(_DWORD *)(v5 + 12) + sub_402280());
    *(_DWORD *)(dword_4859F0 + 20 * v2 + 12) = lpAddress;
    if ( VirtualQuery(lpAddress, &Buffer, 0x1Cu) == 0 )
      sub_401780(
        "  VirtualQuery failed for %d bytes at address %p",
        *(_DWORD *)(v5 + 8),
        *(const void **)(dword_4859F0 + v6 + 12));
    result = (_DWORD *)Buffer.Protect;
    if ( ((Buffer.Protect - 64) & 0xFFFFFFBF) != 0 && ((Buffer.Protect - 4) & 0xFFFFFFFB) != 0 )
    {
      v9 = 4;
      RegionSize = Buffer.RegionSize;
      if ( Buffer.Protect != 2 )
        v9 = 64;
      BaseAddress = Buffer.BaseAddress;
      lpflOldProtect = (DWORD *)(dword_4859F0 + v6);
      lpflOldProtect[2] = Buffer.RegionSize;
      lpflOldProtect[1] = (DWORD)BaseAddress;
      result = (_DWORD *)VirtualProtect(BaseAddress, RegionSize, v9, lpflOldProtect);
      if ( result == nullptr )
      {
        LastError = GetLastError();
        sub_401780("  VirtualProtect failed with code 0x%x", LastError);
      }
    }
    ++dword_4859EC;
  }
  else
  {
    v3 = 0;
    result = (_DWORD *)(dword_4859F0 + 12);
    while ( *result > (unsigned int)a1 || (unsigned int)a1 >= *(_DWORD *)(result[1] + 8) + *result )
    {
      ++v3;
      result += 5;
      if ( v3 == dword_4859EC )
        goto LABEL_6;
    }
  }
  return result;
}

