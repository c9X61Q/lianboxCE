// busybox.exe @ 0x40ffb0 size=227

int *__cdecl sub_40FFB0(int a1)
{
  int v1; // esi
  int *result; // eax
  bool v3; // zf
  int *v4; // [esp+1Ch] [ebp-10h]

  sub_40FE90(0);
  if ( a1 > 9 )
    goto LABEL_2;
  result = (int *)dword_485920[a1];
  if ( result != nullptr )
  {
    v3 = dword_485948 == 2;
    dword_485920[a1] = *result;
    if ( !v3 )
      goto LABEL_4;
LABEL_8:
    v4 = result;
    LeaveCriticalSection(&stru_485960);
    result = v4;
    goto LABEL_4;
  }
  result = (int *)off_4730E4;
  v1 = 1 << a1;
  if ( ((unsigned int)(4 * (1 << a1) + 27) >> 3) + ((off_4730E4 - &unk_485020) >> 3) > 0x120 )
  {
LABEL_2:
    v1 = 1 << a1;
    result = (int *)malloc((4 * (1 << a1) + 27) & 0xFFFFFFF8);
    if ( result == nullptr )
      return result;
  }
  else
  {
    off_4730E4 = (_UNKNOWN *)((char *)off_4730E4 + ((4 * (1 << a1) + 27) & 0xFFFFFFF8));
  }
  v3 = dword_485948 == 2;
  result[1] = a1;
  result[2] = v1;
  if ( v3 )
    goto LABEL_8;
LABEL_4:
  result[4] = 0;
  result[3] = 0;
  return result;
}

