// busybox.exe @ 0x43eaa4 size=244

int *__usercall sub_43EAA4@<eax>(_DWORD *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int *v4; // ebx
  unsigned int v5; // eax
  int v6; // edx
  int v7; // edi
  int v8; // esi
  int *v9; // ecx
  int v10; // eax
  char v11; // cl
  int v13; // [esp+4h] [ebp-1Ch]
  int *v15; // [esp+Ch] [ebp-14h]

  v13 = *(_DWORD *)a2;
  v4 = *(int **)(a3 + 4);
  if ( (*(_BYTE *)(a2 + 28) & 0x10) == 0
    || v4 == nullptr
    || (v5 = *(_DWORD *)(a3 + 20)) <= 0x1F && (v6 = *(_DWORD *)(v13 + 80), _bittest(&v6, v5)) )
  {
    v7 = sub_420A78(v13, nullptr, nullptr, 8);
    v8 = sub_420A78(v13, nullptr, nullptr, 9);
    v9 = (int *)v8;
    if ( v4 != nullptr )
      v9 = (int *)sub_420A78(v13, v4, (int *)v8, 16);
    v15 = v9;
    v4 = (int *)sub_420A78(v13, (int *)v7, v9, 16);
    if ( v15 != nullptr && v8 != 0 && v7 != 0 && v4 != nullptr )
    {
      v10 = *(_DWORD *)(a3 + 20);
      *(_DWORD *)(v8 + 20) = v10;
      *(_DWORD *)(v7 + 20) = v10;
      v11 = *(_BYTE *)(a3 + 26) & 8;
      *(_BYTE *)(v8 + 26) = v11 | *(_BYTE *)(v8 + 26) & 0xF7;
      *(_BYTE *)(v7 + 26) = v11 | *(_BYTE *)(v7 + 26) & 0xF7;
    }
    else
    {
      *a1 = 12;
      return nullptr;
    }
  }
  return v4;
}

