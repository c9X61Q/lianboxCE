// busybox.exe @ 0x47030c size=106

int __usercall sub_47030C@<eax>(FILE *a1@<eax>, int a2@<edx>)
{
  int i; // esi
  int result; // eax
  char *v6; // edi
  int v7; // [esp+10h] [ebp-1Ch]
  char *Str1; // [esp+14h] [ebp-18h] BYREF
  const char *v9; // [esp+18h] [ebp-14h] BYREF

  for ( i = 0; ; i += v7 )
  {
    result = sub_457CB0(a2 + i, (int *)&Str1, &v9);
    v7 = result;
    v6 = Str1;
    if ( Str1 == nullptr )
      break;
    if ( strcmp(Str1, "Status") != 0 )
      sub_46EEFC(a1, "%s: %s\n", v6, v9);
  }
  return result;
}

