// gettime.exe @ 0x410e6d size=91

int __stdcall sub_410E6D(int *a1, int a2, int *a3)
{
  int v4; // [esp+10h] [ebp-1Ch]

  __acrt_lock(*a1);
  v4 = _lambda_2116bde18c9e5f34230805ea4a4660ed_::operator()(a2);
  __acrt_unlock(*a3);
  return v4;
}

