// busybox.exe @ 0x410c20 size=179

double __cdecl sub_410C20(int a1, int a2)
{
  int v2; // eax
  double v4; // [esp+10h] [ebp-3Ch]
  double v5; // [esp+18h] [ebp-34h]
  double v6; // [esp+20h] [ebp-2Ch]
  double v7; // [esp+28h] [ebp-24h]
  int v8; // [esp+38h] [ebp-14h] BYREF
  _DWORD v9[4]; // [esp+3Ch] [ebp-10h] BYREF

  v4 = sub_4108F0(a1, &v8);
  v6 = v4;
  v5 = sub_4108F0(a2, v9);
  v7 = v5;
  v2 = v8 + 32 * (*(_DWORD *)(a1 + 16) - *(_DWORD *)(a2 + 16)) - v9[0];
  if ( v2 <= 0 )
  {
    HIDWORD(v7) = HIDWORD(v5) - (v2 << 20);
    return v4 / v7;
  }
  else
  {
    HIDWORD(v6) = HIDWORD(v4) + (v2 << 20);
    return v6 / v5;
  }
}

