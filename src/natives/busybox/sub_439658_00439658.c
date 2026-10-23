// busybox.exe @ 0x439658 size=482

void __cdecl __noreturn sub_439658(int a1, int a2)
{
  int v2; // esi
  int v3; // eax
  int v4; // ebp
  int v5; // edi
  int v6; // ebx
  int v7; // ecx
  int v8; // ebp
  int v9; // eax
  int v10; // ebx
  char v11; // al
  int v12; // [esp+8h] [ebp-24h]
  int v13; // [esp+Ch] [ebp-20h]
  int v14; // [esp+10h] [ebp-1Ch]
  int v15; // [esp+14h] [ebp-18h]
  int v16[5]; // [esp+18h] [ebp-14h] BYREF

  if ( *dword_485AD0 == 103 )
  {
    v2 = sub_435D44(a2, (int)&unk_47990E) | 0x12;
    dword_486008 = v2;
  }
  else
  {
    v2 = sub_435D44(a2, (int)"^rnugG");
  }
  v15 = *(_DWORD *)(a2 + 4 * dword_473090);
  if ( v15 != 0 )
  {
    v3 = sub_470D98();
    v4 = *(_DWORD *)(v3 + 20);
    v5 = *(_DWORD *)(v3 + 24);
    v12 = v5;
    v13 = v4;
  }
  else
  {
    v12 = sub_4365A0();
    v5 = sub_4365A0();
    v13 = sub_4365A0();
    v4 = sub_4365A0();
  }
  if ( v2 != 0 )
  {
    if ( (v2 & 0x10) == 0 )
    {
      LOBYTE(v10) = 0;
      goto LABEL_28;
    }
    v10 = sub_44E564();
    if ( v5 == v12 )
    {
LABEL_16:
      v14 = sub_470E78();
      v16[0] = 64;
      if ( sub_43386C(v15, v5, v14, v16) < 0 )
      {
        v14 = sub_471600(v7, 4 * v16[0]);
        sub_43386C(v15, v5, v14, v16);
      }
      if ( v16[0] <= 0 )
      {
        if ( v16[0] != 0 )
          sub_418210("can't get groups");
      }
      else
      {
        v8 = 0;
        do
        {
          v9 = *(_DWORD *)(v14 + 4 * v8);
          if ( v2 == 0 || v5 != v9 && v12 != v9 )
            v10 |= sub_44E564();
          ++v8;
        }
        while ( v16[0] > v8 );
      }
LABEL_28:
      if ( (v2 & 4) != 0 )
      {
        v11 = sub_44F0AC();
      }
      else
      {
        if ( (v2 & 8) == 0 )
          goto LABEL_33;
        v11 = sub_44E564();
      }
      LOBYTE(v10) = v11 | v10;
LABEL_33:
      sub_418130(10);
      sub_42F138(v10);
    }
  }
  else
  {
    v6 = sub_44F0AC();
    v10 = sub_44E564() | v6;
    if ( v4 != v13 )
      v10 |= sub_44F0AC();
    if ( v5 == v12 )
      goto LABEL_16;
  }
  v10 |= sub_44E564();
  goto LABEL_16;
}

