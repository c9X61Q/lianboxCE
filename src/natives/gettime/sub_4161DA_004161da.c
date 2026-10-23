// gettime.exe @ 0x4161da size=91

int __stdcall sub_4161DA(int *a1, int a2, int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = unknown_libname_93(a2);
  __acrt_unlock(*a3);
  return v4;
}

