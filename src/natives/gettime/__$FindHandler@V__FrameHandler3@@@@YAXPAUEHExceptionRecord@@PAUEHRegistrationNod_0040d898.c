// gettime.exe @ 0x40d898 size=937

int __cdecl FindHandler<__FrameHandler3>(
        struct EHExceptionRecord *ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        char a6,
        int a7,
        struct EHRegistrationNode *TargetFrame)
{
  struct _s_FuncInfo *v8; // edi
  __ehstate_t CurrentState; // eax
  int v10; // ecx
  struct EHExceptionRecord *v11; // ebx
  int v12; // esi
  int result; // eax
  struct _CONTEXT *v14; // edx
  struct EHRegistrationNode *v15; // esi
  struct _s_ESTypeList *v16; // edx
  int v17; // eax
  int v18; // ecx
  int v19; // ecx
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // edx
  __int128 *v22; // eax
  int *v23; // edi
  int v24; // esi
  const struct _s_ESTypeList *ESTypes; // eax
  struct _s_ESTypeList *v26; // [esp-4h] [ebp-74h]
  int v27[5]; // [esp+Ch] [ebp-64h] BYREF
  __int128 v28; // [esp+20h] [ebp-50h] BYREF
  int v29; // [esp+30h] [ebp-40h] BYREF
  _DWORD pExceptionObject[2]; // [esp+34h] [ebp-3Ch] BYREF
  unsigned int v31; // [esp+3Ch] [ebp-34h]
  _DWORD v32[2]; // [esp+40h] [ebp-30h] BYREF
  int v33; // [esp+48h] [ebp-28h]
  int v34; // [esp+4Ch] [ebp-24h]
  int *arrayOfCatchableTypes; // [esp+50h] [ebp-20h]
  int v36; // [esp+54h] [ebp-1Ch]
  int v37; // [esp+58h] [ebp-18h]
  int v38; // [esp+5Ch] [ebp-14h]
  int v39; // [esp+60h] [ebp-10h]
  struct _s_ESTypeList *v40; // [esp+64h] [ebp-Ch]
  int v41; // [esp+68h] [ebp-8h]
  struct _CONTEXT *v42; // [esp+6Ch] [ebp-4h]

