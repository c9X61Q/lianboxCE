// busybox.exe @ 0x432108 size=295

int __cdecl sub_432108(_BYTE *a1)
{
  int v1; // ebx
  __int64 v2; // kr00_8
  int v3; // ecx
  _BYTE v5[40]; // [esp+10h] [ebp-6Ch] BYREF
  __int64 v6; // [esp+38h] [ebp-44h]

  sub_470BC0();
  if ( sub_43228C() != 213 )
    *(&qword_485BF0 + 1) = nullptr;
  v1 = -1;
  if ( *a1 == 45 && a1[1] == 0 )
  {
    *(&qword_485BF0 + 1) = nullptr;
    v1 = 1;
  }
  if ( *(&qword_485BF0 + 1) != nullptr )
  {
    if ( (int)sub_444C28(a1, v5) < 0 )
      sub_41823C("stat");
    v2 = v6;
    if ( ((_DWORD)v6 != 0) + HIDWORD(v6) <= 0 )
    {
      *(&qword_485BF0 + 1) = nullptr;
      v2 = 0;
    }
    if ( *(&qword_485BF0 + 1) != nullptr )
    {
      sub_462820(&qword_485BF8, "REST %llu", v2);
      if ( sub_43228C() != 350 )
        *(&qword_485BF0 + 1) = nullptr;
    }
  }
  if ( sub_43228C() > 150 )
    sub_4320C4("RETR");
  if ( v1 == -1 )
    sub_47154C(v3, *(&qword_485BF0 + 1) == nullptr ? 769 : 9);
  return sub_452724();
}

