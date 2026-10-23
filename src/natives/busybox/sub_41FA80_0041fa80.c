// busybox.exe @ 0x41fa80 size=505

int __cdecl sub_41FA80(int a1, int a2)
{
  int v2; // ebx
  __int16 v3; // si
  int v4; // ebp
  int v5; // edi
  _DWORD *i; // edi
  unsigned int v7; // esi
  unsigned int v8; // ebx
  FILE *v9; // eax
  int v11; // [esp+0h] [ebp-34h]
  char v12; // [esp+4h] [ebp-30h]

  *(_QWORD *)&MultiByteStr = -1;
  v2 = sub_43AC28();
  *(_DWORD *)v2 = 8;
  v3 = sub_435D60(a2, "it0uvdmLF:R:oH:", "extract");
  v4 = dword_473090;
  if ( (v3 & 0x200) != 0 )
  {
    sub_448C10();
    *(_QWORD *)(v2 + 80) = *(_QWORD *)&MultiByteStr;
  }
  if ( (v3 & 0x500) == 0x100 )
  {
    sub_47154C();
    sub_471530();
  }
  if ( (v3 & 0x400) != 0 )
  {
    if ( unk_477D56 != 110 )
      goto LABEL_7;
    if ( (v3 & 0x100) != 0 )
    {
      sub_47154C();
      sub_471530();
    }
    return sub_41FC7C(v11, v12);
  }
  else
  {
    if ( (v3 & 3) == 0 )
LABEL_7:
      sub_418164();
    if ( (v3 & 2) != 0 )
    {
      v3 &= ~1u;
      *(_DWORD *)(v2 + 32) = sub_438614;
    }
    else if ( (v3 & 1) != 0 )
    {
      if ( (v3 & 0x2000) != 0 )
        *(_DWORD *)(v2 + 36) = sub_4218CC;
      else
        *(_DWORD *)(v2 + 36) = sub_42149C;
    }
    if ( (v3 & 8) != 0 )
      *(_DWORD *)v2 = *(_DWORD *)v2 & 0xFFFFFFF3 | 4;
    if ( (v3 & 0x10) != 0 )
    {
      if ( *(int (**)())(v2 + 32) == sub_438614 )
        *(_DWORD *)(v2 + 32) = sub_438628;
      else
        *(_DWORD *)(v2 + 32) = sub_438614;
    }
    if ( (v3 & 0x20) != 0 )
      *(_DWORD *)v2 |= 2u;
    if ( (v3 & 0x40) != 0 )
      *(_DWORD *)v2 |= 1u;
    for ( i = (_DWORD *)(a2 + 4 * v4); *i != 0; ++i )
    {
      *(_DWORD *)(v2 + 8) = sub_42FCB8;
      sub_43E368();
    }
    *(_DWORD *)(v2 + 72) = -1;
    *(_DWORD *)(v2 + 76) = -1;
    while ( (unsigned __int8)sub_433AF8() == 0 )
      ;
    if ( *(_DWORD *)(v2 + 76) != -1 || (v5 = 0, *(_DWORD *)(v2 + 72) != -1) )
    {
      v5 = 0;
      if ( (v3 & 0x1000) == 0 )
      {
        sub_42F128(v11);
        v7 = *(_DWORD *)(v2 + 76);
        v8 = *(_DWORD *)(v2 + 72);
        v9 = off_4730E8(2);
        sub_46EEFC(v9, "%llu blocks\n", __PAIR64__(v7, v8));
      }
    }
  }
  return v5;
}

