// busybox.exe @ 0x41b308 size=104

_DWORD *__usercall sub_41B308@<eax>(int a1@<eax>)
{
  int v2; // ebx
  _DWORD *v3; // edi
  int v4; // eax
  int v5; // eax
  int v6; // edx
  int v7; // edi
  _DWORD *v8; // edi
  int v9; // eax
  int v11; // [esp+0h] [ebp-Ch]

  v2 = dword_486010;
  v3 = *(_DWORD **)(dword_486010 - 76);
  if ( *v3 == 0 )
  {
    v4 = sub_4460FC();
    v3[1] = v4;
    **(_DWORD **)(v2 - 76) = v4;
  }
  v5 = *(_DWORD *)(v2 - 76);
  v6 = *(_DWORD *)(v2 - 44);
  if ( *(_DWORD *)(v5 + 8) != v6 )
  {
    *(_DWORD *)(v5 + 8) = v6;
    v7 = sub_41B308(v11);
    *(_DWORD *)(v7 + 8) = sub_47188C();
  }
  v8 = *(_DWORD **)(*(_DWORD *)(v2 - 76) + 4);
  *v8 = a1;
  v9 = sub_4460FC();
  v8[4] = v9;
  *(_DWORD *)(*(_DWORD *)(v2 - 76) + 4) = v9;
  return v8;
}

