// busybox.exe @ 0x453e04 size=78

char *__cdecl sub_453E04(void *a1, char *a2, int a3)
{
  int v3; // edx
  int v4; // edx
  char *result; // eax

  v3 = dword_485FFC;
  *(_BYTE *)(a3 + 28) = *(_BYTE *)(a3 + 28) & 0x6F | (16 * (HIBYTE(dword_485FFC) & 1)) | 0x80;
  v4 = sub_453610(a3, a1, a2, v3);
  result = nullptr;
  if ( v4 != 0 )
    return &aSuccess[dword_47D620[v4]];
  return result;
}

