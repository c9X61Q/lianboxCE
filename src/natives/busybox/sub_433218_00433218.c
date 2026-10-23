// busybox.exe @ 0x433218 size=576

void *__usercall sub_433218@<eax>(DWORD a1@<eax>, const char *a2@<edx>, int a3@<ecx>)
{
  int v5; // eax
  void *v6; // esi
  int (__stdcall *v7)(HANDLE, _BYTE *, int); // ebp
  int (__stdcall *v8)(void *, _DWORD *, int, unsigned int *); // edi
  HANDLE v9; // eax
  void *v10; // ebx
  unsigned int v11; // edi
  const char *v12; // eax
  size_t v13; // eax
  void *v14; // eax
  int (__stdcall *v16)(void *, _DWORD, _BYTE *, int); // [esp+40h] [ebp-2A4h]
  HMODULE ModuleHandleA; // [esp+40h] [ebp-2A4h]
  unsigned int v19; // [esp+48h] [ebp-29Ch] BYREF
  _DWORD v20[32]; // [esp+4Ch] [ebp-298h] BYREF
  _BYTE v21[260]; // [esp+CCh] [ebp-218h] BYREF
  _BYTE Buffer[276]; // [esp+1D0h] [ebp-114h] BYREF

  v5 = sub_435244("psapi.dll", "GetProcessImageFileNameA", (int)&unk_473540);
  if ( v5 == 0 )
    return nullptr;
  v7 = (int (__stdcall *)(HANDLE, _BYTE *, int))v5;
  v8 = (int (__stdcall *)(void *, _DWORD *, int, unsigned int *))sub_435244(
                                                                   "psapi.dll",
                                                                   "EnumProcessModules",
                                                                   (int)&unk_473508);
  if ( v8 == nullptr )
    return nullptr;
  v16 = (int (__stdcall *)(void *, _DWORD, _BYTE *, int))sub_435244(
                                                           "psapi.dll",
                                                           "GetModuleFileNameExA",
                                                           (int)&unk_473538);
  if ( v16 == nullptr )
    return nullptr;
  v9 = OpenProcess(0x410u, false, a1);
  v10 = v9;
  if ( v9 == nullptr )
    return nullptr;
  if ( a2 == nullptr && v7(v9, v21, 260) != 0 )
    a2 = sub_416E24(v21);
  if ( v8(v10, v20, 128, &v19) == 0 )
    goto LABEL_10;
  v11 = 0;
  while ( a2 != nullptr )
  {
    if ( v11 >= v19 >> 2 )
      break;
    if ( v16(v10, v20[v11], Buffer, 260) != 0 )
    {
      v12 = sub_416E24(Buffer);
      if ( stricmp(v12, a2) == 0 )
        break;
    }
    ++v11;
  }
  if ( v11 != v19 >> 2
    && (ModuleHandleA = GetModuleHandleA(nullptr),
        ReadProcessMemory(
          v10,
          (LPCVOID)(v20[v11] + "BusyBox v1.33.0.git (2020-10-27 01:01:35 -03)" - (const char *)ModuleHandleA),
          Buffer,
          0x80u,
          nullptr))
    && (v13 = strlen("BusyBox v1.33.0.git (2020-10-27 01:01:35 -03)"),
        memcmp(Buffer, "BusyBox v1.33.0.git (2020-10-27 01:01:35 -03)", v13) == 0)
    && ReadProcessMemory(v10, (LPCVOID)(v20[v11] + a3 - (_DWORD)ModuleHandleA), Buffer, 0x80u, nullptr) )
  {
    Buffer[127] = 0;
    v14 = (void *)sub_47188C();
    v6 = sub_415D34(v14);
  }
  else
  {
LABEL_10:
    v6 = nullptr;
  }
  CloseHandle(v10);
  return v6;
}

