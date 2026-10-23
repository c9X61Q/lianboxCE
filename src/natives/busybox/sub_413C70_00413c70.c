// busybox.exe @ 0x413c70 size=113

int __fastcall sub_413C70(int a1, _OWORD *a2, int a3, int a4)
{
  int i; // esi
  int j; // edx
  int k; // edx
  int result; // eax
  _QWORD v9[12]; // [esp+0h] [ebp-60h]

  *(_OWORD *)v9 = *a2;
  for ( i = a3; i != 0; i -= 16 )
  {
    for ( j = 0; j != 16; ++j )
      *((_DWORD *)&v9[2] + j) = (unsigned __int8)(*((_BYTE *)v9 + j) ^ *(_BYTE *)(a1 + a3 - i + j));
    sub_413CE4();
    for ( k = 0; k != 16; ++k )
    {
      result = *((_DWORD *)&v9[2] + k);
      *(_BYTE *)(a3 + a4 - i + k) = result;
      *((_BYTE *)v9 + k) = result;
    }
  }
  return result;
}

