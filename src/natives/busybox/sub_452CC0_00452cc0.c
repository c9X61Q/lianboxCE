// busybox.exe @ 0x452cc0 size=35

void __usercall sub_452CC0(void *Base@<eax>, size_t NumOfElements@<edx>)
{
  qsort(Base, NumOfElements, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_4180F8);
}

