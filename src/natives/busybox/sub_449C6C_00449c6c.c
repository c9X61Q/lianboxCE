// busybox.exe @ 0x449c6c size=216

double __usercall sub_449C6C@<st0>(const char *Str@<eax>)
{
  int v2; // ecx
  char *v3; // ebx
  int v4; // ecx
  double result; // st7
  char v6; // [esp+8h] [ebp-24h]
  double v7; // [esp+10h] [ebp-1Ch]
  char v8; // [esp+1Bh] [ebp-11h]
  _BYTE *v9; // [esp+1Ch] [ebp-10h] BYREF

  if ( strchr(Str, 46) == nullptr )
    return (double)(unsigned int)sub_47096C(v2, &unk_47F9C0);
  v3 = (char *)&Str[strspn(Str, "0123456789.")];
  v6 = *v3;
  *v3 = 0;
  *_errno() = 0;
  v7 = sub_402B30((int)Str, (int)&v9);
  if ( *_errno() != 0 || *v9 != 0 )
    sub_418164();
  *v3 = v6;
  LOBYTE(v4) = *(v3 - 1);
  v8 = v4;
  *(v3 - 1) = 49;
  result = (double)(unsigned int)sub_47096C(v4, &unk_47F9C0) * v7;
  *(v3 - 1) = v8;
  return result;
}

