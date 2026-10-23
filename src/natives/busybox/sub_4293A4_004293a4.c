// busybox.exe @ 0x4293a4 size=92

int __usercall sub_4293A4@<eax>(void *a1@<eax>)
{
  HANDLE hTargetProcessHandle; // esi
  HANDLE hSourceProcessHandle; // eax
  HANDLE TargetHandle; // [esp+1Ch] [ebp-10h] BYREF

  hTargetProcessHandle = GetCurrentProcess();
  hSourceProcessHandle = GetCurrentProcess();
  if ( DuplicateHandle(hSourceProcessHandle, a1, hTargetProcessHandle, &TargetHandle, 0, true, 2u) )
    return (int)TargetHandle;
  else
    return -1;
}

