// gettime.exe @ 0x406060 size=37

int __stdcall sub_406060(int *a1)
{
  int *v1; // eax
  size_t v3; // [esp-4h] [ebp-8h]

  v3 = a1[4];
  v1 = unknown_libname_18(a1);
  return std::string::append(v1, v3);
}

