// busybox.exe @ 0x45e0d4 size=346

int __usercall sub_45E0D4@<eax>(int a1@<eax>, int a2@<edx>)
{
  int v2; // esi
  int v3; // ecx
  int result; // eax
  int v5; // edi
  int v6; // edx
  int v7; // ebp
  int v8; // ebx
  int v9; // edi
  int v10; // ecx
  unsigned int v11; // eax
  int v12; // edx
  int v13; // [esp+0h] [ebp-1Ch]

  v2 = *(unsigned __int16 *)(a1 + 2);
  v3 = 4 - (v2 == 0);
  result = v2 == 0 ? 138 : 7;
  v5 = 0;
  v6 = -1;
  v13 = 0;
  while ( v13 <= a2 )
  {
    v7 = *(unsigned __int16 *)(a1 + 4 * v13 + 6);
    v8 = v5 + 1;
    if ( result <= v5 + 1 )
      goto LABEL_9;
    if ( v2 == v7 )
    {
      v2 = v6;
      goto LABEL_23;
    }
    if ( v3 <= v8 )
    {
LABEL_9:
      v10 = dword_486010;
      if ( v2 != 0 )
      {
        if ( v6 != v2 )
        {
          sub_45D9D8(
            *(unsigned __int16 *)(dword_486010 + 4 * v2 + 4964),
            *(unsigned __int16 *)(dword_486010 + 4 * v2 + 4966));
          v8 = v5;
          v10 = dword_486010;
        }
        sub_45D9D8(*(unsigned __int16 *)(v10 + 5028), *(unsigned __int16 *)(v10 + 5030));
        v11 = v8 - 3;
        v12 = 2;
      }
      else if ( v8 > 10 )
      {
        sub_45D9D8(*(unsigned __int16 *)(dword_486010 + 5036), *(unsigned __int16 *)(dword_486010 + 5038));
        v11 = v5 - 10;
        v12 = 7;
      }
      else
      {
        sub_45D9D8(*(unsigned __int16 *)(dword_486010 + 5032), *(unsigned __int16 *)(dword_486010 + 5034));
        v11 = v5 - 2;
        v12 = 3;
      }
      sub_45D9D8(v11, v12);
      if ( v7 != 0 )
      {
        if ( v2 == v7 )
        {
          v3 = 3;
          result = 6;
          goto LABEL_22;
        }
LABEL_19:
        v3 = 4;
        result = 7;
        goto LABEL_22;
      }
    }
    else
    {
      v9 = dword_486010 + 4 * v2;
      do
      {
        sub_45D9D8(*(unsigned __int16 *)(v9 + 4964), *(unsigned __int16 *)(v9 + 4966));
        --v8;
      }
      while ( v8 != 0 );
      if ( v7 != 0 )
        goto LABEL_19;
    }
    v3 = 3;
    result = 138;
LABEL_22:
    v8 = 0;
LABEL_23:
    ++v13;
    v5 = v8;
    v6 = v2;
    v2 = v7;
  }
  return result;
}

