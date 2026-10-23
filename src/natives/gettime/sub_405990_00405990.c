// gettime.exe @ 0x405990 size=110

void *sub_405990(void *a1, char a2, int a3, ...)
{
  int v3; // eax
  _BYTE v5[24]; // [esp+0h] [ebp-1Ch] BYREF
  va_list va; // [esp+30h] [ebp+14h] BYREF

  va_start(va, a3);
  if ( (unsigned __int8)sub_407050(va) == 0 )
    std::string::append(": ");
  v3 = sub_4075D0(v5);
  sub_406060(v3);
  sub_403600(v5);
  sub_4029C0(a1, (int)va);
  sub_403600(va);
  return a1;
}

