// gettime.exe @ 0x405ac0 size=192

int __thiscall sub_405AC0(char *this)
{
  int result; // eax
  int v2; // eax
  int v3; // [esp+0h] [ebp-24h] BYREF
  char *v4; // [esp+10h] [ebp-14h]
  int *v5; // [esp+14h] [ebp-10h]
  int v6; // [esp+20h] [ebp-4h]

  v5 = &v3;
  v4 = this;
  v6 = 0;
  result = (unsigned __int8)sub_407320(&v4[*(_DWORD *)(*(_DWORD *)v4 + 4)]);
  if ( (_BYTE)result != 0 )
  {
    result = unknown_libname_35(&v4[*(_DWORD *)(*(_DWORD *)v4 + 4)]) & 2;
    if ( result != 0 )
    {
      v2 = unknown_libname_40(&v4[*(_DWORD *)(*(_DWORD *)v4 + 4)]);
      result = sub_407A60(v2);
      if ( result == -1 )
        return sub_408150(4, 0);
    }
  }
  return result;
}

