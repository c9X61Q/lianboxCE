// gettime.exe @ 0x406710 size=125

// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_28(void *this, int a2, int a3, int a4, std::ios_base *a5, char a6, int a7)
{
  __int16 v7; // ax
  const char *v8; // eax
  size_t v9; // eax
  char Buffer[64]; // [esp+4h] [ebp-4Ch] BYREF
  _BYTE v13[8]; // [esp+44h] [ebp-Ch] BYREF

  v7 = unknown_libname_35(a5);
  v8 = unknown_libname_16((int)this, v13, "lu", v7);
  v9 = sprintf_s(Buffer, 0x40u, v8, a7);
  sub_4055B0((int)this, a2, a3, a4, a5, a6, Buffer, v9);
  return a2;
}

