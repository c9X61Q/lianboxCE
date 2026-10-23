// busybox.exe @ 0x43c400 size=128

int __usercall sub_43C400@<eax>(const char *a1@<eax>)
{
  char v2; // dl
  int result; // eax
  char *v4; // ebx
  char *v5; // esi
  int v6; // ecx

  v2 = *a1;
  if ( (unsigned __int8)(*a1 - 48) <= 9u || (unsigned __int8)((v2 | 0x20) - 97) <= 0x19u || (result = 0, v2 == 95) )
  {
    v4 = strchr(a1, 61);
    result = 0;
    if ( v4 != nullptr )
    {
      v5 = (char *)sub_47188C();
      v5[v4 - a1] = 0;
      sub_4683D8();
      sub_437FC0(*(unsigned int **)(dword_486010 - 60), v5, v6);
      sub_45EC9C();
      free(v5);
      return 1;
    }
  }
  return result;
}

