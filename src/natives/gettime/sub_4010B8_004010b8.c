// gettime.exe @ 0x4010b8 size=10

void *sub_4010B8()
{
  void *v0; // edx

  v0 = &unk_438128;
  dword_438288 = (int)&unk_438128;
  if ( dword_438284 != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_438284 + 4) + dword_438284 + 60) = &unk_438128;
    v0 = (void *)dword_438288;
  }
  if ( dword_43828C != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_43828C + 4) + dword_43828C + 60) = v0;
    v0 = (void *)dword_438288;
  }
  if ( dword_438290 != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_438290 + 4) + dword_438290 + 60) = v0;
  return &unk_438121;
}

