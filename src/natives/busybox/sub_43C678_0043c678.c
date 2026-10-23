// busybox.exe @ 0x43c678 size=110

int __cdecl sub_43C678(int a1, _BYTE *a2, int a3)
{
  int v3; // ecx
  int result; // eax
  int v5; // ebx

  v3 = *(_DWORD *)(a1 + 24);
  result = 0;
  if ( v3 != 0 )
  {
    result = (unsigned __int8)v3 != 0;
    v5 = result;
    if ( BYTE1(v3) != 0 )
      v5 = dword_4733C4 + result;
    if ( v5 <= a3 )
    {
      if ( (_BYTE)v3 != 0 )
        *a2 = 15;
      if ( *(_BYTE *)(a1 + 25) != 0 )
      {
        qmemcpy(&a2[result], off_4733C0, dword_4733C4);
        result += dword_4733C4;
      }
    }
    else
    {
      *_errno() = 7;
      return -1;
    }
  }
  return result;
}

