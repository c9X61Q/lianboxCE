// busybox.exe @ 0x45f564 size=197

int __usercall sub_45F564@<eax>(int a1@<eax>, void *a2@<edx>)
{
  int v4; // eax
  int v5; // edx
  unsigned int v6; // ebp
  unsigned __int64 v7; // rax
  int i; // ebp
  __int64 v10; // [esp+0h] [ebp-18h]

  v4 = *(_DWORD *)a1 & 0x7F;
  v5 = v4 + 1;
  *(_BYTE *)(a1 + v4 + 80) = 0x80;
  do
  {
    v6 = 128 - v5;
    memset((void *)(a1 + v5 + 80), 0, 128 - v5);
    if ( (unsigned int)(128 - v5) > 0xF )
    {
      *(_QWORD *)(a1 + 200) = sub_416E4C(8LL * *(_QWORD *)a1);
      HIDWORD(v7) = *(_QWORD *)(a1 + 8) >> 29;
      v10 = 8LL * *(_QWORD *)(a1 + 8);
      LODWORD(v7) = *(__int64 *)(a1 + 4) >> 29;
      *(_QWORD *)(a1 + 192) = sub_416E4C(v7);
    }
    sub_45F6AC(v10, HIDWORD(v10));
    v5 = 0;
  }
  while ( v6 <= 0xF );
  for ( i = 0; i != 8; ++i )
    *(_QWORD *)(a1 + 8 * i + 16) = sub_416E4C(*(_QWORD *)(a1 + 8 * i + 16));
  qmemcpy(a2, (const void *)(a1 + 16), 0x40u);
  return 64;
}