  v8 = a5;
  v39 = 0;
  LOBYTE(v37) = 0;
  CurrentState = __FrameHandler3::GetCurrentState(a2, a4, a5);
  v10 = CurrentState;
  v41 = CurrentState;
  if ( CurrentState < -1 || CurrentState >= a5->maxState )
    goto LABEL_67;
  v11 = ExceptionRecord;
  if ( ExceptionRecord->ExceptionCode == -529697949
    && ExceptionRecord->NumberParameters == 3
    && (ExceptionRecord->params.magicNumber == 429065504
     || ExceptionRecord->params.magicNumber == 429065505
     || ExceptionRecord->params.magicNumber == 429065506)
    && (v12 = 0, ExceptionRecord->params.pThrowInfo == nullptr) )
  {
    result = __vcrt_getptd();
    if ( *(_DWORD *)(result + 16) == 0 )
      return result;
    v11 = *(struct EHExceptionRecord **)(__vcrt_getptd() + 16);
    LOBYTE(v37) = 1;
    v42 = *(struct _CONTEXT **)(__vcrt_getptd() + 20);
    if ( v11 == nullptr
      || v11->ExceptionCode == -529697949
      && v11->NumberParameters == 3
      && (v11->params.magicNumber == 429065504
       || v11->params.magicNumber == 429065505
       || v11->params.magicNumber == 429065506)
      && v11->params.pThrowInfo == nullptr )
    {
      goto LABEL_67;
    }
    if ( *(_DWORD *)(__vcrt_getptd() + 28) != 0 )
    {
      v40 = *(struct _s_ESTypeList **)(__vcrt_getptd() + 28);
      v26 = v40;
      *(_DWORD *)(__vcrt_getptd() + 28) = 0;
      if ( IsInExceptionSpec(v11, v26) == 0 )
      {
        if ( v40->nCount > 0 )
        {
          do
          {
            if ( (unsigned __int8)type_info::operator==(&std::bad_exception `RTTI Type Descriptor') != 0 )
            {
              __DestructExceptionObject((int)v11);
              sub_40DF23(pExceptionObject);
              _CxxThrowException(pExceptionObject, (_ThrowInfo *)&_TI2_AVbad_exception_std__);
            }
            v12 += 16;
            ++v39;
          }
          while ( v39 < v40->nCount );
        }
LABEL_62:
        terminate();
      }
    }
    v14 = v42;
    v10 = v41;
  }
  else
  {
    v14 = a3;
    v42 = a3;
  }
  v32[0] = a5;
  v32[1] = 0;
  if ( v11->ExceptionCode == -529697949
    && v11->NumberParameters == 3
    && (v11->params.magicNumber == 429065504
     || v11->params.magicNumber == 429065505
     || v11->params.magicNumber == 429065506) )
  {
    v15 = TargetFrame;
    if ( a5->nTryBlocks != 0 )
    {
      __FrameHandler3::GetRangeOfTrysToCheck(&v29, (int)v32, v10, (int)a4, (int)a5, a7);
      v16 = (struct _s_ESTypeList *)pExceptionObject[0];
      v17 = v29;
      v33 = v29;
      v40 = (struct _s_ESTypeList *)pExceptionObject[0];
      if ( pExceptionObject[0] < v31 )
      {
        v18 = 20 * pExceptionObject[0];
        v36 = 20 * pExceptionObject[0];
        do
        {
          qmemcpy(v27, (const void *)(v18 + *(_DWORD *)(*(_DWORD *)v17 + 16)), sizeof(v27));
          if ( v27[0] <= v41 && v41 <= v27[1] )
          {
            v19 = 0;
            v39 = 0;
            if ( v27[3] != 0 )
            {
              pCatchableTypeArray = v11->params.pThrowInfo->pCatchableTypeArray;
              nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
              arrayOfCatchableTypes = (int *)pCatchableTypeArray->arrayOfCatchableTypes;
              v22 = (__int128 *)v27[4];
              v34 = nCatchableTypes;
              v38 = v27[4];
              while ( 1 )
              {
                v28 = *v22;
                v23 = arrayOfCatchableTypes;
                v24 = nCatchableTypes;
                if ( nCatchableTypes > 0 )
                  break;
LABEL_41:
                ++v19;
                ++v22;
                v39 = v19;
                v38 = (int)v22;
                if ( v19 == v27[3] )
                  goto LABEL_44;
              }
              while ( TypeMatchHelper<__FrameHandler3>(&v28, *v23, v11->params.pThrowInfo) == 0 )
              {
                --v24;
                ++v23;
                if ( v24 <= 0 )
                {
                  v19 = v39;
                  v22 = (__int128 *)v38;
                  nCatchableTypes = v34;
                  goto LABEL_41;
                }
              }
              CatchIt<__FrameHandler3>((PEXCEPTION_RECORD)v11, a2, v42, a4, a5, (int)&v28, *v23, v27, a7, TargetFrame);
LABEL_44:
              v16 = v40;
            }
          }
          v16 = (struct _s_ESTypeList *)((char *)v16 + 1);
          v17 = v33;
          v18 = v36 + 20;
          v40 = v16;
          v36 += 20;
        }
        while ( (unsigned int)v16 < v31 );
        v8 = a5;
        v15 = TargetFrame;
      }
    }
    if ( a6 != 0 )
      __DestructExceptionObject((int)v11);
    if ( (*(_DWORD *)v8 & 0x1FFFFFFFu) >= 0x19930521
      && (v8->pESTypeList != nullptr || (v8->EHFlags & 4) != 0 && a7 == 0) )
    {
      if ( (v8->EHFlags & 4) != 0 )
      {
        *(_DWORD *)(__vcrt_getptd() + 16) = v11;
        *(_DWORD *)(__vcrt_getptd() + 20) = v42;
        goto LABEL_62;
      }
      if ( IsInExceptionSpec(v11, v8->pESTypeList) == 0 )
      {
        *(_DWORD *)(__vcrt_getptd() + 16) = v11;
        *(_DWORD *)(__vcrt_getptd() + 20) = v42;
        if ( v15 == nullptr )
          v15 = a2;
        _UnwindNestedFrames((struct _EXCEPTION_REGISTRATION_RECORD **)v11, v15, (PEXCEPTION_RECORD)v11);
        __FrameHandler3::FrameUnwindToEmptyState(a2, a4, v8);
        ESTypes = __FrameHandler3::getESTypes(v8);
        CallUnexpected(ESTypes);
      }
    }
  }
  else if ( a5->nTryBlocks != 0 )
  {
    if ( a6 != 0 )
      goto LABEL_67;
    FindHandlerForForeignException<__FrameHandler3>((PEXCEPTION_RECORD)v11, a2, v14, a4, a5, v10, a7, TargetFrame);
  }
  result = __vcrt_getptd();
  if ( *(_DWORD *)(result + 28) != 0 )
LABEL_67:
    abort();
  return result;
}

