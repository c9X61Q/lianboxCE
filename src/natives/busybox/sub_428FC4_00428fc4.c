// busybox.exe @ 0x428fc4 size=74

int sub_428FC4(int a1, int a2, ...)
{
  int result; // eax
  int v3; // [esp+Ch] [ebp-8h]
  void *Block; // [esp+10h] [ebp-4h] BYREF
  va_list va; // [esp+20h] [ebp+Ch] BYREF

  va_start(va, a2);
  result = sub_407D10(&Block, a2, (int)va);
  if ( result >= 0 )
  {
    v3 = sub_43269C(result, Block);
    free(Block);
    return v3;
  }
  return result;
}

