// busybox.exe @ 0x42ff18 size=175

_DWORD *__usercall sub_42FF18@<eax>(int a1@<eax>)
{
  int *v2; // edi
  _DWORD *v3; // ebp
  int v4; // esi
  int i; // eax
  int v6; // ebx
  int v8; // [esp+8h] [ebp-14h]

  if ( a1 <= 0 || (v2 = (int *)dword_486010, (v8 = *(_DWORD *)(dword_486010 + 4)) < a1) )
  {
    sub_41783C("line number %d does not exist", a1);
    return nullptr;
  }
  if ( *(int *)dword_486010 <= 0 )
  {
    *(_DWORD *)dword_486010 = 1;
    v2[4] = v2[8];
  }
  v4 = *v2;
  v3 = (_DWORD *)v2[4];
  if ( *v2 != a1 )
  {
    if ( v4 / 2 <= a1 )
    {
      if ( (v4 + v8) / 2 < a1 )
      {
        v3 = (_DWORD *)v2[9];
LABEL_17:
        while ( v8 > a1 )
        {
          v3 = (_DWORD *)v3[1];
          --v8;
        }
        return v3;
      }
    }
    else
    {
      v3 = (_DWORD *)v2[8];
      v4 = 1;
    }
    for ( i = v4; i < a1; ++i )
      v3 = (_DWORD *)*v3;
    v6 = 0;
    if ( a1 >= v4 )
      v6 = a1 - v4;
    v8 = v6 + v4;
    goto LABEL_17;
  }
  return v3;
}

