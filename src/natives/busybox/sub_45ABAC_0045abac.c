// busybox.exe @ 0x45abac size=39

int __fastcall sub_45ABAC(int a1, int a2)
{
  char *v2; // eax
  int result; // eax
  char v4; // dl

  v2 = *(char **)(a2 + 4);
  if ( v2 != nullptr )
  {
    result = sub_446FE4(v2);
    v4 = 4;
  }
  else
  {
    result = *(unsigned __int8 *)dword_485FF0;
    v4 = 8;
  }
  byte_473328 = v4;
  return result;
}

