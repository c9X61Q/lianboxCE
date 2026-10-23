// gettime.exe @ 0x416235 size=91

int __stdcall sub_416235(int *a1, int a2, int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = unknown_libname_92(a2);
  __acrt_unlock(*a3);
  return v4;
}

