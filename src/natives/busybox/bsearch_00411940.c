// busybox.exe @ 0x411940 size=6

// attributes: thunk
void *__cdecl bsearch(
        const void *Key,
        const void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  return __imp_bsearch(Key, Base, NumOfElements, SizeOfElements, CompareFunction);
}

