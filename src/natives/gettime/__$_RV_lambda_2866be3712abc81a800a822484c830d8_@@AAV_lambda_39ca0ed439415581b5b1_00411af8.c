// gettime.exe @ 0x411af8 size=140

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_2866be3712abc81a800a822484c830d8_,_lambda_39ca0ed439415581b5b15c265174cece_ &,_lambda_2b24c74d71094a6cd0cb82e44167d71b_>(
        FILE **a1,
        FILE ***a2,
        FILE **a3)
{
  _lock_file(*a1);
  if ( (unsigned __int8)common_flush_all_should_try_to_flush_stream(**a2, a2[1]) != 0
    && (*(_BYTE *)a2[2] != 0 || ((**a2)->_flag & 2) != 0) )
  {
    if ( _fflush_nolock(**a2) == -1 )
      *a2[3] = (FILE *)-1;
    else
      *a2[1] = (FILE *)((char *)*a2[1] + 1);
  }
  _unlock_file(*a3);
}

