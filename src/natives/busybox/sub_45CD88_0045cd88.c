// busybox.exe @ 0x45cd88 size=126

int __usercall sub_45CD88@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v6; // ebp
  int result; // eax
  unsigned __int16 *v8; // edx
  int v9; // [esp+4h] [ebp-18h] BYREF
  _DWORD v10[5]; // [esp+8h] [ebp-14h] BYREF

  v6 = dword_486010;
  sub_441AD8(*(const char **)(dword_486010 + 4 * a1), &v9, v10, 0x2717u);
  while ( 1 )
  {
    result = v9;
    v8 = *(unsigned __int16 **)(v6 + 4 * v9 + 65528);
    if ( v8 == nullptr )
      break;
    if ( *v8 == a1 )
    {
      if ( a3 == 6 )
        return result;
      if ( sub_465670(a3, a2) != 0 )
        return v9;
    }
    v9 = v9 - v10[0] + (v9 - v10[0] < 0 ? 0x2717 : 0);
  }
  return result;
}

