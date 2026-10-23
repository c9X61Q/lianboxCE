// busybox.exe @ 0x44b928 size=163

void __thiscall sub_44B928(void *this)
{
  int v1; // ebx
  int v2; // esi
  int v3; // eax
  int v4; // [esp+0h] [ebp-10h]

  v1 = dword_473374;
  dword_473374 = 0;
  while ( v1 != 0 )
  {
    byte_4735A8 = 0;
    sub_45E8B8(this, 2);
    v2 = *(char *)(v1 + 12);
    if ( **(_BYTE **)(v1 + 4) == 24 )
      sub_44CA70(v4, *(_DWORD *)(v1 + 8));
    else
      sub_44CC6C();
    sub_458414(v2);
    v3 = sub_463A54();
    *(_BYTE *)v3 = 15;
    *(_DWORD *)(v3 + 8) = dword_4735D0;
    *(_DWORD *)(v3 + 12) = dword_473114;
    *(_DWORD *)(*(_DWORD *)(v1 + 4) + 12) = v3;
    v1 = *(_DWORD *)v1;
  }
}

