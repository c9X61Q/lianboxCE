// gettime.exe @ 0x411e08 size=83

int __cdecl fflush(FILE *Stream)
{
  FILE *v2; // [esp+0h] [ebp-14h] BYREF
  FILE **v3; // [esp+4h] [ebp-10h] BYREF
  FILE *v4; // [esp+8h] [ebp-Ch] BYREF
  FILE *v5; // [esp+Ch] [ebp-8h] BYREF

  v5 = Stream;
  if ( Stream == nullptr )
    return common_flush_all(false);
  if ( !is_stream_flushable_or_commitable(Stream->_flag) )
    return 0;
  v3 = &v5;
  v4 = v5;
  v2 = v5;
  return __crt_seh_guarded_call<int>::operator()<_lambda_6d20deecaf4856105ebacbad442d1079_,_lambda_9a32fed5bf61b6b509b2d3f6003082a1_ &,_lambda_63ea2239ed67c638ddbae41947fdf875_>(
           &v2,
           &v3,
           &v4);
}

