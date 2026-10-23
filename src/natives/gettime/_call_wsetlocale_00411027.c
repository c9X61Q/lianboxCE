// gettime.exe @ 0x411027 size=154

wchar_t *__cdecl call_wsetlocale(int Category, char *SrcBuf)
{
  size_t v2; // ecx
  wchar_t *v4; // edi
  errno_t v5; // eax
  wchar_t *v6; // eax
  wchar_t *v7; // esi
  errno_t v8; // eax
  size_t Count; // [esp+0h] [ebp-4h] BYREF

  Count = v2;
  if ( SrcBuf == nullptr )
    return _wsetlocale(Category, nullptr);
  v4 = nullptr;
  v5 = mbstowcs_s(&Count, nullptr, 0, SrcBuf, 0x7FFFFFFFu);
  if ( v5 != 0 && (v5 == 22 || v5 == 34) )
    goto LABEL_13;
  v6 = (wchar_t *)_calloc_base(Count, 2u);
  v7 = v6;
  if ( v6 != nullptr )
  {
    v8 = mbstowcs_s(nullptr, v6, Count, SrcBuf, 0xFFFFFFFF);
    if ( v8 != 0 )
    {
      if ( v8 != 22 && v8 != 34 )
        goto LABEL_12;
LABEL_13:
      _invoke_watson(nullptr, nullptr, nullptr, 0, 0);
    }
    v4 = _wsetlocale(Category, v7);
  }
LABEL_12:
  _free_base(v7);
  return v4;
}

