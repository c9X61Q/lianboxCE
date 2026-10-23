// gettime.exe @ 0x411b84 size=172

void __stdcall __crt_seh_guarded_call<void>::operator()<_lambda_2cc53f568c5a2bb6f192f930a45d44ea_,_lambda_ab61a845afdef5b7c387490eaf3616ee_ &,_lambda_c2ffc0b7726aa6be21d5f0026187e748_>(
        int *a1,
        FILE ***a2,
        int *a3)
{
  FILE **v3; // esi
  FILE **v4; // ebx
  FILE ***v5; // edi
  FILE **v6; // edx
  FILE **v7; // ecx
  FILE **v8; // eax
  FILE **v9[5]; // [esp+10h] [ebp-3Ch] BYREF
  FILE *v10; // [esp+24h] [ebp-28h] BYREF
  FILE *v11; // [esp+28h] [ebp-24h] BYREF
  FILE *v12; // [esp+2Ch] [ebp-20h] BYREF
  CPPEH_RECORD ms_exc; // [esp+34h] [ebp-18h]

  __acrt_lock(*a1);
  ms_exc.registration.TryLevel = 0;
  v3 = (FILE **)dword_4388B8;
  v4 = (FILE **)((char *)dword_4388B8 + 4 * Count);
  v5 = a2;
  while ( 1 )
  {
    v9[4] = v3;
    if ( v3 == v4 )
      break;
    v12 = *v3;
    if ( (unsigned __int8)common_flush_all_should_try_to_flush_stream(v12, *v5) != 0 )
    {
      v6 = v5[2];
      v7 = v5[1];
      v8 = *v5;
      v9[0] = &v12;
      v9[1] = v8;
      v9[2] = v7;
      v9[3] = v6;
      v11 = v12;
      v10 = v12;
      __crt_seh_guarded_call<void>::operator()<_lambda_2866be3712abc81a800a822484c830d8_,_lambda_39ca0ed439415581b5b15c265174cece_ &,_lambda_2b24c74d71094a6cd0cb82e44167d71b_>(
        &v10,
        v9,
        &v11);
      v5 = a2;
    }
    ++v3;
  }
  ms_exc.registration.TryLevel = -2;
  __acrt_unlock(*a3);
}

