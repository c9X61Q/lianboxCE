// busybox.exe @ 0x44ac6c size=174

char *__usercall sub_44AC6C@<eax>(const char *a1@<eax>)
{
  char *v2; // ebp
  char *v3; // eax
  char *v4; // ebx
  char *v5; // esi
  _DWORD *v6; // ebp
  char *result; // eax

  while ( 1 )
  {
    v2 = strchr(a1, 44);
    v3 = strchr(a1, 61);
    v4 = v3;
    if ( v2 == nullptr || v2 >= v3 && v3 != nullptr )
      break;
    *v2 = 0;
    v5 = sub_430970(a1);
    qmemcpy((void *)sub_44611C(), v5, 0x14u);
    *v2 = 44;
    a1 = v2 + 1;
  }
  v6 = (_DWORD *)sub_44611C();
  if ( v4 != nullptr )
    *v4 = 0;
  result = sub_430970(a1);
  qmemcpy(v6, result, 0x14u);
  if ( v4 != nullptr )
  {
    *v4 = 61;
    result = v4 + 1;
    v6[2] = v4 + 1;
    if ( v4[1] == 0 )
      return result;
    result = (char *)strlen(v4 + 1);
    *(_WORD *)v6 = (_WORD)result;
  }
  NumOfElements = 1;
  return result;
}

