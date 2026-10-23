// gettime.exe @ 0x406b10 size=99

int __thiscall std::num_put<char,std::ostreambuf_iterator<char>>::do_put(
        void *this,
        int a2,
        int a3,
        int a4,
        std::ios_base *a5,
        char a6,
        const void *a7)
{
  size_t v7; // eax
  char Buffer[64]; // [esp+4h] [ebp-44h] BYREF

  v7 = sprintf_s(Buffer, 0x40u, "%p", a7);
  sub_4055B0((int)this, a2, a3, a4, a5, a6, Buffer, v7);
  return a2;
}

