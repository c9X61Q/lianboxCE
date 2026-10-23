// busybox.exe @ 0x413e7c size=154

int __usercall sub_413E7C@<eax>(int a1@<eax>, int a2@<edx>, unsigned int a3@<ecx>)
{
  int v4; // ebx
  int i; // eax
  signed int v6; // ebp
  int v7; // edi
  int result; // eax
  unsigned int v9; // eax
  int v10; // [esp+0h] [ebp-1Ch]
  int v11; // [esp+8h] [ebp-14h]

  v4 = a3 >> 2;
  for ( i = 0; v4 > i; ++i )
    *(_DWORD *)(a1 + 4 * i) = _byteswap_ulong(*(_DWORD *)(a2 + 4 * i));
  v6 = a3 >> 2;
  v10 = 0;
  v7 = 0;
  result = a3 + 28;
  v11 = a3 + 28;
  while ( v11 > v6 )
  {
    v9 = *(_DWORD *)(a1 + 4 * v6 - 4);
    if ( v7 != 0 )
    {
      if ( v4 > 6 && v7 == 4 )
        v9 = sub_411E48(v9);
    }
    else
    {
      v9 = sub_411E48(__ROL4__(v9, 8)) ^ ((unsigned __int8)byte_47D420[v10] << 24);
    }
    if ( v4 == ++v7 )
    {
      ++v10;
      v7 = 0;
    }
    result = *(_DWORD *)(a1 - 4 * v4 + 4 * v6) ^ v9;
    *(_DWORD *)(a1 + 4 * v6++) = result;
  }
  *(_DWORD *)(a1 + 240) = v4 + 6;
  return result;
}

