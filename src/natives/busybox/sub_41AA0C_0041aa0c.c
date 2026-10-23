// busybox.exe @ 0x41aa0c size=111

int __cdecl sub_41AA0C(_DWORD *a1, _DWORD *a2)
{
  int v2; // eax
  int v3; // esi
  int v4; // eax

  if ( *((_BYTE *)a2 + 24) == 16 )
  {
    v2 = a2[1];
    a2[3] = *(_DWORD *)(v2 + 12);
    a2[7] = *(_DWORD *)(v2 + 28);
    return 0;
  }
  else
  {
    a2[3] = a2;
    v4 = sub_453E54(a2[6], a2[5]);
    a2[7] = v4;
    v3 = 12;
    if ( v4 != -1 )
    {
      v3 = 0;
      if ( *((_BYTE *)a2 + 24) == 12 )
        *(_DWORD *)(*a1 + 8 * v4 + 4) = ((a2[5] & 0x3FF) << 8) | *(_DWORD *)(*a1 + 8 * v4 + 4) & 0xFFFC00FF;
    }
  }
  return v3;
}

