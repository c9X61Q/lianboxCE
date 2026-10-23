// busybox.exe @ 0x462320 size=171

void sub_462320()
{
  int v0; // ebx
  int v1; // ecx
  int v2; // ecx
  const char *v3; // eax
  int v4; // esi
  int v5; // ecx
  int i; // edi
  int v7; // eax
  int v8; // [esp+Ch] [ebp-14h]
  int v9[4]; // [esp+10h] [ebp-10h] BYREF

  v0 = dword_486010;
  if ( *(_BYTE *)(dword_486010 - 8) == 0 )
  {
    *(_BYTE *)(dword_486010 - 8) = 1;
    free(*(void **)(v0 + 92));
    sub_431F88(0, v1);
    v3 = (const char *)sub_436704(*(_DWORD *)(v0 + 52), v2);
    v4 = sub_4166CC(v3, (int *)(v0 + 284), (char **)(v0 + 92));
    sub_431F88(v4, v5);
    v9[0] = *(_DWORD *)(v0 + 92);
    for ( i = 0; i < v4; ++i )
    {
      v8 = *(_DWORD *)(v0 - 28) + 24 * i;
      *(_DWORD *)(v8 + 16) = sub_446BC0(v9);
      *(_DWORD *)(*(_DWORD *)(v0 - 28) + 24 * i) |= 0x5200u;
    }
    sub_41CBC4(*(_DWORD *)(v0 + 80));
    v7 = *(_DWORD *)(v0 + 80);
    *(_DWORD *)v7 = 1025;
    *(double *)(v7 + 8) = (double)*(int *)(v0 - 36);
  }
}

