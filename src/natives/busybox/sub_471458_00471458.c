// busybox.exe @ 0x471458 size=146

char *__userpurge sub_471458@<eax>(char *SubStr@<ecx>, const char *a2@<eax>, int a3@<edx>, char *Str)
{
  size_t v7; // eax
  char *v8; // ebp
  char *v9; // eax
  char *v10; // edi
  size_t v12; // [esp+8h] [ebp-1Ch]
  size_t v13; // [esp+Ch] [ebp-18h]
  char *v14; // [esp+10h] [ebp-14h]

  v12 = strlen(SubStr);
  v13 = strlen(Str);
  v7 = strlen(a2);
  v14 = (char *)sub_470E78(a3 * (v13 - v12) + v7 + 1);
  v8 = v14;
  while ( 1 )
  {
    v9 = strstr(a2, SubStr);
    if ( v9 == nullptr )
      break;
    qmemcpy(v8, a2, v9 - a2);
    v10 = &v8[v9 - a2];
    qmemcpy(v10, Str, v13);
    v8 = &v10[v13];
    a2 = &v9[v12];
  }
  strcpy(v8, a2);
  return v14;
}

