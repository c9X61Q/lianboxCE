// busybox.exe @ 0x4708bc size=48

int sub_4708BC(int a1, ...)
{
  int v1; // ecx
  int v3; // [esp+Ch] [ebp-4h] BYREF
  va_list va; // [esp+18h] [ebp+8h] BYREF

  va_start(va, a1);
  if ( sub_407D10(&v3, a1, (int)va) < 0 )
    sub_416F78(v1);
  return v3;
}

