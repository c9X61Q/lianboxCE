// busybox.exe @ 0x466c48 size=117

BOOL __usercall sub_466C48@<eax>(int a1@<eax>, unsigned int a2@<edx>)
{
  int v3; // eax
  int v4; // ebx
  int v6; // eax
  unsigned int v8; // ebx

  v3 = *(_DWORD *)(a1 + 48);
  v4 = *(_DWORD *)(a1 + 52) - v3;
  if ( (int)a2 <= v4 )
    return true;
  memmove(*(void **)(a1 + 36), (const void *)(*(_DWORD *)(a1 + 36) + v3), *(_DWORD *)(a1 + 52) - v3);
  *(_DWORD *)(a1 + 48) = 0;
  v6 = sub_432664(0x4000 - v4, (CHAR *)(v4 + *(_DWORD *)(a1 + 36)));
  *(_DWORD *)(a1 + 52) = v6;
  if ( v6 >= 0 )
  {
    v8 = v6 + v4;
    *(_DWORD *)(a1 + 52) = v8;
    return v8 >= a2;
  }
  else
  {
    sub_4181F8("read error");
    return false;
  }
}

