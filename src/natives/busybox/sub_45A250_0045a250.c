// busybox.exe @ 0x45a250 size=30

__int16 *__usercall sub_45A250@<eax>(__int16 *result@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // edx
  __int16 v4; // cx

  if ( a2 != a3 )
  {
    result += a3;
    v3 = a2 - a3;
    do
    {
      v4 = *result;
      result[v3] = *result;
      ++result;
    }
    while ( v4 != 0 );
  }
  return result;
}

