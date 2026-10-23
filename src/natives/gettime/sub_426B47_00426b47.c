// gettime.exe @ 0x426b47 size=79

int __cdecl sub_426B47(unsigned __int16 *a1, unsigned __int16 *a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v7; // edx
  int v8; // esi

  v3 = a3;
  if ( a3 == 0 )
    return 0;
  do
  {
    v7 = *a1++;
    if ( (unsigned int)(v7 - 65) <= 0x19 )
      v7 += 32;
    v8 = *a2++;
    if ( (unsigned int)(v8 - 65) <= 0x19 )
      v8 += 32;
    result = v7 - v8;
    if ( v7 != v8 )
      break;
    if ( v7 == 0 )
      break;
    --v3;
  }
  while ( v3 != 0 );
  return result;
}

