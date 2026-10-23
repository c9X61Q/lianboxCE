// gettime.exe @ 0x40e2a7 size=153

char __cdecl IsInExceptionSpec(struct EHExceptionRecord *a1, const struct _s_ESTypeList *a2)
{
  int nCount; // edi
  char v3; // bl
  int v4; // edx
  CatchableTypeArray *pCatchableTypeArray; // eax
  int nCatchableTypes; // ecx
  int *arrayOfCatchableTypes; // eax
  int *v8; // ecx
  char *v9; // eax
  int *v11; // [esp+Ch] [ebp-18h]
  char *v12; // [esp+10h] [ebp-14h]
  int v13; // [esp+14h] [ebp-10h]
  int *v14; // [esp+18h] [ebp-Ch]
  int v15; // [esp+1Ch] [ebp-8h]
  int v16; // [esp+20h] [ebp-4h]

  if ( a2 == nullptr )
    abort();
  nCount = a2->nCount;
  v3 = 0;
  if ( a2->nCount > 0 )
  {
    v4 = 0;
    v16 = 0;
    pCatchableTypeArray = a1->params.pThrowInfo->pCatchableTypeArray;
    nCatchableTypes = pCatchableTypeArray->nCatchableTypes;
    arrayOfCatchableTypes = (int *)pCatchableTypeArray->arrayOfCatchableTypes;
    v13 = nCatchableTypes;
    v11 = arrayOfCatchableTypes;
    do
    {
      v8 = arrayOfCatchableTypes;
      v14 = arrayOfCatchableTypes;
      v15 = v13;
      if ( v13 > 0 )
      {
        v9 = (char *)a2->pTypeArray + v4;
        v12 = v9;
        while ( TypeMatchHelper<__FrameHandler3>((int)v9, *v8, a1->params.pThrowInfo) == 0 )
        {
          v8 = v14 + 1;
          --v15;
          ++v14;
          v9 = v12;
          if ( v15 <= 0 )
            goto LABEL_10;
        }
        v3 = 1;
LABEL_10:
        v4 = v16;
      }
      arrayOfCatchableTypes = v11;
      v4 += 16;
      v16 = v4;
      --nCount;
    }
    while ( nCount != 0 );
  }
  return v3;
}

