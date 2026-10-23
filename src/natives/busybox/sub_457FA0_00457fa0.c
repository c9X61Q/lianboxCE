// busybox.exe @ 0x457fa0 size=263

const char *sub_457FA0()
{
  int v0; // eax
  int v1; // esi
  const char *v2; // ebx
  int v3; // ecx
  _DWORD v5[9]; // [esp+8h] [ebp+0h] BYREF

  memset(v5, 0, sizeof(v5));
  while ( 1 )
  {
    v0 = sub_446AFC("p:u:rt:n:sd:");
    if ( v0 == 0 )
      break;
    switch ( v0 )
    {
      case 'd':
        v5[8] = dword_4734C8;
        break;
      case 'n':
        v5[4] = dword_4734C8;
        break;
      case 'p':
        v5[5] = dword_4734C8;
        break;
      case 'r':
        v5[0] |= 2u;
        break;
      case 's':
        v5[0] |= 1u;
        break;
      case 't':
        v5[6] = dword_4734C8;
        break;
      case 'u':
        v5[7] = dword_4734C8;
        break;
      default:
        continue;
    }
  }
  v5[2] = dword_47310C;
  v5[1] = sub_45EC2C;
  v5[3] = sub_43E9A4("IFS");
  while ( 1 )
  {
    v1 = dword_485FF0;
    ++*(_DWORD *)(dword_485FF0 + 56);
    v2 = (const char *)sub_45FAD8();
    sub_43B8DC();
    if ( v2 != (const char *)1 )
      break;
    if ( *_errno() != 4 )
      return v2;
  }
  if ( v2 == (const char *)2 )
  {
    if ( *(_BYTE *)(v1 + 66) != 0 )
      sub_45309C();
    GenerateConsoleCtrlEvent(0, 0);
    sub_42D338();
  }
  if ( (unsigned int)v2 > 1 )
    sub_415B40(v3, v2);
  return v2;
}

