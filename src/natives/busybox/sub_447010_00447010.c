// busybox.exe @ 0x447010 size=145

_DWORD *__usercall sub_447010@<eax>(int a1@<eax>)
{
  int v2; // esi
  _DWORD *i; // edi
  _DWORD *v4; // edx
  int v5; // ebp
  int *v6; // eax
  int v7; // edx
  _DWORD *result; // eax
  unsigned int v9; // ebx
  _DWORD *j; // edx

  v2 = dword_486010;
  for ( i = nullptr; ; i = v4 )
  {
    v4 = *(_DWORD **)(v2 - 24);
    if ( v4 == nullptr )
      break;
    if ( a1 - 1431655765 * ((v4[1] - (int)(v4 + 4)) >> 3) <= *v4 )
      goto LABEL_9;
    *(_DWORD *)(v2 - 24) = v4[3];
  }
  v5 = a1;
  if ( a1 < 64 )
    v5 = 64;
  v6 = (int *)sub_4728CC();
  *(_DWORD *)(v2 - 24) = v6;
  *v6 = v5;
  v6[1] = (int)(v6 + 4);
  v6[2] = (int)i;
  if ( i != nullptr )
    i[3] = v6;
LABEL_9:
  v7 = *(_DWORD *)(v2 - 24);
  result = *(_DWORD **)(v7 + 4);
  v9 = (unsigned int)&result[6 * a1];
  *(_DWORD *)(v7 + 4) = v9;
  for ( j = result; v9 > (unsigned int)j; j += 6 )
  {
    *j = 0;
    j[4] = 0;
  }
  return result;
}

