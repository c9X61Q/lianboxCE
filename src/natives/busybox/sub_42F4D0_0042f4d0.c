// busybox.exe @ 0x42f4d0 size=405

int __usercall sub_42F4D0@<eax>(int a1@<ecx>, CHAR *a2@<eax>, unsigned int a3@<edx>)
{
  unsigned int v3; // ebx
  unsigned int v4; // esi
  int v5; // esi
  int v6; // ecx
  int v7; // edi
  _BYTE *v8; // ebx
  int v9; // eax
  _BYTE *v10; // eax
  int v11; // edx
  int v13; // [esp+8h] [ebp-7Ch]
  int v15; // [esp+Ch] [ebp-78h]
  int FileHandle; // [esp+10h] [ebp-74h]
  __int16 v18; // [esp+28h] [ebp-5Ch]
  __int64 v19; // [esp+40h] [ebp-44h]

  v3 = *(_DWORD *)dword_486010;
  v4 = *(_DWORD *)(dword_486010 + 4);
  FileHandle = sub_443508(a2, 0x4000, a1);
  if ( FileHandle < 0 )
  {
    v5 = -1;
    if ( v13 == 0 )
      sub_4630F0();
    return v5;
  }
  if ( (int)sub_44305C(FileHandle) >= 0 )
  {
    if ( (v18 & 0xF000) == 0x8000 )
    {
      v7 = v19;
      if ( v19 > 2147483646 )
        v7 = 0x7FFFFFFF;
      if ( v3 < a3 )
        v3 = a3;
      if ( v4 > v3 )
        v4 = v3;
      v8 = (_BYTE *)(v4 + sub_465874(v6, v7));
      v9 = sub_432664(v7, v8);
      v5 = v9;
      if ( v9 >= 0 )
      {
        if ( v7 > v9 )
        {
          v10 = v8;
          v11 = 0;
          while ( &v8[v5] != v10 )
          {
            if ( *v10 == 10 )
              ++v11;
            ++v10;
          }
          v15 = v5 + v11;
          sub_4657B0(0, &v8[v7 - 1]);
          if ( v7 > v15 )
            sub_463088("can't read '%s'", a2);
        }
      }
      else
      {
        sub_4630F0();
        sub_4657B0(0, &v8[v7 - 1]);
      }
      goto LABEL_25;
    }
    sub_463088("'%s' is not a regular file", a2);
  }
  else
  {
    sub_4630F0();
  }
  v5 = -1;
LABEL_25:
  sub_442EA4(FileHandle);
  if ( v13 != 0 && (sub_442D6C(a2, 2) < 0 || (v18 & 0x92) == 0) )
    *(_BYTE *)(dword_486010 + 17) |= 1u;
  return v5;
}

