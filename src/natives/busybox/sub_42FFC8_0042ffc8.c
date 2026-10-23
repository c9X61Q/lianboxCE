// busybox.exe @ 0x42ffc8 size=126

int __usercall sub_42FFC8@<eax>(int a1@<eax>, unsigned __int8 *a2@<edx>, size_t a3@<ecx>, int a4)
{
  const void *Buf; // ebp
  int v7; // ebx
  char *v8; // edx
  char *v11; // [esp+10h] [ebp-14h]

  Buf = (const void *)(a1 + a4 + 12);
  v7 = *(_DWORD *)(a1 + 8) - a4 - a3;
  while ( v7 >= 0 )
  {
    v8 = (char *)memchr(Buf, *a2, v7 + 1);
    if ( v8 == nullptr )
      break;
    v11 = v8;
    if ( memcmp(v8, a2, a3) == 0 )
      return (int)&v11[-a1 - 12];
    v7 = v7 - (v11 - (_BYTE *)Buf) - 1;
    Buf = v11 + 1;
  }
  return -1;
}

