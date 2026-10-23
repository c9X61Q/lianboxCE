// busybox.exe @ 0x4137b0 size=149

int *__usercall sub_4137B0@<eax>(_DWORD *a1@<eax>, const char *a2@<edx>)
{
  int *result; // eax
  const char *Str; // edi
  int v5; // ebx
  int v6; // edx

  result = (int *)(a1[2] | a1[3]);
  if ( result != nullptr )
  {
    Str = a2;
    if ( a2 == nullptr )
      Str = (const char *)&unk_47C0D4;
    strlen(Str);
    v5 = sub_470E78();
    v6 = a1[3];
    *(_DWORD *)v5 = a1[2];
    *(_DWORD *)(v5 + 4) = v6;
    *(_DWORD *)(v5 + 8) = *a1;
    *(_BYTE *)(v5 + 16) = (a1[4] & 0xF000) == 0x4000;
    strcpy((char *)(v5 + 17), Str);
    if ( dword_473394 == 0 )
      dword_473394 = sub_4728CC();
    result = (int *)(dword_473394 + 4 * (a1[2] % 0x137u));
    *(_DWORD *)(v5 + 12) = *result;
    *result = v5;
  }
  return result;
}

