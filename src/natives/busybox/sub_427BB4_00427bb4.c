// busybox.exe @ 0x427bb4 size=408

int __usercall sub_427BB4@<eax>(char a1@<al>, int a2@<edx>)
{
  int v4; // ebx
  bool v5; // al
  int v6; // eax
  int i; // edx
  unsigned int v8; // esi
  int v9; // ecx
  const char *v10; // eax
  _BYTE *v11; // eax
  int v12; // eax
  HANDLE hObject; // [esp+0h] [ebp-60h]
  unsigned int v15; // [esp+Ch] [ebp-54h]
  int v16; // [esp+Ch] [ebp-54h]
  int v17; // [esp+10h] [ebp-50h]
  int v18; // [esp+14h] [ebp-4Ch]
  int v19; // [esp+18h] [ebp-48h]
  _BYTE v20[65]; // [esp+1Fh] [ebp-41h] BYREF

  v4 = 1;
  while ( 1 )
  {
    v5 = v4 > 0;
    if ( a2 != 0 )
      v5 = *(_BYTE *)(a2 + 24) == 0;
    if ( !v5 )
      return v4;
    ++*(_DWORD *)(dword_485FF0 + 56);
    v4 = sub_46DB44();
    if ( v4 > 0 )
    {
      for ( i = dword_4732C4; i != 0; i = *(_DWORD *)(i + 28) )
      {
        if ( *(_BYTE *)(i + 24) != 2 )
        {
          v8 = *(_DWORD *)(i + 16);
          v15 = v8 + 16 * *(_DWORD *)(i + 20);
          v9 = 2;
          v6 = 0;
          do
          {
            if ( v4 == *(_DWORD *)v8 )
            {
              v18 = v9;
              v17 = i;
              *(_DWORD *)(v8 + 8) = v19;
              *(_DWORD *)v8 = -1;
              hObject = (HANDLE)CloseHandle(*(HANDLE *)(v8 + 4));
              *(_DWORD *)(v8 + 4) = 0;
              i = v17;
              v6 = v17;
              v9 = v18;
            }
            if ( *(_DWORD *)(v8 + 8) == -1 )
              v9 = 0;
            v8 += 16;
          }
          while ( v15 > v8 );
          if ( v6 != 0 )
          {
            if ( v9 != 0 )
            {
              *(_BYTE *)(v6 + 25) |= 4u;
              if ( *(unsigned __int8 *)(v6 + 24) != v9 )
                *(_BYTE *)(v6 + 24) = v9;
            }
            goto LABEL_21;
          }
        }
      }
    }
    v6 = 0;
LABEL_21:
    v16 = v6;
    sub_43B8DC();
    if ( (a1 & 0x10) != 0 )
    {
      v4 = -1;
      if ( v16 != 0 )
      {
        if ( *(_BYTE *)(v16 + 24) == 2 )
          v4 = *(_DWORD *)(*(_DWORD *)(v16 + 16) + 16 * (*(_DWORD *)(v16 + 20) + 0xFFFFFFF) + 8);
LABEL_26:
        if ( a2 == v16 )
        {
          if ( (v19 & 0x7D) == 0 || (v19 & 0x7F) == 0xD )
          {
            v11 = v20;
          }
          else
          {
            v10 = (const char *)sub_43548C();
            v11 = &v20[sub_43129C(v20, 32, v10)];
          }
          v12 = v11 - v20;
          if ( v12 != 0 )
          {
            v20[v12] = 10;
            v20[v12 + 1] = 0;
            sub_448168(hObject);
          }
        }
      }
    }
    else if ( v16 != 0 )
    {
      goto LABEL_26;
    }
  }
}

