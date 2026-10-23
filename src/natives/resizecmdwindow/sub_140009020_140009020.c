// resizecmdwindow.exe @ 0x140009020 size=325

void __fastcall sub_140009020(__int64 a1, const void *a2, size_t a3, __int64 a4)
{
  int v5; // esi
  size_t v8; // rcx
  void *v9; // rax
  _QWORD *v10; // rbx
  _QWORD *v11; // rdx
  int v12; // ecx

  v5 = a4 & 0xFFFFFFDF;
  if ( a3 > 0x7FFFFFFF )
  {
    std::_Xbad_alloc();
    __debugbreak();
  }
  if ( a3 == 0 || (a4 & 6) == 6 )
  {
    *(_QWORD *)(a1 + 104) = 0;
  }
  else
  {
    if ( a3 < 0x1000 )
    {
      v10 = operator new(a3);
    }
    else
    {
      v8 = a3 + 39;
      if ( a3 + 39 <= a3 )
        sub_140001170(v8, a2, a3, a4);
      v9 = operator new(v8);
      if ( v9 == nullptr )
        invalid_parameter_noinfo_noreturn();
      v10 = (_QWORD *)(((unsigned __int64)v9 + 39) & 0xFFFFFFFFFFFFFFE0uLL);
      *(v10 - 1) = v9;
    }
    memcpy(v10, a2, a3);
    *(_QWORD *)(a1 + 104) = (char *)v10 + a3;
    if ( (v5 & 4) == 0 )
    {
      **(_QWORD **)(a1 + 24) = v10;
      **(_QWORD **)(a1 + 56) = v10;
      **(_DWORD **)(a1 + 80) = a3;
    }
    if ( (v5 & 2) == 0 )
    {
      if ( (v5 & 0x18) != 0 )
        v11 = *(_QWORD **)(a1 + 104);
      else
        v11 = v10;
      v12 = *(_QWORD *)(a1 + 104) - (_DWORD)v11;
      **(_QWORD **)(a1 + 32) = v10;
      **(_QWORD **)(a1 + 64) = v11;
      **(_DWORD **)(a1 + 88) = v12;
      if ( (v5 & 4) != 0 )
      {
        **(_QWORD **)(a1 + 24) = v10;
        **(_QWORD **)(a1 + 56) = 0;
        **(_DWORD **)(a1 + 80) = (_DWORD)v10;
      }
    }
    v5 |= 1u;
  }
  *(_DWORD *)(a1 + 112) = v5;
}

