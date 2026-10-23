// busybox.exe @ 0x4683d8 size=26

int __usercall sub_4683D8@<eax>(int a1@<eax>)
{
  char *v1; // ebx
  char v2; // al
  int v4; // [esp+0h] [ebp-8h] BYREF

  v1 = (char *)a1;
  v4 = a1;
  while ( 1 )
  {
    v2 = sub_446AC8(&v4);
    *v1 = v2;
    if ( v2 == 0 )
      break;
    ++v1;
  }
  return v4;
}

