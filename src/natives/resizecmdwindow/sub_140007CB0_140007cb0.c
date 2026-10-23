// resizecmdwindow.exe @ 0x140007cb0 size=20

void __fastcall sub_140007CB0(__int64 a1)
{
  void *v1; // rcx

  v1 = *(void **)(a1 + 8);
  if ( v1 != nullptr )
    j_j_free(v1);
}

