// gettime.exe @ 0x411c90 size=77

int __cdecl common_flush_all(bool a1)
{
  int result; // eax
  FILE **v2[3]; // [esp+0h] [ebp-20h] BYREF
  int v3; // [esp+Ch] [ebp-14h] BYREF
  int v4; // [esp+10h] [ebp-10h] BYREF
  int v5; // [esp+14h] [ebp-Ch] BYREF
  int v6; // [esp+18h] [ebp-8h] BYREF

  v6 = 0;
  v5 = 0;
  v2[0] = (FILE **)&v6;
  v2[1] = (FILE **)&a1;
  v2[2] = (FILE **)&v5;
  v4 = 8;
  v3 = 8;
  __crt_seh_guarded_call<void>::operator()<_lambda_2cc53f568c5a2bb6f192f930a45d44ea_,_lambda_ab61a845afdef5b7c387490eaf3616ee_ &,_lambda_c2ffc0b7726aa6be21d5f0026187e748_>(
    &v3,
    v2,
    &v4);
  result = v6;
  if ( !a1 )
    return v5;
  return result;
}

