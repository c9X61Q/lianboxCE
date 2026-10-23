// busybox.exe @ 0x4718d4 size=136

int __userpurge sub_4718D4@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  int v7; // eax
  int result; // eax

  if ( ((*(_BYTE *)a1 - 43) & 0xFD) != 0 )
    v7 = 0x7FFFFFFF;
  else
    v7 = (*(_BYTE *)(a1 + 1) == 45) + 0x7FFFFFFF;
  result = sub_471980(0, a2, v7, a5);
  if ( *(_BYTE *)a1 == 45 )
    result = -result;
  if ( result > a4 || result < a3 )
    sub_41784C("number %s is not in %lld..%lld range", (const char *)a1, (__int64)a3, (__int64)a4);
  return result;
}

