// gettime.exe @ 0x417b52 size=160

double __cdecl _umatherr(int a1, int a2, int a3, int a4, int a5, int a6, double a7, int a8)
{
  int v8; // eax
  int v10; // [esp+0h] [ebp-20h] BYREF
  int v11; // [esp+4h] [ebp-1Ch]
  int v12; // [esp+8h] [ebp-18h]
  int v13; // [esp+Ch] [ebp-14h]
  int v14; // [esp+10h] [ebp-10h]
  int v15; // [esp+14h] [ebp-Ch]
  double v16; // [esp+18h] [ebp-8h]

  v8 = 0;
  while ( dword_42CC88[2 * v8] != a2 )
  {
    if ( ++v8 >= 29 )
    {
      v11 = 0;
LABEL_5:
      _ctrlfp(a8, 0xFFFF);
      _set_errno_from_matherr(a1);
      return a7;
    }
  }
  v11 = (int)*(&off_42CC8C + 2 * v8);
  if ( v11 == 0 )
    goto LABEL_5;
  v12 = a3;
  v13 = a4;
  v14 = a5;
  v15 = a6;
  v16 = a7;
  v10 = a1;
  _ctrlfp(a8, 0xFFFF);
  if ( __acrt_invoke_user_matherr((int)&v10) == 0 )
    _set_errno_from_matherr(a1);
  return v16;
}

