// busybox.exe @ 0x430878 size=245

char **__usercall sub_430878@<eax>(char *a1@<eax>)
{
  char *v1; // ebx
  DWORD CurrentDirectoryA; // eax
  DWORD nBufferLength; // ebx
  CHAR *v4; // esi
  CHAR *lpBuffer; // eax
  char **v6; // eax
  char **v8; // [esp+Ch] [ebp-74h]
  char v9[112]; // [esp+10h] [ebp-70h] BYREF

  v1 = a1;
  if ( sub_444C28(a1, v9) == 0 )
  {
    if ( (unsigned __int8)((*v1 | 0x20) - 97) <= 0x19u && v1[1] == 58 )
    {
      v4 = nullptr;
    }
    else
    {
      CurrentDirectoryA = GetCurrentDirectoryA(0, nullptr);
      nBufferLength = CurrentDirectoryA;
      if ( CurrentDirectoryA == 0
        || (lpBuffer = (CHAR *)malloc(CurrentDirectoryA + 1), v4 = lpBuffer, lpBuffer == nullptr) )
      {
        v4 = nullptr;
LABEL_16:
        v6 = nullptr;
LABEL_13:
        v8 = v6;
        free(v4);
        return v8;
      }
      v6 = (char **)GetCurrentDirectoryA(nBufferLength, lpBuffer);
      if ( v6 == nullptr )
        goto LABEL_13;
      v1 = v4;
    }
    if ( (unsigned __int8)((*v1 | 0x20) - 97) <= 0x19u )
    {
      v6 = nullptr;
      if ( v1[1] == 58 )
      {
        byte_473488 = *v1;
        word_473489 = 58;
        byte_473484 = *v1;
        byte_473485 = v1[1];
        word_473486 = 92;
        v6 = off_473498;
      }
      goto LABEL_13;
    }
    goto LABEL_16;
  }
  return nullptr;
}

