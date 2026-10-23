// gettime.exe @ 0x420d1e size=39

BOOL __acrt_get_process_end_policy()
{
  int v1; // [esp+0h] [ebp-4h] BYREF

  v1 = 0;
  if ( (unsigned __int8)__acrt_is_secure_process() == 0 )
    sub_41A19D((int)&v1);
  return v1 != 1;
}

