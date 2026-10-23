// busybox.exe @ 0x42b500 size=217

int __cdecl sub_42B500(char *a1, int a2)
{
  char v2; // bl
  int v3; // edx
  int v4; // eax
  int v5; // ebp
  int v6; // eax
  int v8; // [esp+0h] [ebp-6Ch]
  int v9; // [esp+8h] [ebp-64h]
  _DWORD v10[20]; // [esp+Ch] [ebp-60h] BYREF

  v2 = *a1;
  v3 = dword_485FEC;
  v4 = *((_DWORD *)a1 + 1);
  *(_DWORD *)(dword_485FEC + 376) = v4;
  v5 = dword_485FF0;
  *(_DWORD *)(dword_485FF0 + 20) = v4;
  if ( dword_473340 != 0 )
    *(_DWORD *)(v3 + 376) = v4 - (dword_473340 - 1);
  sub_42E40C();
  if ( v2 != 3 && (a2 & 1) != 0 )
  {
    sub_459474();
    sub_42B5DC(*((_DWORD *)a1 + 2), a2);
  }
  ++*(_DWORD *)(v5 + 56);
  sub_441E68();
  memset(v10, 0, sizeof(v10));
  v10[10] = 2;
  v10[17] = a1;
  v10[13] = a2;
  sub_46174C(v2 == 3);
  v6 = 0;
  if ( v2 != 3 )
    v6 = sub_46DAE0();
  v9 = v6;
  sub_43B8DC(v8);
  return v9;
}

