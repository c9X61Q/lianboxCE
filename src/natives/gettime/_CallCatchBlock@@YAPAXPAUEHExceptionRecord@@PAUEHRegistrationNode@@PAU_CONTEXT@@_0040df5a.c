// gettime.exe @ 0x40df5a size=452

void *__cdecl CallCatchBlock(
        struct EHExceptionRecord *a1,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        const struct _s_FuncInfo *a4,
        void *a5,
        int a6,
        unsigned int a7)
{
  void *v7; // ebx
  int v9; // [esp+10h] [ebp-4Ch] BYREF
  int v10; // [esp+18h] [ebp-44h]
  int v11; // [esp+1Ch] [ebp-40h]
  int v12; // [esp+20h] [ebp-3Ch]
  int v13; // [esp+24h] [ebp-38h]
  _DWORD *v14; // [esp+28h] [ebp-34h]
  __ehstate_t state; // [esp+2Ch] [ebp-30h]
  void *v16; // [esp+40h] [ebp-1Ch]
  CPPEH_RECORD ms_exc; // [esp+44h] [ebp-18h]

  v16 = a5;
  v11 = 0;
  state = a2[-1].state;
  v14 = _CreateFrameInfo(&v9, (int)a1->params.pExceptionObject);
  v13 = *(_DWORD *)(__vcrt_getptd() + 16);
  v12 = *(_DWORD *)(__vcrt_getptd() + 20);
  *(_DWORD *)(__vcrt_getptd() + 16) = a1;
  *(_DWORD *)(__vcrt_getptd() + 20) = a3;
  v10 = 1;
  ms_exc.registration.TryLevel = 1;
  v7 = _CallCatchBlock2(a2, a4, a5, a6, a7);
  v16 = v7;
  ms_exc.registration.TryLevel = -2;
  v10 = 0;
  a2[-1].state = state;
  _FindAndUnlinkFrame((int)v14);
  *(_DWORD *)(__vcrt_getptd() + 16) = v13;
  *(_DWORD *)(__vcrt_getptd() + 20) = v12;
  if ( a1->ExceptionCode == -529697949
    && a1->NumberParameters == 3
    && (a1->params.magicNumber == 429065504 || a1->params.magicNumber == 429065505
                                            || a1->params.magicNumber == 429065506)
    && v11 == 0
    && v7 != nullptr
    && _IsExceptionObjectToBeDestroyed((int)a1->params.pExceptionObject) != 0 )
  {
    __DestructExceptionObject((int)a1);
  }
  return v7;
}

