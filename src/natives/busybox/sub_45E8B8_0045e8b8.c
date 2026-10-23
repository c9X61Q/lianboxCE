// busybox.exe @ 0x45e8b8 size=128

char __usercall sub_45E8B8@<al>(char result@<al>, int a2@<edx>)
{
  int v2; // ebx
  int v3; // ebx
  _DWORD v4[4]; // [esp-10h] [ebp-10h] BYREF

  if ( result != 0 )
  {
    byte_4734B0 = 0;
    if ( a2 == 1 )
    {
      v2 = *(_DWORD *)(dword_485FEC + 224);
    }
    else
    {
      if ( a2 != 2 )
      {
        v3 = dword_485FF0 + 62;
LABEL_8:
        sub_452830(v4);
        sub_42DEE4(v3);
        sub_4631A8();
        dword_4731A0 = sub_47188C();
        return sub_44D988(v4);
      }
      v2 = *(_DWORD *)(dword_485FEC + 240);
    }
    v3 = v2 + 4;
    goto LABEL_8;
  }
  return result;
}

