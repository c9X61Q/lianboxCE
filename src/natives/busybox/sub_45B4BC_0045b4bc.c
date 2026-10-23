// busybox.exe @ 0x45b4bc size=145

u_long __usercall sub_45B4BC@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  _DWORD *v3; // eax
  _DWORD *v4; // edx
  u_long result; // eax
  u_long v6; // ecx
  int v7; // edx
  int Key; // [esp+14h] [ebp-8h] BYREF

  Key = a1;
  v3 = bsearch(
         &Key,
         (const void *)*(&MultiByteStr + 1),
         unk_485BE8,
         0x10u,
         (_CoreCrtNonSecureSearchSortCompareFunction)sub_418E5C);
  if ( v3 == nullptr )
    return -1;
  v4 = v3;
  result = -1;
  if ( v4[3] > a2 )
  {
    v6 = MultiByteStr + v4[2];
    v7 = v4[1];
    switch ( v7 )
    {
      case 4:
        return ntohl(*(_DWORD *)(v6 + 4 * a2));
      case 3:
        return ntohs(*(_WORD *)(v6 + 2 * a2));
      case 2:
        return *(char *)(v6 + a2);
      default:
        break;
    }
  }
  return result;
}

