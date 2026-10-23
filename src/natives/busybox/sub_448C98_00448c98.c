// busybox.exe @ 0x448c98 size=116

int __usercall sub_448C98@<eax>(const char *a1@<eax>, const char *a2@<edx>, const char *a3@<ecx>)
{
  char *v6; // eax
  char *v7; // ebx
  int v8; // ecx
  int v10; // [esp+Ch] [ebp-14h]

  v10 = 0;
  while ( 1 )
  {
    v6 = strchr(a1, 44);
    v7 = v6;
    if ( v6 != nullptr )
      *v6 = 0;
    v8 = sub_439918(a2, a1);
    if ( v8 < 0 )
      sub_41784C("invalid argument '%s' to '%s'", a1, a3);
    v10 |= 1 << v8;
    if ( v7 == nullptr )
      break;
    *v7 = 44;
    a1 = v7 + 1;
  }
  return v10;
}

