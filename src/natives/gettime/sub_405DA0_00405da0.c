// gettime.exe @ 0x405da0 size=28

void __noreturn sub_405DA0()
{
  _BYTE pExceptionObject[12]; // [esp+0h] [ebp-Ch] BYREF

  sub_403070((std::exception *)pExceptionObject);
  _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_cast_std__);
}

