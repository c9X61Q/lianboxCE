// busybox.exe @ 0x437388 size=378

_BYTE *__usercall sub_437388@<eax>(_DWORD *a1@<eax>, unsigned int a2@<ecx>, int a3@<edi>)
{
  int v4; // edx
  _BYTE *result; // eax
  int v6; // eax
  int i; // eax
  int v8; // esi
  unsigned int v9; // edx
  int v10; // eax
  int v11; // eax
  BOOL v12; // edx

  while ( *((_BYTE *)a1 + 5) != 1 )
  {
LABEL_13:
    if ( *((_BYTE *)a1 + 5) == 2 )
    {
      while ( 1 )
      {
        result = *(_BYTE **)(*a1 + 12);
        if ( result == nullptr )
          break;
        a3 = a1[13];
        if ( a3 >= a1[14] )
          break;
        v8 = **(unsigned __int8 **)(*a1 + 4);
        v9 = a1[11];
        v10 = a1[12];
        if ( v8 == v9 )
        {
          if ( v10 != 255 )
          {
            a1[12] = v10 + 1;
            goto LABEL_24;
          }
        }
        else
        {
          if ( v10 == 1 )
          {
            a2 = HIBYTE(a1[20]) ^ (unsigned __int8)v9;
            a1[20] = *(_DWORD *)(a1[19] + 4 * a2) ^ (a1[20] << 8);
            *((_BYTE *)a1 + v9 + 100) = 1;
            *(_BYTE *)(a1[8] + a3) = v9;
            ++a1[13];
            a1[11] = v8;
            goto LABEL_24;
          }
          if ( v9 > 0xFF )
            goto LABEL_23;
        }
        sub_413374(a1);
LABEL_23:
        a1[11] = v8;
        a1[12] = 1;
LABEL_24:
        v11 = *a1;
        ++*(_DWORD *)(v11 + 4);
        --*(_DWORD *)(v11 + 12);
      }
      if ( *((_BYTE *)a1 + 4) == 2 || result != nullptr )
      {
        a3 = a1[14];
        if ( a1[13] >= a3 )
        {
          v12 = false;
          goto LABEL_32;
        }
        if ( result == nullptr )
          return result;
      }
      else
      {
        if ( a1[11] <= 0xFFu )
          sub_413374(a1);
        a1[11] = 256;
        a1[12] = 0;
        v12 = *((_BYTE *)a1 + 4) == 4;
LABEL_32:
        sub_411C18((int)a1, v12, a2, a3);
        *((_BYTE *)a1 + 5) = 1;
      }
    }
  }
  while ( 1 )
  {
    v4 = *a1;
    result = (_BYTE *)a1[16];
    a2 = a1[15];
    if ( *(_DWORD *)(*a1 + 16) == 0 )
      break;
    if ( a2 <= (unsigned int)result )
      goto LABEL_6;
    a1[16] = result + 1;
    **(_BYTE **)(v4 + 8) = *result;
    v6 = *a1;
    --*(_DWORD *)(v6 + 16);
    ++*(_DWORD *)(v6 + 8);
    ++*(_QWORD *)(v6 + 24);
  }
  if ( a2 > (unsigned int)result )
    return result;
LABEL_6:
  if ( *((_BYTE *)a1 + 4) != 4 || *(_DWORD *)(v4 + 12) != 0 || a1[11] <= 0xFFu && (int)a1[12] > 0 )
  {
    a1[13] = 0;
    a1[20] = -1;
    for ( i = 0; i != 256; ++i )
      *((_BYTE *)a1 + i + 100) = 0;
    ++a1[22];
    *((_BYTE *)a1 + 5) = 2;
    goto LABEL_13;
  }
  return result;
}

