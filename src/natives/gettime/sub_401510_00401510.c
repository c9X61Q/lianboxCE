// gettime.exe @ 0x401510 size=41

int __cdecl sub_401510(int a1, int a2)
{
  (*(void (__cdecl **)(int, _DWORD, _DWORD))a2)(
    *(_DWORD *)(*(_DWORD *)a1 + 4) + a1,
    *(_DWORD *)(a2 + 8),
    *(_DWORD *)(a2 + 12));
  return a1;
}

