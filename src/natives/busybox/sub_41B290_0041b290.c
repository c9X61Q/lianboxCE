// busybox.exe @ 0x41b290 size=119

int __usercall sub_41B290@<eax>(int a1@<eax>)
{
  int v2; // ebx
  int v3; // ebp
  int v4; // esi
  int v5; // eax
  int v6; // eax
  int v8; // [esp+0h] [ebp-14h]
  int v9; // [esp+0h] [ebp-14h]

  v2 = dword_486010;
  v3 = *(_DWORD *)(dword_486010 - 72);
  v4 = sub_41B308(*(_DWORD *)(dword_486010 - 68));
  *(_DWORD *)(v2 - 68) = sub_4460FC();
  *(_DWORD *)(v2 - 72) = sub_4460FC();
  sub_41B000();
  v5 = sub_41B308(v8);
  *(_DWORD *)(v5 + 8) = a1;
  *(_DWORD *)(v5 + 16) = v4;
  *(_DWORD *)(*(_DWORD *)(v2 - 68) + 16) = v5;
  v6 = *(_DWORD *)(*(_DWORD *)(v2 - 76) + 4);
  *(_DWORD *)(v4 + 12) = v6;
  *(_DWORD *)(*(_DWORD *)(v2 - 72) + 16) = v6;
  *(_DWORD *)(v2 - 68) = v9;
  *(_DWORD *)(v2 - 72) = v3;
  return v4;
}

