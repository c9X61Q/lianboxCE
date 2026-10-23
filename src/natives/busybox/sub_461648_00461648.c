// busybox.exe @ 0x461648 size=197

int __cdecl sub_461648(int *a1, int *a2)
{
  int v2; // ecx
  int v3; // esi
  int v4; // edi
  int v5; // ebx
  int result; // eax
  __int64 v7; // rax
  const char *Str2; // ebp
  int v9; // ecx
  const char *Str1; // eax

  v3 = *a1;
  v4 = *a2;
  v5 = dword_486008;
  if ( (dword_486008 & 0x20000000) != 0 )
  {
    result = ((*(_WORD *)(v4 + 18) & 0xF000) == 0x4000) - ((*(_WORD *)(v3 + 18) & 0xF000) == 0x4000);
    if ( result != 0 )
      goto LABEL_13;
  }
  if ( (dword_486008 & 0x80000) != 0 )
  {
    v7 = *(_QWORD *)(v4 + 24) - *(_QWORD *)(v3 + 24);
  }
  else
  {
    if ( (dword_486008 & 0x20000) != 0 )
    {
      LODWORD(v7) = *(_DWORD *)(v4 + 32) - *(_DWORD *)(v3 + 32);
    }
    else
    {
      if ( (dword_486008 & 0x100000) == 0 )
      {
LABEL_8:
        result = strcmp(*(const char **)v3, *(const char **)v4);
        goto LABEL_13;
      }
      Str2 = (const char *)sub_4635B0(v2, 46);
      Str1 = (const char *)sub_4635B0(v9, 46);
      LODWORD(v7) = strcmp(Str1, Str2);
    }
    v7 = (int)v7;
  }
  if ( v7 == 0 )
    goto LABEL_8;
  result = HIDWORD(v7) | 1;
LABEL_13:
  if ( (v5 & 0x200000) != 0 )
    return -result;
  return result;
}

