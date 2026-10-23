// resizecmdwindow.exe @ 0x140005e20 size=142

_QWORD *__fastcall sub_140005E20(_QWORD *Src, _QWORD *a2)
{
  _QWORD *v3; // r9
  size_t Size; // rsi
  unsigned __int64 v5; // rdx
  __int64 v6; // rcx
  _QWORD *v7; // rax
  char *v8; // rbx

  v3 = a2;
  if ( a2[3] >= 0x10u )
    v3 = (_QWORD *)*a2;
  Size = a2[2];
  v5 = Src[3];
  v6 = Src[2];
  if ( Size > Src[3] - v6 )
    return (_QWORD *)sub_140007B20(Src, Size);
  Src[2] = v6 + Size;
  v7 = Src;
  if ( v5 >= 0x10 )
    v7 = (_QWORD *)*Src;
  v8 = (char *)v7 + v6;
  memmove((char *)v7 + v6, v3, Size);
  v8[Size] = 0;
  return Src;
}

