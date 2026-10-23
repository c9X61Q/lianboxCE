// busybox.exe @ 0x463590 size=29

size_t __usercall sub_463590@<eax>(const char *Str@<eax>, unsigned __int8 a2@<dl>)
{
  size_t result; // eax

  result = strlen(Str);
  *(_WORD *)&Str[result] = a2;
  return result;
}

