// busybox.exe @ 0x43e27c size=235

int __usercall sub_43E27C@<eax>(int a1@<eax>, int a2@<edx>, _DWORD *a3@<ecx>, _DWORD *a4)
{
  _DWORD *v5; // ebx
  int i; // edi
  int **j; // ebp
  _DWORD *k; // ecx
  _DWORD *v9; // eax
  int v12; // [esp+10h] [ebp-18h]
  _DWORD *v13; // [esp+14h] [ebp-14h]

  v5 = *(_DWORD **)(dword_485FF4 + 4);
  v12 = a1 | a2;
  for ( i = 0; i != 156; i += 4 )
  {
    for ( j = *(int ***)(dword_485FEC + i + 28); j != nullptr; j = (int **)*j )
    {
      if ( ((unsigned int)j[1] & v12) == a1 )
      {
        for ( k = a3; k != nullptr; k = (_DWORD *)*v13 )
        {
          v13 = k;
          if ( strcmp((const char *)k[1], (const char *)j[2]) == 0 )
            goto LABEL_12;
        }
        if ( *(_DWORD **)(dword_485FF4 + 8) == v5 )
          v5 = (_DWORD *)sub_4371DC();
        *v5++ = j[2];
      }
LABEL_12:
      ;
    }
  }
  while ( 1 )
  {
    v9 = *(_DWORD **)(dword_485FF4 + 8);
    if ( a3 == nullptr )
      break;
    if ( v9 == v5 )
      v5 = (_DWORD *)sub_4371DC();
    *v5 = a3[1];
    a3 = (_DWORD *)*a3;
    ++v5;
  }
  if ( v9 == v5 )
    v5 = (_DWORD *)sub_4371DC();
  if ( a4 != nullptr )
    *a4 = v5;
  *v5 = 0;
  return sub_462C74();
}

