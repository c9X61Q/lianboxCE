// busybox.exe @ 0x4182bc size=107

int __usercall sub_4182BC@<eax>(int Radix@<ecx>, char *a2@<eax>, char **a3@<edx>)
{
  char **EndPtr; // esi
  char v6; // al
  int v8; // eax
  char *v9; // [esp+Ch] [ebp-10h] BYREF

  EndPtr = &v9;
  if ( a3 != nullptr )
    EndPtr = a3;
  *EndPtr = a2;
  v6 = *a2;
  if ( *a2 == 45 )
    v6 = a2[1];
  if ( (unsigned __int8)(v6 - 48) <= 9u || (unsigned __int8)((v6 | 0x20) - 97) <= 0x19u )
  {
    *_errno() = 0;
    v8 = strtol(a2, EndPtr, Radix);
    return sub_437504(EndPtr, v8 >> 31);
  }
  else
  {
    *_errno() = 34;
    return -1;
  }
}

