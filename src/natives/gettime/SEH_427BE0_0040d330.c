// gettime.exe @ 0x40d330 size=350

int __cdecl SEH_427BE0(PEXCEPTION_RECORD ExceptionRecord, char *TargetFrame, int a3)
{
  char *v3; // esi
  int v4; // edi
  int v5; // eax
  int v6; // ebx
  uintptr_t v7; // eax
  int v8; // ecx
  int v9; // eax
  char v10; // cl
  EXCEPTION_RECORD *v12; // eax
  char *v13; // eax
  uintptr_t v14; // [esp-Ch] [ebp-34h]
  int v15; // [esp-8h] [ebp-30h]
  DWORD ExceptionCode; // [esp-4h] [ebp-2Ch]
  _DWORD v17[2]; // [esp+Ch] [ebp-1Ch] BYREF
  uintptr_t v18; // [esp+14h] [ebp-14h]
  char *v19; // [esp+18h] [ebp-10h]
  int v20; // [esp+1Ch] [ebp-Ch]
  uintptr_t v21; // [esp+20h] [ebp-8h]
  char v22; // [esp+27h] [ebp-1h]

  v22 = 0;
  ExceptionCode = ExceptionRecord->ExceptionCode;
  v20 = 1;
  ExceptionRecord->ExceptionCode = _filter_x86_sse2_floating_point_exception_default(ExceptionCode);
  v3 = TargetFrame + 16;
  v14 = __security_cookie ^ *((_DWORD *)TargetFrame + 2);
  v19 = TargetFrame + 16;
  v21 = v14;
  ValidateLocalCookies(v14);
  __except_validate_context_record(a3);
  v4 = *((_DWORD *)TargetFrame + 3);
  if ( (ExceptionRecord->ExceptionFlags & 0x66) != 0 )
  {
    if ( v4 != -2 )
    {
      _EH4_LocalUnwind(v3, &__security_cookie);
LABEL_14:
      ValidateLocalCookies(v21);
    }
  }
  else
  {
    v17[0] = ExceptionRecord;
    v17[1] = a3;
    *((_DWORD *)TargetFrame - 1) = v17;
    if ( v4 != -2 )
    {
      do
      {
        v5 = v4 + 2 * (v4 + 2);
        v6 = *(_DWORD *)(v21 + 4 * v5);
        v7 = v21 + 4 * v5;
        v8 = *(_DWORD *)(v7 + 4);
        v18 = v7;
        if ( v8 != 0 )
        {
          v9 = _EH4_CallFilterFunc(v8, v3);
          v10 = 1;
          v22 = 1;
          if ( v9 < 0 )
          {
            v20 = 0;
            goto LABEL_14;
          }
          if ( v9 > 0 )
          {
            v12 = ExceptionRecord;
            if ( ExceptionRecord->ExceptionCode == -529697949 && __DestructExceptionObject != nullptr )
            {
              if ( _IsNonwritableInCurrentImage(&off_42A614) != 0 )
              {
                __DestructExceptionObject((int)ExceptionRecord);
                v3 = v19;
              }
              v12 = ExceptionRecord;
            }
            _EH4_GlobalUnwind2(TargetFrame, v12);
            v13 = TargetFrame;
            if ( *((_DWORD *)TargetFrame + 3) != v4 )
            {
              _EH4_LocalUnwind(v3, &__security_cookie);
              v13 = TargetFrame;
            }
            v15 = v21;
            *((_DWORD *)v13 + 3) = v6;
            ValidateLocalCookies(v15);
            _EH4_TransferToHandler(*(_DWORD *)(v18 + 8), v3);
            __debugbreak();
          }
        }
        else
        {
          v10 = v22;
        }
        v4 = v6;
      }
      while ( v6 != -2 );
      if ( v10 == 0 )
        return v20;
      goto LABEL_14;
    }
  }
  return v20;
}

