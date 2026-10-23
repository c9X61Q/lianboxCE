// busybox.exe @ 0x430a5c size=125

int __usercall sub_430A5C@<eax>(const char *a1@<eax>)
{
  int v1; // ebx
  int v2; // edi
  int v3; // esi
  int v4; // ebp

  v1 = sub_4728CC();
  v2 = 0;
  while ( 1 )
  {
    v3 = sub_450908();
    v4 = 4 * v2;
    if ( v3 == 0 )
      break;
    if ( strncmp((const char *)(v3 + 72), a1, 0xFu) == 0 )
    {
      v1 = sub_47168C(v2++, 1026);
      *(_DWORD *)(v1 + v4) = *(_DWORD *)(v3 + 36);
    }
  }
  *(_DWORD *)(v1 + 4 * v2) = 0;
  return v1;
}

