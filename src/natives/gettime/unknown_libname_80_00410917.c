// gettime.exe @ 0x410917 size=103

// Microsoft VisualC universal runtime
void __thiscall unknown_libname_80(int *this, void *Src, unsigned int a3, _DWORD *a4, int a5)
{
  int v6; // eax
  int v7; // esi
  bool v8; // zf
  _DWORD *v9; // eax
  size_t v10; // esi

  if ( a3 != 0 )
  {
    v6 = *this;
    v7 = *(_DWORD *)(*this + 4);
    if ( *(_DWORD *)(*this + 8) == v7 )
    {
      v8 = *(_BYTE *)(v6 + 12) == 0;
      v9 = a4;
      if ( !v8 )
      {
LABEL_8:
        *v9 += a3;
        return;
      }
LABEL_10:
      *v9 = -1;
      return;
    }
    v10 = v7 - *(_DWORD *)(v6 + 8);
    if ( v10 >= a3 )
      v10 = a3;
    memmove(*(void **)v6, Src, v10);
    *(_DWORD *)*this += v10;
    *(_DWORD *)(*this + 8) += v10;
    v9 = a4;
    if ( *(_BYTE *)(*this + 12) != 0 )
      goto LABEL_8;
    if ( v10 != a3 )
      goto LABEL_10;
    *a4 += v10;
  }
}

