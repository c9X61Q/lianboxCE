// busybox.exe @ 0x42a81c size=289

int __cdecl sub_42A81C(int a1, int a2)
{
  int v2; // ecx
  int v3; // eax
  _DWORD *v4; // ebx
  int i; // esi
  int v7; // ebp
  int v8; // eax
  int v9; // edi
  int v10; // eax
  _DWORD v11[2]; // [esp+Ch] [ebp-24h] BYREF

  v2 = dword_485FEC;
  v3 = *(_DWORD *)(a1 + 4);
  *(_DWORD *)(dword_485FEC + 376) = v3;
  *(_DWORD *)(dword_485FF0 + 20) = v3;
  if ( dword_473340 != 0 )
    *(_DWORD *)(v2 + 376) = v3 - (dword_473340 - 1);
  v11[0] = 0;
  v11[1] = v11;
  sub_42DB08(2);
  v4 = *(_DWORD **)(a1 + 12);
LABEL_4:
  if ( v4 != nullptr && byte_473328 == 0 )
  {
    for ( i = v4[2]; ; i = *(_DWORD *)(i + 4) )
    {
      if ( i == 0 )
      {
        v4 = (_DWORD *)v4[1];
        goto LABEL_4;
      }
      v7 = *(_DWORD *)(v11[0] + 4);
      sub_45EA54();
      dword_473108 = *(_DWORD *)(i + 12);
      dword_473334 = *(_DWORD *)(dword_485FF4 + 4);
      sub_4148CC(*(_BYTE **)(i + 8), 18);
      sub_4398B4();
      v8 = sub_45B26C(0, 2);
      v9 = sub_4312E8(v8, v7, 0);
      sub_44D988();
      if ( v9 == 0 )
        break;
    }
    if ( byte_473328 == 0 )
    {
      v10 = v4[3];
      if ( v10 != 0 )
        return sub_42B5DC(v10, a2);
    }
  }
  return 0;
}

