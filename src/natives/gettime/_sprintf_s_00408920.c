// gettime.exe @ 0x408920 size=55

int sprintf_s(char *const Buffer, const size_t BufferCount, const char *const Format, ...)
{
  va_list va; // [esp+1Ch] [ebp+14h] BYREF

  va_start(va, Format);
  return _vsprintf_s_l(Buffer, BufferCount, Format, nullptr, va);
}

