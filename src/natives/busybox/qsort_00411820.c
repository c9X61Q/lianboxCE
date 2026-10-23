// busybox.exe @ 0x411820 size=6

// attributes: thunk
void __cdecl qsort(
        void *Base,
        size_t NumOfElements,
        size_t SizeOfElements,
        _CoreCrtNonSecureSearchSortCompareFunction CompareFunction)
{
  __imp_qsort(Base, NumOfElements, SizeOfElements, CompareFunction);
}

