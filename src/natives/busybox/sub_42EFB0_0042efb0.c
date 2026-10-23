// busybox.exe @ 0x42efb0 size=247

int __usercall sub_42EFB0@<eax>(__int64 a1@<edx:eax>, int a2@<ecx>, char *Buffer, int a4)
{
  __int64 v4; // kr00_8
  int v6; // ebp
  int v7; // eax
  __int64 v9; // [esp+4h] [ebp-20h]

  v4 = a1;
  LODWORD(a1) = a4;
  while ( a2 <= (int)Buffer )
  {
    sub_45D1D8(*(_DWORD *)(HIDWORD(v4) + 8 * a2 - 4), *(_DWORD *)(HIDWORD(v4) + 8 * a2 - 8));
    sub_46F0B8(a4);
    if ( (dword_486008 & 0x800) != 0 )
      sub_46F0B8(9);
    v9 = 0;
    v6 = 0;
    while ( 1 )
    {
      a1 = *(_QWORD *)(HIDWORD(v4) + 8 * a2) - *(_QWORD *)(HIDWORD(v4) + 8 * a2 - 8);
      if ( v9 >= a1 )
        break;
      v7 = fgetc(*(FILE **)v4);
      if ( v7 == -1 )
      {
        LODWORD(a1) = sub_46F108("\n\\ No newline at end of file");
        return a1;
      }
      ++*(_QWORD *)(v4 + 8);
      if ( v7 == 9 && (dword_486008 & 0x400) != 0 )
      {
        do
        {
          sub_46F0B8(32);
          ++v6;
        }
        while ( (v6 & 7) != 0 );
      }
      else
      {
        sub_46F0B8(v7);
        ++v6;
      }
      ++v9;
    }
    ++a2;
  }
  return a1;
}

