// busybox.exe @ 0x44ee8c size=404

void __userpurge sub_44EE8C(char *Destination@<eax>, unsigned __int8 a2@<dl>, _BYTE *a3@<ecx>, int *a4)
{
  _BYTE *v6; // edx
  int v7; // eax
  int i; // edx
  int v9; // eax
  int v10; // edx

  v6 = a3;
  switch ( a2 )
  {
    case 'n':
LABEL_13:
      sub_44F5C0(a3, v6);
      return;
    case 'i':
      strcat(Destination, "llx");
      sub_46F088(Destination, a4[17], a4[16]);
      return;
    case 'l':
      strcat(Destination, "lu");
      v7 = a4[20];
LABEL_22:
      sub_46F088(Destination, v7);
      return;
    case 't':
      strcat(Destination, "lx");
      v7 = *a4;
      goto LABEL_22;
    case 'T':
      for ( i = 0; i != 36; ++i )
      {
        if ( *a4 == dword_47FC60[i] )
          break;
      }
      v6 = sub_446FA4("affs", i);
      goto LABEL_13;
    case 'b':
      strcat(Destination, "llu");
      v9 = a4[6];
      v10 = a4[7];
      break;
    case 'f':
      strcat(Destination, "llu");
      v9 = a4[8];
      v10 = a4[9];
      break;
    case 'a':
      strcat(Destination, "llu");
      v9 = a4[10];
      v10 = a4[11];
      break;
    default:
      if ( (a2 & 0xDF) == 0x53 )
      {
        strcat(Destination, "lu");
        v7 = a4[2];
        goto LABEL_22;
      }
      if ( a2 == 99 )
      {
        strcat(Destination, "llu");
        v9 = a4[12];
        v10 = a4[13];
      }
      else
      {
        if ( a2 != 100 )
        {
          sub_463590(a3, 99);
          sub_46F088(Destination, a2);
          return;
        }
        strcat(Destination, "llu");
        v9 = a4[14];
        v10 = a4[15];
      }
      break;
  }
  sub_46F088(Destination, v9, v10);
}

