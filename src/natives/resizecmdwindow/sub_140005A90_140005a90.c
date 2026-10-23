// resizecmdwindow.exe @ 0x140005a90 size=122

__int64 __fastcall sub_140005A90(__int64 a1)
{
  unsigned __int8 **v1; // r10
  unsigned __int8 *v3; // r8
  unsigned __int64 *v5; // rax
  unsigned __int64 v6; // r9
  unsigned __int8 *v7; // rcx

  v1 = *(unsigned __int8 ***)(a1 + 56);
  v3 = *v1;
  if ( *v1 == nullptr )
    return 0xFFFFFFFFLL;
  if ( v3 < &v3[**(int **)(a1 + 80)] )
    return *v3;
  v5 = *(unsigned __int64 **)(a1 + 64);
  if ( *v5 == 0 || (*(_BYTE *)(a1 + 112) & 4) != 0 )
    return 0xFFFFFFFFLL;
  v6 = *(_QWORD *)(a1 + 104);
  if ( v6 < *v5 )
    v6 = *v5;
  if ( v6 <= (unsigned __int64)v3 )
    return 0xFFFFFFFFLL;
  *(_QWORD *)(a1 + 104) = v6;
  v7 = *v1;
  *v1 = *v1;
  **(_DWORD **)(a1 + 80) = v6 - (_DWORD)v7;
  return ***(unsigned __int8 ***)(a1 + 56);
}

