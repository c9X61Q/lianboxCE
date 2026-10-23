// busybox.exe @ 0x4329dc size=124

BOOL __usercall sub_4329DC@<eax>(_BYTE *a1@<eax>, int a2@<ecx>)
{
  _BYTE *v4; // eax
  _BYTE *v5; // edi
  _BYTE *v6; // edx
  int v7; // eax

  v4 = sub_416E24(a1);
  v5 = nullptr;
  if ( *v4 == 0 )
  {
    while ( v4 != a1 )
    {
      if ( *(v4 - 1) != 47 )
      {
        v6 = v4;
        do
          --v6;
        while ( a1 != v6 && *(v6 - 1) != 47 );
        goto LABEL_8;
      }
      --v4;
    }
    v5 = nullptr;
    if ( v4[1] != 0 )
    {
      ++v4;
      v6 = a1;
LABEL_8:
      *v4 = 0;
      v5 = v4;
      v4 = v6;
    }
  }
  v7 = sub_4312E8(*(_DWORD *)(a2 + 8), (int)v4, *(_BYTE *)(a2 + 12) != 0 ? 0x10 : 0);
  if ( v5 != nullptr )
    *v5 = 47;
  return v7 == 0;
}

