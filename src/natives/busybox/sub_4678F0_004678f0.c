// busybox.exe @ 0x4678f0 size=147

int __usercall sub_4678F0@<eax>(int a1@<eax>, char *a2@<edx>, int a3@<ecx>, int a4)
{
  char **v6; // edi
  char *v8; // eax
  LPSTR v9; // eax

  v6 = (char **)a4;
  if ( a1 >= 0 )
  {
    if ( (char *)funcs_45BF27[a1] != (char *)sub_41551C || dword_4735A4 != 0 && *(_DWORD *)(dword_4735A4 + 40) == 4 )
    {
      sub_41CAF8();
      while ( 1 )
      {
        v8 = *v6;
        if ( *v6 == nullptr )
          break;
        ++v6;
        sub_443A9C(v8);
      }
      sub_44D900(1);
      sub_45BF38(a1, a2, a3);
    }
    v9 = sub_433530();
    sub_442F30((int)v9, a3, a4);
  }
  sub_413848(a2);
  return sub_442F30((int)a2, a3, a4);
}

