// gettime.exe @ 0x4232cc size=17

bool __acrt_initialize_heap()
{
  hHeap = GetProcessHeap();
  return hHeap != nullptr;
}

