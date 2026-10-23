// busybox.exe @ 0x41ea48 size=52

void __usercall sub_41EA48(int a1@<eax>)
{
  if ( a1 != 0 )
  {
    fclose(*(FILE **)a1);
    free(*(void **)(a1 + 8));
    free(*(void **)(a1 + 12));
    free((void *)a1);
  }
}

