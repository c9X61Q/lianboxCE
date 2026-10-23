// busybox.exe @ 0x45c96c size=170

int __usercall sub_45C96C@<eax>(unsigned __int8 **a1@<eax>, int *a2@<edx>, char a3@<cl>)
{
  unsigned __int8 *v4; // edx
  int v6; // edi
  int result; // eax
  unsigned int v8; // ecx
  unsigned __int8 v9; // bl
  unsigned __int8 v10; // [esp+3h] [ebp-19h]
  int v11; // [esp+4h] [ebp-18h]

  v4 = *a1;
  if ( **a1 == 47 )
    return -8;
  v11 = 4;
  v6 = 0;
  result = 8;
  do
  {
    if ( (unsigned __int8)(*v4 - 47) > 0xAu && *v4 != 0 )
      return -result;
    v8 = 0;
    while ( 1 )
    {
      v10 = *v4;
      if ( (unsigned __int8)(*v4 - 48) > 9u )
        break;
      v8 = 10 * v8 + v10 - 48;
      if ( v8 > 0xFF )
        return -result;
      ++v4;
    }
    if ( v10 == 46 )
      ++v4;
    v9 = *v4;
    if ( *v4 != 47 && v9 != 0 )
      result += 8;
    v6 = v8 | (v6 << 8);
    --v11;
  }
  while ( v11 != 0 );
  if ( v9 != 0 )
  {
    if ( v9 != a3 || v4[1] == 0 )
      return -result;
    ++v4;
  }
  *a2 = v6;
  *a1 = v4;
  return result;
}

