// busybox.exe @ 0x41cbf8 size=145

int __usercall sub_41CBF8@<eax>(const char *a1@<eax>, int a2@<edx>)
{
  __int16 v4; // ax
  const char *i; // ecx
  __int16 v6; // dx
  int *v7; // ebp
  int j; // ebx

  v4 = 16 * *(unsigned __int8 *)a1;
  for ( i = a1; ; ++i )
  {
    v6 = *(unsigned __int8 *)i;
    if ( (_BYTE)v6 == 0 )
      break;
    v4 += v6;
  }
  v7 = (int *)(dword_4731A4 + 4 * ((v4 & 0x7FFFu) % 0x1F));
  for ( j = *v7; j != 0; j = *(_DWORD *)j )
  {
    if ( strcmp((const char *)(j + 10), a1) == 0 )
      goto LABEL_10;
    v7 = (int *)j;
  }
  if ( a2 != 0 )
  {
    strlen(a1);
    j = sub_4728CC();
    *v7 = j;
    *(_BYTE *)(j + 8) = -1;
    strcpy((char *)(j + 10), a1);
  }
LABEL_10:
  dword_47344C = (int)v7;
  return j;
}

