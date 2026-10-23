// resizecmdwindow.exe @ 0x140005920 size=361

_QWORD *__fastcall sub_140005920(__int64 a1, _QWORD *a2, __int64 a3, int a4, char a5)
{
  __int64 v6; // rdi
  unsigned __int64 v7; // rcx
  __int64 *v8; // r14
  __int64 v9; // rsi
  __int64 v10; // rbx
  int v11; // r9d
  __int64 v12; // rax
  __int64 v13; // r9
  __int64 v14; // r11
  int v15; // ecx

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
  if ( a4 == 0 )
  {
    v12 = 0;
    goto LABEL_20;
  }
  v11 = a4 - 1;
  if ( v11 == 0 )
  {
    if ( (a5 & 3) != 3 )
    {
      if ( (a5 & 1) != 0 )
      {
        if ( v6 != 0 || v10 == 0 )
        {
          v12 = v6 - v10;
          goto LABEL_20;
        }
      }
      else if ( (a5 & 2) != 0 && (v7 != 0 || v10 == 0) )
      {
        v12 = v7 - v10;
        goto LABEL_20;
      }
    }
LABEL_33:
    *a2 = -1;
    goto LABEL_34;
  }
  if ( v11 != 1 )
    goto LABEL_33;
  v12 = *(_QWORD *)(a1 + 104) - *v8;
LABEL_20:
  v13 = v12 + a3;
  if ( v12 + a3 > (unsigned __int64)(*(_QWORD *)(a1 + 104) - *v8)
    || v13 != 0 && ((a5 & 1) != 0 && v6 == 0 || (a5 & 2) != 0 && v7 == 0) )
  {
    goto LABEL_33;
  }
  v14 = v10 + v13;
  if ( (a5 & 1) != 0 && v6 != 0 )
  {
    *v8 = v10;
    **(_QWORD **)(a1 + 56) = v14;
    **(_DWORD **)(a1 + 80) = v9 - v14;
  }
  if ( (a5 & 2) != 0 && v7 != 0 )
  {
    v15 = **(_DWORD **)(a1 + 64) + **(_DWORD **)(a1 + 88) - v14;
    **(_QWORD **)(a1 + 32) = v10;
    **(_QWORD **)(a1 + 64) = v14;
    **(_DWORD **)(a1 + 88) = v15;
  }
  *a2 = v13;
LABEL_34:
  a2[1] = 0;
  a2[2] = 0;
  return a2;
}

