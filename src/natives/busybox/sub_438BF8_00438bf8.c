// busybox.exe @ 0x438bf8 size=46

int sub_438BF8(const void *a1, int a2, ...)
{
  _BYTE v3[224]; // [esp+0h] [ebp-E8h] BYREF
  va_list va; // [esp+F8h] [ebp+10h] BYREF

  va_start(va, a2);
  qmemcpy(v3, a1, sizeof(v3));
  return sub_438C28(va, a2);
}

