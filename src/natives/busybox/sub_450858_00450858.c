// busybox.exe @ 0x450858 size=173

char *__usercall sub_450858@<eax>(char *a1@<ecx>, int a2@<eax>)
{
  int i; // esi
  void *Block; // eax
  char *v6; // edi
  char *v7; // esi
  int v8; // eax
  int j; // edi

  for ( i = 0; MultiByteStr != 0; i += 4 )
  {
    Block = *(void **)(MultiByteStr + i);
    if ( Block == nullptr )
      break;
    if ( *(void **)(*(&MultiByteStr + 1) + i) != Block )
      free(Block);
  }
  v6 = &a1[a2];
  v7 = a1;
  while ( 1 )
  {
    v8 = getchar();
    if ( v8 == -1 || (unsigned __int8)qword_485BEC == v8 )
      break;
    *v7 = v8;
    if ( v8 == 0 )
      goto LABEL_13;
    if ( v6 == ++v7 )
      goto LABEL_21;
  }
  if ( v7 != a1 )
  {
    *v7 = 0;
LABEL_13:
    for ( j = 0; *(_DWORD *)(*(&MultiByteStr + 1) + j) != 0; j += 4 )
    {
      if ( sub_41F808(*(const char **)(*(&MultiByteStr + 1) + j), (const char *)unk_485BE8) != 0 )
        sub_471458((char *)unk_485BE8, a1);
      sub_463214();
    }
  }
  v7 = a1;
LABEL_21:
  *v7 = 0;
  return a1;
}

