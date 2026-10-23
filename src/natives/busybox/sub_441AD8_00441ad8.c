// busybox.exe @ 0x441ad8 size=121

_DWORD *__usercall sub_441AD8@<eax>(const char *Str@<eax>, int *a2@<edx>, _DWORD *a3@<ecx>, unsigned int a4)
{
  int i; // ebx
  unsigned int v8; // [esp+4h] [ebp-1Ch]
  signed int v9; // [esp+8h] [ebp-18h]

  v8 = *(unsigned __int8 *)Str;
  v9 = strlen(Str);
  for ( i = 1; i < v9; ++i )
    v8 += ((unsigned __int8)Str[i] + (unsigned __int8)Str[i - 1]) << (i * (unsigned __int8)Str[i] % 24);
  *a2 = v8 % a4;
  *a3 = v8 % (a4 - 1) + 1;
  return a3;
}

