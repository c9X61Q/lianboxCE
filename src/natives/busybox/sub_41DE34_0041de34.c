// busybox.exe @ 0x41de34 size=89

int __usercall sub_41DE34@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v4; // eax
  int v5; // edi
  unsigned int v6; // esi
  __int64 v7; // rax
  int result; // eax

  v4 = *(_DWORD *)(a1 + 72) & 0x3F;
  v5 = v4 + 1;
  *(_BYTE *)(a1 + v4) = 0x80;
  do
  {
    v6 = 64 - v5;
    memset((void *)(a1 + v5), 0, 64 - v5);
    if ( (unsigned int)(64 - v5) > 7 )
    {
      v7 = 8LL * *(_QWORD *)(a1 + 72);
      if ( a2 != 0 )
        v7 = sub_416E4C(v7);
      *(_QWORD *)(a1 + 56) = v7;
    }
    result = (*(int (**)(void))(a1 + 64))();
    v5 = 0;
  }
  while ( v6 <= 7 );
  return result;
}

