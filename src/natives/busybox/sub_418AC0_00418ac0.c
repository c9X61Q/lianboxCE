// busybox.exe @ 0x418ac0 size=67

_BYTE *__usercall sub_418AC0@<eax>(_BYTE *a1@<eax>, unsigned __int8 *a2@<edx>, int a3@<ecx>)
{
  unsigned __int8 *v3; // edi
  _BYTE *v4; // esi
  unsigned __int8 v5; // bl

  v3 = &a2[a3];
  v4 = a1;
  while ( a2 != v3 )
  {
    v5 = *a2++;
    *v4 = byte_47DE90[v5 >> 4] | 0x20;
    v4 += 2;
    *(v4 - 1) = byte_47DE90[v5 & 0xF] | 0x20;
  }
  return &a1[2 * a3];
}

