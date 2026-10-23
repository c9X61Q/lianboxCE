// lian86.exe @ 0x0040a5b8  size=128  name=sub_40A5B8
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __stdcall sub_40A5B8(int *a1, int a2, int a3)
{
  int v4; // edi
  void *v6; // eax
  void *v7; // eax
  void *v8; // ebp
  wchar_t *v10; // [esp-10h] [ebp-18h]
  int v11; // [esp+Ch] [ebp+4h]
  int v12; // [esp+10h] [ebp+8h]

  v4 = 0;
  if ( a1 != nullptr && a2 != 0 )
  {
    v11 = *a1;
    v12 = a1[5];
    if ( a3 != 0 )
      sub_40A79A(a2);
    sub_40A81C(a1);
    while ( 1 )
    {
      v7 = (void *)sub_40A8E8(a1);
      v8 = v7;
      if ( v7 == nullptr )
        break;
      v10 = *((wchar_t **)v7 - 1);
      if ( (a1[11] & 4) != 0 )
        v6 = (void *)sub_40A82A(a2, v10, 0);
      else
        v6 = (void *)sub_40A6C3(a2, v10, 0);
      sub_412154(v6, a1[7], a1[4], v8);
    }
    *a1 = v11;
    v4 = 1;
    a1[5] = v12;
  }
  return v4;
}

