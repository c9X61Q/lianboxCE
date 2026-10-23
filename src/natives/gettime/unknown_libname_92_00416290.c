// gettime.exe @ 0x416290 size=258

// Microsoft VisualC universal runtime
int __thiscall unknown_libname_92(_DWORD **this)
{
  _DWORD *v1; // esi
  uintptr_t v2; // ebx
  uintptr_t *i; // edi
  int v4; // esi
  void *v5; // ebx
  int v6; // eax
  unsigned int v7; // esi
  size_t v8; // edi
  char *v9; // ecx
  uintptr_t *v10; // eax
  uintptr_t v11; // ecx
  char *v14; // [esp+10h] [ebp-4h]
  char *v15; // [esp+10h] [ebp-4h]

  v1 = (_DWORD *)**this;
  if ( v1 != nullptr )
  {
    v2 = __security_cookie ^ *v1;
    i = (uintptr_t *)__ROR4__(__security_cookie ^ v1[1], __security_cookie & 0x1F);
    v4 = __ROR4__(__security_cookie ^ v1[2], __security_cookie & 0x1F);
    v5 = (void *)__ROR4__(v2, __security_cookie & 0x1F);
    if ( i != (uintptr_t *)v4 )
    {
LABEL_12:
      *i = unknown_libname_88(**(this + 1));
      *(_DWORD *)**this = unknown_libname_88((int)v5);
      *(_DWORD *)(**this + 4) = unknown_libname_88((int)(i + 1));
      *(_DWORD *)(**this + 8) = unknown_libname_88(v4);
      return 0;
    }
    v6 = 512;
    v7 = (v4 - (int)v5) >> 2;
    if ( v7 <= 0x200 )
      v6 = v7;
    v8 = v6 + v7;
    if ( v6 + v7 == 0 )
      v8 = 32;
    if ( v8 >= v7 && (v14 = (char *)_recalloc_base(v5, v8, 4u), _free_base(nullptr), v9 = v14, v14 != nullptr)
      || (v8 = v7 + 4, v15 = (char *)_recalloc_base(v5, v7 + 4, 4u), _free_base(nullptr), v9 = v15, v15 != nullptr) )
    {
      v10 = (uintptr_t *)&v9[4 * v7];
      v5 = v9;
      v4 = (int)&v9[4 * v8];
      v11 = __security_cookie;
      for ( i = v10; v10 != (uintptr_t *)v4; ++v10 )
        *v10 = v11;
      goto LABEL_12;
    }
  }
  return -1;
}

