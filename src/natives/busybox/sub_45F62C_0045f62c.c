// busybox.exe @ 0x45f62c size=128

int __usercall sub_45F62C@<eax>(__int64 *a1@<eax>, char *a2@<edx>, unsigned int a3@<ecx>)
{
  unsigned int v4; // ebp
  int i; // eax
  unsigned int v6; // edx
  int result; // eax
  __int64 v8; // [esp+0h] [ebp-1Ch]

  v4 = a3;
  v8 = *a1;
  *a1 += a3;
  if ( (unsigned __int64)v4 + v8 < v4 )
    ++a1[1];
  for ( i = v8 & 0x7F; ; i = 0 )
  {
    v6 = v4;
    if ( v4 > 128 - i )
      v6 = 128 - i;
    qmemcpy((char *)a1 + i + 80, a2, v6);
    result = v6 + i - 128;
    if ( result != 0 )
      break;
    v4 -= v6;
    a2 += v6;
    sub_45F6AC(v8, HIDWORD(v8));
  }
  return result;
}

