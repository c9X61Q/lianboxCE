// gettime.exe @ 0x40d500 size=28

void __stdcall __vcrt_freefls(void *Block)
{
  if ( Block != nullptr && Block != &unk_4386B4 )
    free(Block);
}

