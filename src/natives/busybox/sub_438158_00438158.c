// busybox.exe @ 0x438158 size=63

int __usercall sub_438158@<eax>(int a1@<eax>, const char *a2@<edx>)
{
  int i; // ebx

  for ( i = *(_DWORD *)(*(_DWORD *)(a1 + 16) + 4 * ((unsigned int)sub_4382D0() % *(_DWORD *)(a1 + 4)));
        i != 0 && strcmp((const char *)(i + 28), a2) != 0;
        i = *(_DWORD *)(i + 24) )
  {
    ;
  }
  return i;
}

