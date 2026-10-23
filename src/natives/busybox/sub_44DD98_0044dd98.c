// busybox.exe @ 0x44dd98 size=211

int __usercall sub_44DD98@<eax>(int a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v3; // ebx
  _DWORD *v6; // esi
  unsigned __int8 *v7; // ecx
  signed int v8; // edi
  FILE *v9; // edx
  FILE *v10; // eax
  __int16 v11; // [esp+Ch] [ebp-1Ch]
  unsigned __int8 *v13; // [esp+14h] [ebp-14h]

  v3 = a1;
  if ( sub_416B48(a1, a2, "print") != 0 )
    return 0;
  v6 = sub_42FF18(v3);
  if ( v6 == nullptr )
    return 0;
  while ( v3 <= a2 )
  {
    v7 = (unsigned __int8 *)(v6 + 3);
    v8 = v6[2];
    if ( a3 != 0 )
    {
      if ( v8 > 0 )
      {
        if ( v7[v8 - 1] == 10 )
          --v8;
        while ( v8 != 0 )
        {
          --v8;
          v13 = v7 + 1;
          v11 = *v7;
          v9 = off_4730E8(1);
          sub_431B2C(v11 | 0x100, v9);
          v7 = v13;
        }
      }
      v10 = off_4730E8(1);
      sub_46EF20("$\n", v10);
    }
    else
    {
      sub_46F294(1, v6 + 3, v8);
    }
    sub_45E41C();
    v6 = (_DWORD *)*v6;
    ++v3;
  }
  return 1;
}

