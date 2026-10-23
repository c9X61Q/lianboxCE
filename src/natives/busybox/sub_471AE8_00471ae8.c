// busybox.exe @ 0x471ae8 size=393

unsigned __int64 __userpurge sub_471AE8@<edx:eax>(
        char *a1@<eax>,
        signed int a2@<edx>,
        unsigned __int64 a3,
        unsigned __int64 a4,
        char *Str1)
{
  int v6; // esi
  char *Str2; // ebx
  unsigned int v8; // esi
  int v9; // ecx
  unsigned __int64 v12; // [esp+2Ch] [ebp-18h]
  char *v13; // [esp+34h] [ebp-10h] BYREF

  if ( ((*a1 - 43) & 0xFD) == 0 )
    goto LABEL_18;
  if ( (unsigned __int8)(*a1 - 9) <= 4u )
    goto LABEL_18;
  if ( *a1 == 32 )
    goto LABEL_18;
  v6 = *_errno();
  *_errno() = 0;
  v12 = sub_4044E0(a1, &v13, a2);
  if ( *_errno() != 0 || v13 == a1 )
    goto LABEL_18;
  *_errno() = v6;
  if ( Str1 == nullptr )
  {
LABEL_14:
    if ( *v13 == 0 )
      goto LABEL_15;
LABEL_18:
    sub_41784C("invalid number '%s'", a1);
  }
  Str2 = v13;
  while ( 1 )
  {
    v8 = *((_DWORD *)Str1 + 1);
    if ( v8 == 0 )
      goto LABEL_14;
    if ( strcmp(Str1, Str2) == 0 )
      break;
    Str1 += 8;
  }
  if ( HIDWORD(v12) != 0
    && (v8 * (unsigned __int64)HIDWORD(v12) + ((v8 * (unsigned __int64)(unsigned int)v12) >> 32)) >> 32 != 0 )
  {
LABEL_17:
    sub_41784C("number %s is not in %llu..%llu range", a1, a3, a4);
  }
  v9 = v8 * HIDWORD(v12);
  v12 = v8 * (unsigned __int64)(unsigned int)v12;
  HIDWORD(v12) += v9;
LABEL_15:
  if ( v12 < a3 || a4 < v12 )
    goto LABEL_17;
  return v12;
}

