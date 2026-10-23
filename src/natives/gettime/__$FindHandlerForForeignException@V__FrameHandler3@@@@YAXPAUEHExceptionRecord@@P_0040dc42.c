// gettime.exe @ 0x40dc42 size=309

void __cdecl FindHandlerForForeignException<__FrameHandler3>(
        PEXCEPTION_RECORD ExceptionRecord,
        struct EHRegistrationNode *a2,
        struct _CONTEXT *a3,
        void *a4,
        struct _s_FuncInfo *a5,
        int a6,
        int a7,
        struct EHRegistrationNode *TargetFrame)
{
  PVOID v8; // esi
  unsigned int v9; // edx
  int v10; // eax
  int v11; // ecx
  int v12; // eax
  int v13; // ecx
  int v14[5]; // [esp+4h] [ebp-38h] BYREF
  int v15; // [esp+18h] [ebp-24h] BYREF
  unsigned int v16; // [esp+1Ch] [ebp-20h]
  unsigned int v17; // [esp+24h] [ebp-18h]
  _DWORD v18[2]; // [esp+28h] [ebp-14h] BYREF
  int v19; // [esp+30h] [ebp-Ch]
  int v20; // [esp+34h] [ebp-8h]
  unsigned int v21; // [esp+38h] [ebp-4h]

  if ( ExceptionRecord->ExceptionCode != -2147483645 )
  {
    if ( *(_DWORD *)(__vcrt_getptd() + 8) == 0
      || (v8 = EncodePointer(nullptr), *(PVOID *)(__vcrt_getptd() + 8) == v8)
      || ExceptionRecord->ExceptionCode == -532459699
      || ExceptionRecord->ExceptionCode == -532462766
      || _CallSETranslator((struct EHExceptionRecord *)ExceptionRecord, a2, a3, a4, a5, a7, TargetFrame) == 0 )
    {
      v18[0] = a5;
      v18[1] = 0;
      if ( a5->nTryBlocks == 0 )
        abort();
      __FrameHandler3::GetRangeOfTrysToCheck(&v15, (int)v18, a6, (int)a4, (int)a5, a7);
      v9 = v16;
      v10 = v15;
      v19 = v15;
      v21 = v16;
      if ( v16 < v17 )
      {
        v11 = 20 * v16;
        v20 = 20 * v16;
        do
        {
          qmemcpy(v14, (const void *)(v11 + *(_DWORD *)(*(_DWORD *)v10 + 16)), sizeof(v14));
          if ( v14[0] <= a6 && a6 <= v14[1] )
          {
            v12 = 16 * v14[3] + v14[4] - 16;
            v13 = *(_DWORD *)(v12 + 4);
            if ( (v13 == 0 || *(_BYTE *)(v13 + 8) == 0) && (*(_BYTE *)v12 & 0x40) == 0 )
            {
              CatchIt<__FrameHandler3>(
                ExceptionRecord,
                a2,
                a3,
                a4,
                a5,
                16 * v14[3] + v14[4] - 16,
                0,
                v14,
                a7,
                TargetFrame);
              v9 = v21;
            }
          }
          ++v9;
          v10 = v19;
          v11 = v20 + 20;
          v21 = v9;
          v20 += 20;
        }
        while ( v9 < v17 );
      }
    }
  }
}

