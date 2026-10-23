// busybox.exe @ 0x41e860 size=324

int __usercall sub_41E860@<eax>(int a1@<eax>, int a2@<ecx>)
{
  int v3; // ebx
  unsigned int i; // ebp
  int v5; // edi
  int v6; // edx
  unsigned int v7; // edi
  int v8; // ecx
  int v10; // [esp+0h] [ebp-24h]
  int v11; // [esp+0h] [ebp-24h]
  int v12; // [esp+4h] [ebp-20h]
  unsigned __int8 v13; // [esp+Bh] [ebp-19h]
  int v14; // [esp+Ch] [ebp-18h]
  int v15; // [esp+Ch] [ebp-18h]

  v3 = dword_486010;
  if ( *(_DWORD *)(dword_486010 + 10944) != 0 )
  {
    v13 = 0;
    v12 = 0;
    v10 = 0;
    for ( i = 0; *(_DWORD *)(v3 + 10944) > i; ++i )
    {
      if ( (i & 7) == 0 )
        v13 = *(_BYTE *)(v3 + v12++ + 6848);
      v5 = *(unsigned __int8 *)(*(_DWORD *)(v3 - 88) + i);
      if ( (v13 & 1) != 0 )
      {
        v14 = *(unsigned __int8 *)(v3 + v5 + 5841);
        ((void (*)(void))sub_45D9D8)();
        if ( byte_47FB00[v14] != 0 )
          ((void (*)(void))sub_45D9D8)();
        v15 = v10 + 1;
        v7 = *(unsigned __int16 *)(*(_DWORD *)(v3 - 84) + 2 * v10);
        if ( v7 > 0xFF )
          v8 = *(unsigned __int8 *)(v3 + (v7 >> 7) + 6353);
        else
          v8 = *(unsigned __int8 *)(v3 + v7 + 6097);
        v11 = v8;
        ((void (*)(void))sub_45D9D8)();
        a2 = v11;
        v6 = (unsigned __int8)byte_47FAE0[v11];
        v10 = v15;
        if ( (_BYTE)v6 == 0 )
          goto LABEL_14;
      }
      else
      {
        v6 = *(unsigned __int16 *)(a1 + 4 * v5 + 2);
      }
      sub_45D9D8(a2, v6);
LABEL_14:
      v13 >>= 1;
    }
  }
  return sub_45D9D8(a2, *(unsigned __int16 *)(a1 + 1026));
}

