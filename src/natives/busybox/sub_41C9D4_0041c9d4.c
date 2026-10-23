// busybox.exe @ 0x41c9d4 size=97

BOOL __usercall sub_41C9D4@<eax>(DWORD a1@<eax>, COORD a2@<edx>)
{
  void *hConsoleOutput; // ebx
  DWORD NumberOfCharsWritten[5]; // [esp+14h] [ebp-14h] BYREF

  hConsoleOutput = (void *)sub_433614();
  FillConsoleOutputCharacterA(hConsoleOutput, 32, a1, a2, NumberOfCharsWritten);
  return FillConsoleOutputAttribute(hConsoleOutput, word_4734F8, a1, a2, NumberOfCharsWritten);
}

