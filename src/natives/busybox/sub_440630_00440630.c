// busybox.exe @ 0x440630 size=649

int __usercall sub_440630@<eax>(int a1@<eax>)
{
  CHAR *v2; // ebp
  u_long hostlong; // ebx
  int v4; // esi
  int v5; // eax
  u_long v6; // eax
  u_long *v7; // esi
  u_long v8; // eax
  u_long v9; // eax
  unsigned int v10; // ecx
  CHAR *v11; // edx
  unsigned __int8 *v13; // [esp+14h] [ebp-44h]
  void *Block; // [esp+18h] [ebp-40h]
  int v15; // [esp+1Ch] [ebp-3Ch]
  int v16; // [esp+20h] [ebp-38h]
  unsigned int v17; // [esp+28h] [ebp-30h] BYREF
  u_long v18; // [esp+2Ch] [ebp-2Ch] BYREF
  _DWORD v19[2]; // [esp+30h] [ebp-28h] BYREF
  u_long v20; // [esp+38h] [ebp-20h] BYREF
  char v21; // [esp+3Ch] [ebp-1Ch] BYREF

  v2 = (CHAR *)sub_4728CC();
  v13 = (unsigned __int8 *)sub_4728CC();
  Block = (void *)sub_4728CC();
  v16 = 0;
  v15 = 1;
  while ( 1 )
  {
    hostlong = sub_432664(0x40000, v2);
    if ( (int)hostlong <= 0 )
      break;
    v19[0] = htonl(hostlong);
    v4 = *(_DWORD *)(a1 + 8);
    if ( (v4 & 1) != 0 )
      v15 = sub_4405C8(1u, (unsigned __int8 *)v2, hostlong);
    if ( (v4 & 0x100) != 0 )
      v16 = sub_4408BC(hostlong, v2);
    if ( *(_BYTE *)(a1 + 6) == 1 )
      v5 = sub_43FB54(v2, hostlong, v13, &v17, (int)Block);
    else
      v5 = sub_43FAA4(v2, hostlong, v13, &v17, (int)Block);
    if ( v5 != 0 )
      sub_41784C("%s: %s", "internal error", "compression");
    if ( v17 >= hostlong )
    {
      v6 = htonl(hostlong);
    }
    else
    {
      if ( *(_BYTE *)(a1 + 6) == 3 )
      {
        v18 = hostlong;
        if ( sub_43FFDC(v13, v17, (unsigned __int8 *)v2, &v18) != 0 || v18 != hostlong )
          sub_41784C("%s: %s", "internal error", "optimization");
      }
      v6 = htonl(v17);
    }
    v19[1] = v6;
    v7 = &v20;
    if ( (*(_BYTE *)(a1 + 8) & 1) != 0 )
    {
      v20 = htonl(v15);
      v7 = (u_long *)&v21;
    }
    if ( (*(_BYTE *)(a1 + 9) & 1) != 0 )
      *v7++ = htonl(v16);
    if ( v17 < hostlong )
    {
      if ( (*(_BYTE *)(a1 + 8) & 2) != 0 )
      {
        v8 = sub_4405C8(1u, v13, v17);
        *v7++ = htonl(v8);
      }
      if ( (*(_BYTE *)(a1 + 9) & 2) != 0 )
      {
        v9 = sub_4408BC(v17, v13);
        *v7++ = htonl(v9);
      }
    }
    sub_471D00((char *)v7 - (char *)v19, v19);
    v10 = v17;
    if ( v17 >= hostlong )
    {
      v10 = hostlong;
      v11 = v2;
    }
    else
    {
      v11 = (CHAR *)v13;
    }
    sub_471D00(v10, v11);
  }
  v19[0] = 0;
  v19[0] = htonl(0);
  sub_471D00(4, v19);
  free(Block);
  free(v2);
  free(v13);
  return 1;
}

