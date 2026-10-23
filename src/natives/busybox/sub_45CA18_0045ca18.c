// busybox.exe @ 0x45ca18 size=249

int __usercall sub_45CA18@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  int v3; // esi
  int v4; // ebx
  _WORD *v5; // edx
  int v6; // ecx
  int v7; // edi
  int i; // [esp+0h] [ebp-20h]
  int v9; // [esp+4h] [ebp-1Ch]

  result = *(unsigned __int16 *)(a1 + 2);
  v3 = 4 - (result == 0);
  v4 = result == 0 ? 138 : 7;
  *(_WORD *)(a1 + 4 * a2 + 6) = -1;
  v5 = (_WORD *)dword_486010;
  v6 = 0;
  v9 = -1;
  for ( i = 0; i <= a2; ++i )
  {
    v7 = *(unsigned __int16 *)(a1 + 4 * i + 6);
    if ( v4 <= ++v6 )
      goto LABEL_8;
    if ( result == v7 )
    {
      result = v9;
      goto LABEL_22;
    }
    if ( v3 <= v6 )
    {
LABEL_8:
      if ( result != 0 )
      {
        if ( v9 != result )
          ++v5[2 * result + 2482];
        ++v5[2514];
      }
      else if ( v6 > 10 )
      {
        ++v5[2518];
      }
      else
      {
        ++v5[2516];
      }
      if ( v7 != 0 )
      {
        if ( result == v7 )
        {
          v3 = 3;
          v4 = 6;
          goto LABEL_21;
        }
LABEL_18:
        v3 = 4;
        v4 = 7;
        goto LABEL_21;
      }
    }
    else
    {
      v5[2 * result + 2482] += v6;
      if ( v7 != 0 )
        goto LABEL_18;
    }
    v3 = 3;
    v4 = 138;
LABEL_21:
    v6 = 0;
LABEL_22:
    v9 = result;
    result = v7;
  }
  return result;
}

