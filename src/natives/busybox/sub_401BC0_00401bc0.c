// busybox.exe @ 0x401bc0 size=82

int (__cdecl *__cdecl sub_401BC0(int a1, int a2, double a3, double a4, double a5))(_DWORD)
{
  int (__cdecl *result)(_DWORD); // eax
  _DWORD v6[2]; // [esp+10h] [ebp-2Ch] BYREF
  double v7; // [esp+18h] [ebp-24h]
  double v8; // [esp+20h] [ebp-1Ch]
  double v9; // [esp+28h] [ebp-14h]

  result = dword_4859F4;
  if ( dword_4859F4 != nullptr )
  {
    v7 = a3;
    v8 = a4;
    v6[0] = a1;
    v9 = a5;
    v6[1] = a2;
    return (int (__cdecl *)(_DWORD))dword_4859F4(v6);
  }
  return result;
}

