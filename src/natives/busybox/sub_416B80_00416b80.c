// busybox.exe @ 0x416b80 size=123

void __usercall __noreturn sub_416B80(unsigned __int8 **a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  int v4; // ebx
  unsigned __int8 *v5; // esi
  unsigned __int8 *v6; // ebx
  int v7; // ebp
  FILE *(__cdecl *v8)(int); // edi
  FILE *v9; // eax
  FILE *Stream; // eax

  v4 = a3;
  sub_41783C("got bad TLS record (len:%d) while expecting %s", a3, a2);
  if ( v4 > 0 )
  {
    v5 = *a1;
    if ( v4 > 99 )
      v4 = 99;
    v6 = &v5[v4];
    do
    {
      v7 = *v5++;
      v8 = off_4730E8;
      v9 = off_4730E8(2);
      sub_46EEFC(v9, " %02x", v7);
    }
    while ( v5 != v6 );
    Stream = v8(2);
    fputc(10, Stream);
  }
  sub_470D44();
}

