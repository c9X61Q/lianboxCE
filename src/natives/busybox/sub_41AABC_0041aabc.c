// busybox.exe @ 0x41aabc size=265

size_t __usercall sub_41AABC@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>)
{
  int v5; // eax
  _DWORD *i; // esi
  int v7; // edx
  int v8; // edx
  int v9; // ebx
  _DWORD *j; // edi

  while ( 2 )
  {
    if ( a2 != nullptr )
    {
      v5 = *a2;
      a1 += (unsigned __int8)byte_4804DC[v5];
      switch ( (char)v5 )
      {
        case 0:
          sub_41AABC(a3, *((_DWORD *)a2 + 4));
          goto LABEL_9;
        case 1:
          for ( i = *((_DWORD **)a2 + 1); i != nullptr; i = (_DWORD *)*i )
            a1 = sub_41AABC(a3, i[1]);
          return a1;
        case 2:
        case 3:
        case 4:
        case 12:
          v8 = *((_DWORD *)a2 + 3);
          goto LABEL_11;
        case 5:
        case 6:
        case 7:
        case 9:
        case 10:
          v7 = *((_DWORD *)a2 + 2);
          goto LABEL_20;
        case 8:
        case 13:
          sub_41AABC(a3, *((_DWORD *)a2 + 3));
          v7 = *((_DWORD *)a2 + 2);
          goto LABEL_20;
        case 11:
          strlen(*((const char **)a2 + 4));
LABEL_9:
          v8 = *((_DWORD *)a2 + 3);
LABEL_11:
          a1 = sub_41AABC(a3, v8);
          a2 = *((char **)a2 + 2);
          continue;
        case 14:
          v9 = sub_41AABC(a3, *((_DWORD *)a2 + 3));
          return ((strlen(*((const char **)a2 + 2)) + 8) & 0xFFFFFFF8) + v9;
        case 15:
          for ( j = *((_DWORD **)a2 + 3); j != nullptr; j = (_DWORD *)*j )
            a1 = sub_41AABC(a3, j[1]);
          a1 += (strlen(*((const char **)a2 + 2)) + 8) & 0xFFFFFFF8;
          goto LABEL_21;
        case 16:
        case 17:
        case 18:
        case 19:
        case 20:
        case 21:
        case 22:
        case 23:
          v7 = *((_DWORD *)a2 + 4);
          goto LABEL_20;
        case 24:
        case 25:
          v7 = *((_DWORD *)a2 + 3);
LABEL_20:
          a1 = sub_41AABC(a3, v7);
          goto LABEL_21;
        case 26:
LABEL_21:
          a2 = *((char **)a2 + 1);
          continue;
        default:
          return a1;
      }
    }
    return a1;
  }
}

