// busybox.exe @ 0x4728e8 size=92

_BYTE *__usercall sub_4728E8@<eax>(_BYTE *a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>, int a4, int a5)
{
  _BYTE *v5; // ebx
  _BYTE *v6; // eax
  _BYTE *v7; // ecx
  unsigned int v9; // [esp+0h] [ebp-10h]

  v5 = a1;
  if ( (unsigned int)a1 > a2 )
  {
    v5 = (_BYTE *)a2;
    a2 = (unsigned int)a1;
  }
  if ( a3 <= 0 )
  {
    v6 = v5;
    if ( *v5 == 10 )
      return v5;
    while ( 1 )
    {
      v7 = v6++;
      if ( (unsigned int)v6 > a2 )
        break;
      if ( *v6 == 10 )
      {
        a2 = (unsigned int)v7;
        break;
      }
    }
  }
  v9 = a2;
  sub_465928((int)v5, a2, *(unsigned __int8 *)(dword_486010 + 120));
  if ( a4 == 1 )
    return sub_4657B0((unsigned int)v5, v9, a5);
  return v5;
}

