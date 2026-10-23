// gettime.exe @ 0x40bdec size=108

void __stdcall __noreturn _CxxThrowException(void *pExceptionObject, _ThrowInfo *pThrowInfo)
{
  _ThrowInfo *v2; // edi
  ULONG_PTR v3; // ebx
  int v4; // [esp-8h] [ebp-20h]
  ULONG_PTR Arguments[3]; // [esp+Ch] [ebp-Ch] BYREF

  v2 = pThrowInfo;
  v3 = 429065504;
  if ( pThrowInfo != nullptr )
  {
    if ( (pThrowInfo->attributes & 0x10) == 0
      || (v4 = *(_DWORD *)pExceptionObject - 4,
          v2 = *(_ThrowInfo **)(*(_DWORD *)v4 + 24),
          (*(void (__thiscall **)(_DWORD, int))(*(_DWORD *)v4 + 32))(*(_DWORD *)(*(_DWORD *)v4 + 32), v4),
          v2 != nullptr) )
    {
      if ( (v2->attributes & 8) != 0 )
        v3 = 26820608;
    }
  }
  Arguments[1] = (ULONG_PTR)pExceptionObject;
  Arguments[0] = v3;
  Arguments[2] = (ULONG_PTR)v2;
  RaiseException(0xE06D7363, 1u, 3u, Arguments);
}

