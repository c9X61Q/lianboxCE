// busybox.exe @ 0x43572c size=190

BOOL __usercall sub_43572C@<eax>(int a1@<eax>, int *a2@<edx>, int *a3@<ecx>)
{
  BOOL v5; // edi
  unsigned __int16 v6; // bp
  const char *String; // eax
  int v8; // eax
  unsigned __int16 v9; // bx
  const char *v10; // eax
  int v11; // eax
  int v13; // [esp+Ch] [ebp-18h] BYREF

  v13 = 0;
  v5 = true;
  if ( sub_43C0D4(a1, 21523, &v13) == 0 )
    v5 = (_WORD)v13 == 0;
  if ( a3 != nullptr )
  {
    v6 = v13;
    String = (const char *)sub_44328C("LINES");
    if ( String != nullptr )
    {
      v8 = atoi(String);
      v5 = false;
    }
    else
    {
      v8 = v6;
    }
    if ( (unsigned int)(v8 - 2) > 0x752D )
      v8 = 24;
    *a3 = v8;
  }
  if ( a2 != nullptr )
  {
    v9 = HIWORD(v13);
    v10 = (const char *)sub_44328C("COLUMNS");
    if ( v10 != nullptr )
    {
      v11 = atoi(v10);
      v5 = false;
    }
    else
    {
      v11 = v9;
    }
    if ( (unsigned int)(v11 - 2) > 0x752D )
      v11 = 80;
    *a2 = v11;
  }
  return v5;
}

