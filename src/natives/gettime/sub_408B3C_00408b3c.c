// gettime.exe @ 0x408b3c size=31

void __cdecl __noreturn sub_408B3C(char *a1)
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_408A83((std::exception *)pExceptionObject, a1);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI3_AVout_of_range_std__);
}

