// busybox.exe @ 0x452c9c size=35

void __usercall sub_452C9C(void *Base@<eax>, size_t NumOfElements@<edx>)
{
  qsort(Base, NumOfElements, 4u, (_CoreCrtNonSecureSearchSortCompareFunction)sub_418114);
}

