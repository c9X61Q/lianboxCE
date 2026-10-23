// busybox.exe @ 0x46693c size=684

signed int __usercall sub_46693C@<eax>(int a1@<eax>, const char *a2@<edx>)
{
  int v3; // ebp
  int v4; // edi
  _BYTE *v5; // eax
  int v6; // ecx
  int v7; // ecx
  int v8; // eax
  int v9; // eax
  signed int v10; // esi
  int v11; // eax
  int v12; // eax
  int v13; // ebp
  int v14; // edx
  unsigned int v15; // edi
  int v16; // ecx
  int i; // eax
  int v18; // ecx
  __int128 *v19; // ebp
  _BYTE *v20; // edi
  char v21; // al
  unsigned __int8 v22; // cl
  const char *v23; // eax
  u_long v25; // [esp+10h] [ebp-38h]
  u_long hostlong; // [esp+10h] [ebp-38h]
  _DWORD v28[4]; // [esp+18h] [ebp-30h] BYREF
  _BYTE v29[32]; // [esp+28h] [ebp-20h] BYREF

  while ( 1 )
  {
    v3 = *(_DWORD *)(a1 + 48);
    if ( v3 != 0 )
      memmove(*(void **)(a1 + 52), (const void *)(*(_DWORD *)(a1 + 52) + *(_DWORD *)(a1 + 44)), *(_DWORD *)(a1 + 48));
    *_errno() = 0;
    v4 = 18437;
    while ( 1 )
    {
      if ( v3 > 4 && v4 == 18437 )
      {
        v5 = *(_BYTE **)(a1 + 52);
        v4 = ((unsigned __int8)v5[3] << 8) + (unsigned __int8)v5[4] + 5;
        if ( (unsigned int)v4 > 0x4805 || v5[1] != 3 || v5[2] != 3 )
        {
          v6 = v3;
          if ( v3 > v4 )
            v6 = ((unsigned __int8)v5[3] << 8) + (unsigned __int8)v5[4] + 5;
          sub_416B80((unsigned __int8 **)(a1 + 52), a2, v6);
        }
      }
      if ( v3 - v4 >= 0 )
        break;
      v7 = *(_DWORD *)(a1 + 40) - v3;
      if ( v7 == 0 )
      {
        v8 = *(_DWORD *)(a1 + 40) + 2304;
        if ( v8 > 18437 )
          *(_DWORD *)(a1 + 40) = 18437;
        else
          *(_DWORD *)(a1 + 40) = v8;
        v25 = *(_DWORD *)(a1 + 40) - v3;
        *(_DWORD *)(a1 + 52) = sub_471600(v25, *(_DWORD *)(a1 + 40));
        v7 = v25;
      }
      v9 = sub_45C560(v7, (LPSTR)(v3 + *(_DWORD *)(a1 + 52)), *(_DWORD *)(a1 + 8));
      if ( v9 <= 0 )
      {
        v10 = v3 | v9;
        if ( (v3 | v9) != 0 )
          sub_418014(v9, "short read, have only %d", v3);
        *(_DWORD *)(a1 + 48) = 0;
        return v10;
      }
      v3 += v9;
    }
    *(_DWORD *)(a1 + 48) = v3 - v4;
    *(_DWORD *)(a1 + 44) = v4;
    v10 = v4 - 5;
    v11 = *(_DWORD *)(a1 + 12);
    if ( v11 != 0 )
    {
      if ( v11 > v10 )
        goto LABEL_35;
      if ( (*(_BYTE *)a1 & 0x10) != 0 )
      {
        v12 = *(_DWORD *)(a1 + 52);
        v13 = v12 + 5;
        v10 = v4 - 29;
        v28[0] = **(_DWORD **)(a1 + 84);
        v14 = *(_DWORD *)(v12 + 9);
        v28[1] = *(_DWORD *)(v12 + 5);
        v28[2] = v14;
        v15 = v4 - 29;
        hostlong = 1;
        while ( v15 != 0 )
        {
          v28[3] = htonl(++hostlong);
          sub_413E48(a1 + 468, (int)v28, (int)v29);
          v16 = v15;
          if ( v15 > 0x10 )
            v16 = 16;
          for ( i = 0; i != v16; ++i )
            *(_BYTE *)(v13 + i) = *(_BYTE *)(v13 + i + 8) ^ v29[i];
          v13 += i;
          v15 -= i;
        }
      }
      else
      {
        if ( (unsigned int)v11 > 0x20 )
        {
          if ( (v10 & 0xF) != 0 )
LABEL_35:
            sub_41784C("bad encrypted len:%u", v4 - 5);
          v18 = *(_DWORD *)(a1 + 52);
          v19 = (__int128 *)(v18 + 5);
          v10 = v4 - 21;
          sub_413910(a1 + 468, v19, v18 + 21, v4 - 21, (int)v19);
          v11 = *((unsigned __int8 *)v19 + v4 - 22) + 33;
        }
        v10 -= v11;
      }
      if ( v10 < 0 )
        sub_418210("encrypted data too short");
    }
    v20 = *(_BYTE **)(a1 + 52);
    if ( *v20 != 21 )
      break;
    if ( v10 <= 1 )
      return v10;
    v21 = v20[5];
    if ( v21 == 2 )
    {
      v22 = v20[6];
      v23 = "unrecognized name";
      if ( v22 != 112 )
      {
        if ( v22 > 0x70u
          || (v23 = "decrypt error", v22 != 51)
          && (v22 > 0x33u
           || (v23 = "decode error", v22 != 50)
           && (v23 = "bad MAC", v22 != 20)
           && (v23 = "handshake failure", v22 != 40)) )
        {
          v23 = (const char *)sub_417B68();
        }
      }
      sub_41784C("TLS %s from peer (alert code %d): %s", "error", (unsigned __int8)v20[6], v23);
    }
    if ( v21 != 1 || v20[6] == 0 )
      return 0;
  }
  if ( *v20 == 22 )
    sub_442554(*(_DWORD *)(a1 + 56), v20 + 5, v10);
  return v10;
}

