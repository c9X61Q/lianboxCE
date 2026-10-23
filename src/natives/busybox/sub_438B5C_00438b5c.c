// busybox.exe @ 0x438b5c size=42

int sub_438B5C(int a1, int a2, int a3, ...)
{
  va_list va; // [esp+F4h] [ebp+14h] BYREF

  va_start(va, a3);
  sub_438B88(32, a2);
  return sub_438C28(va, a1);
}

