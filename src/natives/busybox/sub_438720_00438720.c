// busybox.exe @ 0x438720 size=108

int __usercall sub_438720@<eax>(int a1@<eax>)
{
  char *v2; // ebx
  char *v3; // eax

  v2 = sub_417DC8(*(_WORD *)(a1 + 24));
  v3 = ctime((const __time32_t *const)(a1 + 28));
  v3[16] = 32;
  *(_DWORD *)(v3 + 17) = *((_DWORD *)v3 + 5);
  v3[21] = 0;
  return sub_46F088(
           "%s %u/%u%7llu %s %s\n",
           v2 + 1,
           *(_DWORD *)(a1 + 16),
           *(_DWORD *)(a1 + 20),
           *(_QWORD *)(a1 + 8),
           v3 + 4,
           *(const char **)a1);
}

