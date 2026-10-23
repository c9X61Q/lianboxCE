// busybox.exe @ 0x45eaa0 size=178

int __usercall sub_45EAA0@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v5; // ebx
  int v6; // eax

  v5 = sub_4728CC(a3);
  *(_DWORD *)(v5 + 12) = a1;
  *(_BYTE *)v5 = 2;
  sub_4715C8(2, v5 + 56);
  v6 = *(_DWORD *)(v5 + 56);
  switch ( (_WORD)v6 )
  {
    case 0x8B1F:
      *(_DWORD *)(v5 + 4) = sub_468DB4;
      *(_DWORD *)(v5 + 8) = "gunzip";
      break;
    case 0x9D1F:
      *(_DWORD *)(v5 + 4) = sub_468670;
      *(_DWORD *)(v5 + 8) = "uncompress";
      break;
    case 0x5A42:
      *(_DWORD *)(v5 + 4) = sub_468C1C;
      *(_DWORD *)(v5 + 8) = "bunzip2";
      break;
    default:
      if ( (_WORD)v6 == 14333 && (*(_BYTE *)v5 = 6, sub_4715C8(4, v5 + 58), *(_DWORD *)(v5 + 58) == 5920890) )
      {
        *(_DWORD *)(v5 + 4) = sub_469EE8;
        *(_DWORD *)(v5 + 8) = "unxz";
      }
      else if ( a2 != 0 )
      {
        sub_418210("no gzip/bzip2/xz magic");
      }
      break;
  }
  return v5;
}

