// busybox.exe @ 0x471980 size=268

unsigned int __userpurge sub_471980@<eax>(
        const char *a1@<eax>,
        int a2@<edx>,
        unsigned int a3@<ecx>,
        unsigned int a4,
        char *Str1)
{
  char *v7; // edi
  char v8; // al
  unsigned __int8 v9; // al
  unsigned int v10; // ebx
  char *v11; // edx
  unsigned int v12; // ebp
  int v13; // eax
  bool v14; // of
  int v17; // [esp+1Ch] [ebp-18h]
  char *v18; // [esp+1Ch] [ebp-18h]
  char *Str2; // [esp+20h] [ebp-14h] BYREF

  v7 = Str1;
  v8 = *a1;
  if ( ((v8 - 43) & 0xFD) == 0 )
    goto LABEL_16;
  v9 = v8 - 9;
  if ( v9 <= 4u )
    goto LABEL_16;
  if ( v9 == 23 )
    goto LABEL_16;
  v17 = *_errno();
  *_errno() = 0;
  v10 = strtoul(a1, &Str2, a2);
  if ( *_errno() != 0 || Str2 == a1 )
    goto LABEL_16;
  *_errno() = v17;
  v11 = Str2;
  if ( Str1 == nullptr )
  {
LABEL_12:
    if ( *v11 == 0 )
      goto LABEL_13;
LABEL_16:
    sub_41784C("invalid number '%s'", a1);
  }
  while ( 1 )
  {
    v12 = *((_DWORD *)v7 + 1);
    if ( v12 == 0 )
      goto LABEL_12;
    v18 = v11;
    v13 = strcmp(v7, v11);
    v11 = v18;
    if ( v13 == 0 )
      break;
    v7 += 8;
  }
  v14 = (v12 * (unsigned __int64)v10) >> 32 != 0;
  v10 *= v12;
  if ( v14 )
LABEL_15:
    sub_41784C("number %s is not in %llu..%llu range", a1, (unsigned __int64)a3, (unsigned __int64)a4);
LABEL_13:
  if ( v10 < a3 || v10 > a4 )
    goto LABEL_15;
  return v10;
}

