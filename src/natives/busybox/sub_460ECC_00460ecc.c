// busybox.exe @ 0x460ecc size=235

unsigned __int8 *__usercall sub_460ECC@<eax>(unsigned __int8 *a1@<eax>, int a2@<edx>, int a3@<ecx>, int a4)
{
  unsigned __int8 v6; // bl
  int v8; // edx
  unsigned __int8 v9; // al
  int v11; // [esp+0h] [ebp-14h]

  while ( 1 )
  {
    v6 = a1[a3];
    if ( a4 == 1 )
    {
      if ( v6 == 32 )
        return a1;
      if ( (unsigned __int8)(v6 - 9) > 4u )
      {
LABEL_4:
        if ( v6 == 10 )
        {
          if ( a2 == 1 )
            return a1;
          a2 = 1;
        }
        goto LABEL_7;
      }
      v8 = v6 == 10;
LABEL_25:
      if ( v8 == 0 )
        return a1;
      goto LABEL_4;
    }
    v9 = *a1;
    switch ( a4 )
    {
      case 2:
        if ( v9 == 32 )
          return a1;
        if ( (unsigned __int8)(v9 - 9) <= 4u )
        {
          LOBYTE(v8) = v9 == 10;
          goto LABEL_23;
        }
        break;
      case 3:
        if ( v9 == 32 )
          break;
        LOBYTE(v8) = (unsigned __int8)(v9 - 9) <= 4u;
LABEL_23:
        v8 = (unsigned __int8)v8;
        v6 = *a1;
        goto LABEL_25;
      case 4:
        v11 = a3;
        v8 = *(unsigned __int8 *)sub_4635B0(a3, v6);
        a3 = v11;
        goto LABEL_25;
      case 5:
        if ( (unsigned __int8)(v6 - 48) > 9u )
        {
          if ( (unsigned __int8)((a1[a3] | 0x20) - 97) <= 0x19u )
            goto LABEL_4;
          if ( v6 != 95 )
            return a1;
        }
        break;
      default:
        return a1;
    }
LABEL_7:
    if ( !(a3 == -1 ? *(_DWORD *)dword_486010 < (unsigned int)a1 : (unsigned int)a1 < *(_DWORD *)(dword_486010 + 4) - 1) )
      return a1;
    a1 += a3;
  }
}

