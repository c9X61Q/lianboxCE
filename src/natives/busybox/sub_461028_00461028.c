// busybox.exe @ 0x461028 size=160

int *__stdcall sub_461028(double a1)
{
  int *result; // eax
  int v2; // [esp+10h] [ebp-Ch] BYREF
  int v3; // [esp+14h] [ebp-8h]

  v2 = 0x7FFFFFFF;
  v3 = 0;
  if ( a1 >= 0.0 && a1 < 2147483647.0 )
  {
    v2 = (int)a1;
    v3 = (int)((a1 - (double)(int)a1) * 1000000000.0);
  }
  do
  {
    *_errno() = 0;
    sub_445DEC(&v2, &v2);
    result = _errno();
  }
  while ( *result == 4 );
  return result;
}

