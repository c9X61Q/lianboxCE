// busybox.exe @ 0x44dae8 size=199

unsigned __int16 __usercall sub_44DAE8@<ax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // ecx
  int v3; // ebx
  unsigned __int16 *v4; // esi
  int v5; // ebp
  unsigned __int16 v6; // ax
  int v7; // edi
  unsigned __int16 v8; // bp
  unsigned __int16 v11; // [esp+6h] [ebp-22h]
  int v12; // [esp+Ch] [ebp-1Ch]
  unsigned __int16 *v13; // [esp+10h] [ebp-18h]
  int v14; // [esp+14h] [ebp-14h]

  v2 = dword_486010;
  v11 = *(_WORD *)(dword_486010 + 2 * a2);
  v3 = 2 * a2;
  v14 = *(_DWORD *)(dword_486010 + 1148);
  v13 = (unsigned __int16 *)(a1 + 4 * v11);
  while ( v14 >= v3 )
  {
    if ( v14 > v3 )
    {
      v4 = (unsigned __int16 *)(v2 + 2 * v3);
      v5 = v4[1];
      v12 = *v4;
      v6 = *(_WORD *)(a1 + 4 * v12);
      if ( *(_WORD *)(a1 + 4 * v5) < v6
        || *(_WORD *)(a1 + 4 * v5) == v6 && *(_BYTE *)(v2 + v5 + 5268) <= *(_BYTE *)(v2 + v12 + 5268) )
      {
        ++v3;
      }
    }
    v7 = *(unsigned __int16 *)(v2 + 2 * v3);
    v8 = *(_WORD *)(a1 + 4 * v7);
    if ( *v13 < v8 || *v13 == v8 && *(_BYTE *)(v2 + v11 + 5268) <= *(_BYTE *)(v2 + v7 + 5268) )
      break;
    *(_WORD *)(v2 + 2 * a2) = v7;
    a2 = v3;
    v3 *= 2;
  }
  *(_WORD *)(v2 + 2 * a2) = v11;
  return v11;
}

