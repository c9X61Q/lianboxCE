// busybox.exe @ 0x415b64 size=211

int __usercall sub_415B64@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v3; // esi
  const char *v4; // edi
  FILE *(__cdecl *v5)(int); // ebx
  FILE *v6; // eax
  const char *v7; // edi
  FILE *v8; // eax
  int v9; // esi
  FILE *v10; // eax
  FILE *v11; // eax

  v3 = dword_485FF0;
  v4 = *(const char **)(dword_485FF0 + 44);
  v5 = off_4730E8;
  v6 = off_4730E8(2);
  sub_46EEFC(v6, "%s: ", v4);
  v7 = *(const char **)(v3 + 48);
  if ( v7 != nullptr )
  {
    if ( strcmp(*(const char **)(v3 + 44), *(const char **)(v3 + 48)) != 0 )
    {
      v8 = v5(2);
      sub_46EEFC(v8, "%s: ", v7);
    }
    if ( *(_BYTE *)(v3 + 66) == 0 || *((int *)off_473358 + 2) > 0 )
    {
      v9 = *(_DWORD *)(v3 + 20);
      v10 = v5(2);
      sub_46EEFC(v10, "line %d: ", v9);
    }
  }
  v11 = v5(2);
  sub_46F1AC(v11, a1, a2);
  v5(2);
  return sub_446194();
}

