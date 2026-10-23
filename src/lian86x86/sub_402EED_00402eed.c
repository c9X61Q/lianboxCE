// lian86.exe @ 0x00402eed  size=192  name=sub_402EED
// 由 IDA Pro 9.4 (iai_hexrays) 反编译还原；非原始源码，语义等价

int __cdecl sub_402EED(int a1)
{
  int v1; // eax
  int v2; // edx
  int v4; // [esp+0h] [ebp-20h]
  int v5; // [esp+4h] [ebp-1Ch]
  int v6; // [esp+8h] [ebp-18h]
  int v7; // [esp+10h] [ebp-10h]
  _DWORD v8[3]; // [esp+14h] [ebp-Ch] BYREF

  v8[1] = 0;
  v8[0] = 0;
  mutex_enter();
  sub_4051A0(a1);
  v7 = unk_417080;
  dword_41808C = (int)&unk_417084;
  sub_405110(unk_41707C);
  sub_405110(v7);
  v6 = str_append();
  v5 = str_append();
  v4 = str_append();
  v1 = str_append();
  sub_40D7A0(v8, 8, 1, v1);
  sub_405182();
  sub_405EB0(v2 + v4, v5);
  return v6 + sub_405170();
}

