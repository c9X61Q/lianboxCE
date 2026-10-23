// busybox.exe @ 0x45ec9c size=12

signed __int32 *__usercall sub_45EC9C@<eax>(signed __int32 *a1@<eax>, _BYTE *a2@<edx>)
{
  signed __int32 *result; // eax

  result = sub_45EC78(a1, a2);
  *result |= 0x200u;
  return result;
}

