// numcomp.exe @ 0x401087 size=10

void *sub_401087()
{
  void *v0; // edx

  v0 = &unk_42CFB0;
  dword_42D080 = (int)&unk_42CFB0;
  if ( dword_42D07C != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42D07C + 4) + dword_42D07C + 60) = &unk_42CFB0;
    v0 = (void *)dword_42D080;
  }
  if ( dword_42D084 != 0 )
  {
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42D084 + 4) + dword_42D084 + 60) = v0;
    v0 = (void *)dword_42D080;
  }
  if ( dword_42D088 != 0 )
    *(_DWORD *)(*(_DWORD *)(*(_DWORD *)dword_42D088 + 4) + dword_42D088 + 60) = v0;
  return &unk_42CFA9;
}

