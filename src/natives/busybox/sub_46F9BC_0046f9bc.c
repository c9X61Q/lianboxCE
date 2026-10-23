// busybox.exe @ 0x46f9bc size=493

int __userpurge sub_46F9BC@<eax>(char *a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>, int a4)
{
  const char *v6; // eax
  const char *Str; // edi
  _DWORD *i; // eax
  int v9; // eax
  int v10; // ecx
  __int64 v11; // rax
  _DWORD *j; // edx
  _BYTE *v14; // eax
  int v15; // eax
  const char *k; // ebp
  int v17; // ebp
  unsigned int v18; // edx
  _DWORD *v20; // [esp+10h] [ebp-14h]
  _DWORD *v21; // [esp+10h] [ebp-14h]

  v6 = sub_4638F8(a1);
  if ( *v6 == 0 )
    return 1;
  Str = v6;
  a3[4] = 0;
  if ( (*(_DWORD *)(a2 + 16) & 0xF000) != 0x4000 && *(int *)(a2 + 20) > 1 )
  {
    for ( i = (_DWORD *)a3[3];
          i != nullptr && (*(_DWORD *)(a2 + 12) != i[3] || *(_DWORD *)(a2 + 8) != i[2] || *(_DWORD *)a2 != i[1]);
          i = (_DWORD *)*i )
    {
      ;
    }
    a3[4] = i;
    if ( i == nullptr )
    {
      strlen(Str);
      v9 = sub_470E78();
      *(_DWORD *)v9 = a3[3];
      a3[3] = v9;
      *(_DWORD *)(v9 + 4) = *(_DWORD *)a2;
      v10 = *(_DWORD *)(a2 + 12);
      *(_DWORD *)(v9 + 8) = *(_DWORD *)(a2 + 8);
      *(_DWORD *)(v9 + 12) = v10;
      strcpy((char *)(v9 + 16), Str);
    }
  }
  if ( a3[6] == *(_DWORD *)a2 )
  {
    HIDWORD(v11) = *(_DWORD *)(a2 + 8);
    LODWORD(v11) = *(_DWORD *)(a2 + 12);
    if ( v11 == __PAIR64__(a3[8], a3[9]) && v11 != 0 )
    {
      sub_41783C("%s: file is the archive; skipping", a1);
      return 1;
    }
  }
  for ( j = (_DWORD *)a3[2]; j != nullptr; j = (_DWORD *)*j )
  {
    v14 = (_BYTE *)j[1];
    if ( *v14 == 47 )
    {
      v20 = j;
      v15 = sub_4312E8((int)v14, (int)Str, 9);
      j = v20;
      if ( v15 == 0 )
        return 2;
    }
    else
    {
      for ( k = Str; *k != 0; ++k )
      {
        if ( (Str == k || *(k - 1) == 47) && *k != 47 )
        {
          v21 = j;
          if ( sub_4312E8(j[1], (int)k, 9) == 0 )
            return 2;
          j = v21;
        }
      }
    }
  }
  if ( a3[4] != 0 || (*(_DWORD *)(a2 + 16) & 0xF000) != 0x8000 )
  {
    v17 = -1;
  }
  else
  {
    v17 = sub_447A60(a1, 0);
    if ( v17 < 0 )
      return 0;
  }
  if ( sub_46FD8C(a2) != 0 )
  {
    if ( v17 != -1 )
    {
      sub_416EDC(*(_QWORD *)(a2 + 40));
      sub_442EA4(v17);
      v18 = -*(_DWORD *)(a2 + 40) & 0x1FF;
      memset(&MultiByteStr, 0, v18);
      sub_471D00(v18, &MultiByteStr);
    }
    return 1;
  }
  return 0;
}

