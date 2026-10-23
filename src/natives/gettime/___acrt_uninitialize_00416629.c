// gettime.exe @ 0x416629 size=48

__crt_bool __cdecl __acrt_uninitialize(__crt_bool Terminating)
{
  if ( !Terminating )
    return __acrt_execute_uninitializers(&off_42C748, &off_42C7C8);
  if ( dword_4388B8 != nullptr )
    sub_411DFF();
  return true;
}

