// busybox.exe @ 0x437140 size=156

void *__usercall sub_437140@<eax>(int a1@<eax>, int a2)
{
  int v2; // ebx
  unsigned int v3; // ecx
  unsigned int v4; // ebp
  unsigned int v5; // eax
  const void *v6; // esi
  int v7; // esi
  _DWORD *v8; // eax
  void *result; // eax
  unsigned int v10; // [esp+4h] [ebp-14h]

  v2 = dword_485FF4;
  v3 = *(_DWORD *)(dword_485FF4 + 12);
  v4 = 2 * v3;
  if ( v3 > 2 * v3 )
    sub_415B40(v3, "out of memory");
  LOBYTE(a1) = a1 | 0x80;
  v5 = (a1 + 7) & 0xFFFFFFF8;
  if ( v4 < v5 )
    v4 += v5;
  v6 = *(const void **)(dword_485FF4 + 4);
  if ( v6 != (const void *)(*(_DWORD *)dword_485FF4 + 4) || *(_DWORD *)dword_485FF4 == dword_485FF4 + 16 )
  {
    v10 = *(_DWORD *)(dword_485FF4 + 12);
    result = (void *)sub_462C74();
    qmemcpy(result, v6, v10);
    *(_DWORD *)(v2 + 4) = result;
    *(_DWORD *)(v2 + 12) += v4;
  }
  else
  {
    ++*(_DWORD *)(dword_485FF0 + 56);
    v7 = **(_DWORD **)v2;
    v8 = (_DWORD *)sub_471600(v3, v4 + 4);
    *v8 = v7;
    *(_DWORD *)v2 = v8++;
    *(_DWORD *)(v2 + 4) = v8;
    *(_DWORD *)(v2 + 12) = v4;
    *(_DWORD *)(v2 + 8) = (char *)v8 + v4;
    return (void *)sub_43B8DC(a2);
  }
  return result;
}

