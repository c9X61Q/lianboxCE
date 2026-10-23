// gettime.exe @ 0x4022b0 size=199

_DWORD *__cdecl sub_4022B0(_DWORD *a1, int a2)
{
  __int64 v3; // [esp+8h] [ebp-1Ch] BYREF
  char v4; // [esp+22h] [ebp-2h]
  char v5; // [esp+23h] [ebp-1h]

  v5 = 1;
  v4 = 0;
  v3 = sub_406560(a2) / 10000000;
  sub_4014A0(a1, &v3);
  return a1;
}

