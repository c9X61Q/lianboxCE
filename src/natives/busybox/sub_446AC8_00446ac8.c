// busybox.exe @ 0x446ac8 size=49

char __usercall sub_446AC8@<al>(int *a1@<eax>)
{
  char *v2; // esi
  int v3; // edi
  char result; // al

  v2 = (char *)*a1;
  v3 = *a1 + 1;
  *a1 = v3;
  result = *v2;
  if ( *v2 == 92 )
  {
    result = sub_418050((_BYTE **)a1);
    if ( result == 92 && v3 == *a1 )
    {
      result = v2[1];
      if ( result != 0 )
        *a1 = (int)(v2 + 2);
    }
  }
  return result;
}

