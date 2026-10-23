// busybox.exe @ 0x4380f4 size=99

void __usercall sub_4380F4(_DWORD *a1@<eax>, const char *a2@<edx>)
{
  int *i; // ebp
  int v5; // esi

  for ( i = (int *)(a1[4] + 4 * ((unsigned int)sub_4382D0() % a1[1])); ; i = (int *)(v5 + 24) )
  {
    v5 = *i;
    if ( *i == 0 )
      break;
    if ( strcmp((const char *)(v5 + 28), a2) == 0 )
    {
      a1[3] += ~strlen(a2);
      --*a1;
      *i = *(_DWORD *)(v5 + 24);
      free((void *)v5);
      return;
    }
  }
}

