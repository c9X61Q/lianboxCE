// lian86.exe @ 0x00409ff0  size=224  name=sub_409FF0
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_409FF0(int **a1)
{
  int *v1; // eax

  if ( dword_418154 != 0 )
    dword_418154 = 0;
  else
    dword_417110 = **a1;
  dword_418748 = (*a1)[3];
  dword_41874C = dword_417001;
  v1 = *a1;
  if ( **a1 == -1073741819 && (unsigned int)v1[4] >= 2 )
    dword_418750 = v1[6];
  else
    dword_418750 = 0;
  dword_418754 = a1[1][44];
  dword_418758 = a1[1][41];
  dword_41875C = a1[1][43];
  dword_418760 = a1[1][42];
  dword_418764 = a1[1][45];
  dword_418768 = a1[1][40];
  dword_41876C = a1[1][39];
  dword_418770 = a1[1][49];
  dword_418774 = a1[1][48];
  return 1;
}

