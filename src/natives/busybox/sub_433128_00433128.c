// busybox.exe @ 0x433128 size=237

char *__usercall sub_433128@<eax>(char *String@<eax>, int *a2@<edx>, int *a3@<ecx>)
{
  char v5; // cl
  char *v6; // ebp
  int v7; // eax
  int v8; // esi
  void *v9; // ebp
  int v10; // eax
  char *EndPtr; // [esp+Ch] [ebp-14h] BYREF

  EndPtr = String;
  v5 = *String;
  if ( (unsigned __int8)(*String - 48) > 9u )
  {
    if ( v5 == 36 )
    {
      *a2 = -1;
      EndPtr = String + 1;
    }
    else if ( v5 == 92 || v5 == 47 )
    {
      if ( v5 == 92 )
        EndPtr = String + 1;
      v6 = ++EndPtr;
      v7 = sub_4399C4();
      v8 = v7;
      if ( v7 != 0 )
      {
        v9 = (void *)sub_41F49C((int)v6, v7);
        v10 = sub_4728CC();
        *a3 = v10;
        dword_485C5C = v10;
        sub_4716D4(*(&MultiByteStr + 1), v9);
        free(v9);
      }
      else
      {
        *a3 = dword_485C5C;
        if ( dword_485C5C == 0 )
          sub_418210("no previous regexp");
      }
      EndPtr += v8 + 1;
    }
  }
  else
  {
    *a2 = strtol(String, &EndPtr, 10);
  }
  return (char *)(EndPtr - String);
}

