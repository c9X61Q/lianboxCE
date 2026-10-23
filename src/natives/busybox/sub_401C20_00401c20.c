// busybox.exe @ 0x401c20 size=14

void __cdecl sub_401C20(_UserMathErrorFunctionPointer UserMathErrorFunction)
{
  dword_4859F4 = (int (__cdecl *)(_DWORD))UserMathErrorFunction;
  _setusermatherr(UserMathErrorFunction);
}

