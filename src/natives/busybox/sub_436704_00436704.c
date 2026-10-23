// busybox.exe @ 0x436704 size=110

void *__usercall sub_436704@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v3; // esi
  const char *v4; // eax
  void *result; // eax
  double v6; // [esp+Ch] [ebp-10h]

  if ( (*(_DWORD *)a1 & 0x101) == 1 )
  {
    v6 = *(double *)(a1 + 8);
    v3 = dword_486010;
    v4 = (const char *)sub_436704(a2);
    sub_43118C(*(_DWORD *)(v3 - 16), 240, v4, v6, 1);
    *(_DWORD *)(a1 + 16) = sub_47188C();
    *(_DWORD *)a1 |= 0x100u;
  }
  result = *(void **)(a1 + 16);
  if ( result == nullptr )
    return &unk_47A9F0;
  return result;
}

