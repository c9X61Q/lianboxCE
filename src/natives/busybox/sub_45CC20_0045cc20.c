// busybox.exe @ 0x45cc20 size=178

int __usercall sub_45CC20@<eax>(char *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  _DWORD *v6; // edi
  size_t v8; // [esp+8h] [ebp-14h]

  v4 = a2;
  if ( sub_416B48(a2, a3, "search") != 0 )
    return 0;
  if ( *a1 != 0 )
  {
    if ( a1 != (char *)&MultiByteStr )
      strcpy((char *)&MultiByteStr, a1);
  }
  else
  {
    if ( (_BYTE)MultiByteStr == 0 )
    {
      sub_4181F8("no previous search string");
      return 0;
    }
    a1 = (char *)&MultiByteStr;
  }
  v8 = strlen(a1);
  v6 = sub_42FF18(v4);
  if ( v6 != nullptr )
  {
    while ( v4 <= a3 )
    {
      if ( sub_42FFC8((int)v6, (unsigned __int8 *)a1, v8, 0) >= 0 )
        return v4;
      ++v4;
      v6 = (_DWORD *)*v6;
    }
    sub_41783C("can't find string \"%s\"", a1);
  }
  return 0;
}

