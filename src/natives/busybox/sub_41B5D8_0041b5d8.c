// busybox.exe @ 0x41b5d8 size=82

int __usercall sub_41B5D8@<eax>(const char *a1@<eax>)
{
  int v2; // esi
  char *v3; // eax

  v2 = 0;
  while ( *a1 != 37 || sub_44DBB0(a1 + 1, "builtin") == 0 )
  {
    v3 = strchr(a1, 59);
    if ( v3 == nullptr )
    {
      v2 = -1;
      break;
    }
    ++v2;
    a1 = v3 + 1;
  }
  dword_473194 = v2;
  return sub_41CA98();
}

