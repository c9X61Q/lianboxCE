// resizecmdwindow.exe @ 0x140005820 size=250

unsigned __int64 *__fastcall sub_140005820(__int64 a1, unsigned __int64 *a2, _QWORD *a3, char a4)
{
  unsigned __int64 v5; // r11
  __int64 v6; // rbp
  unsigned __int64 v7; // rcx
  __int64 *v8; // rsi
  __int64 v9; // rbx
  __int64 v10; // rdi
  __int64 v11; // r8
  int v12; // ecx

  v5 = *a3 + a3[1];
  v6 = **(_QWORD **)(a1 + 56);
  if ( (*(_BYTE *)(a1 + 112) & 2) != 0 )
  {
    v7 = 0;
  }
  else
  {
    v7 = **(_QWORD **)(a1 + 64);
    if ( v7 != 0 && *(_QWORD *)(a1 + 104) < v7 )
      *(_QWORD *)(a1 + 104) = v7;
  }
  v8 = *(__int64 **)(a1 + 24);
  v9 = *(_QWORD *)(a1 + 104);
  v10 = *v8;
  if ( v5 > v9 - *v8 || v5 != 0 && ((a4 & 1) != 0 && v6 == 0 || (a4 & 2) != 0 && v7 == 0) )
  {
    *a2 = -1;
  }
  else
  {
    v11 = v10 + v5;
    if ( (a4 & 1) != 0 && v6 != 0 )
    {
      *v8 = v10;
      **(_QWORD **)(a1 + 56) = v11;
      **(_DWORD **)(a1 + 80) = v9 - v11;
    }
    if ( (a4 & 2) != 0 && v7 != 0 )
    {
      v12 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v11;
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = v11;
      **(_DWORD **)(a1 + 88) = v12;
    }
    *a2 = v5;
  }
  a2[1] = 0;
  a2[2] = 0;
  return a2;
}

