// resizecmdwindow.exe @ 0x140006860 size=289

__int64 __fastcall sub_140006860(__int64 a1, __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // rdx
  __int64 v5; // rcx
  __int64 v6; // rbx
  unsigned __int64 v7; // rdi
  size_t v8; // rbp
  int v10; // [rsp+20h] [rbp-38h]

  v3 = a3[3];
  v5 = a3[2];
  v6 = (__int64)a3;
  if ( v3 == v5 )
  {
    v6 = sub_140008950(a3, v10, 1u);
  }
  else
  {
    v7 = (unsigned __int64)a3;
    a3[2] = v5 + 1;
    if ( v3 >= 0x10 )
      v7 = *a3;
    if ( (unsigned __int64)"" <= v7 || (unsigned __int64)"\n" > v7 + v5 )
    {
      v8 = 1;
    }
    else if ( v7 > (unsigned __int64)"\n" )
    {
      v8 = v7 - (_QWORD)"\n";
    }
    else
    {
      v8 = 0;
    }
    memmove((void *)(v7 + 1), (const void *)v7, v5 + 1);
    memcpy((void *)v7, "\n", v8);
    memcpy((void *)(v7 + v8), &asc_14000B540[v8 + 1], 1 - v8);
  }
  *(_OWORD *)a1 = 0;
  *(_QWORD *)(a1 + 16) = 0;
  *(_QWORD *)(a1 + 24) = 0;
  *(_OWORD *)a1 = *(_OWORD *)v6;
  *(_OWORD *)(a1 + 16) = *(_OWORD *)(v6 + 16);
  *(_QWORD *)(v6 + 16) = 0;
  *(_QWORD *)(v6 + 24) = 15;
  *(_BYTE *)v6 = 0;
  return a1;
}

