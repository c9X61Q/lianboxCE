// gettime.exe @ 0x406b80 size=129

// Microsoft VisualC 14/net runtime
int __thiscall unknown_libname_29(void *this, int a2, int a3, int a4, std::ios_base *a5, char a6, int a7, int a8)
{
  __int16 v8; // ax
  const char *v9; // eax
  size_t v10; // eax
  char Buffer[64]; // [esp+4h] [ebp-4Ch] BYREF
  _BYTE v14[8]; // [esp+44h] [ebp-Ch] BYREF

  v8 = unknown_libname_35(a5);
  v9 = unknown_libname_16((int)this, v14, "Ld", v8);
  v10 = sprintf_s(Buffer, 0x40u, v9, a7, a8);
  sub_4055B0((int)this, a2, a3, a4, a5, a6, Buffer, v10);
  return a2;
}

