// gettime.exe @ 0x40d77f size=153

void __cdecl BuildCatchObjectInternal<__FrameHandler3>(int a1, int *a2, int *a3, int a4)
{
  int *v4; // edi
  int v5; // eax
  void *v6; // eax
  void *v7; // eax

  if ( *a3 >= 0 )
    v4 = (int *)((char *)a2 + a3[2] + 12);
  else
    v4 = a2;
  v5 = BuildCatchObjectHelperInternal<__FrameHandler3>(a1, a2, a3, a4) - 1;
  if ( v5 != 0 )
  {
    if ( v5 == 1 )
    {
      v6 = (void *)__AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
      _CallMemberFunction2(v4, *(void *const *)(a4 + 24), v6, 1);
    }
  }
  else
  {
    v7 = (void *)__AdjustPointer(*(_DWORD *)(a1 + 24), (_DWORD *)(a4 + 8));
    _CallMemberFunction1(v4, *(void *const *)(a4 + 24), v7);
  }
}

