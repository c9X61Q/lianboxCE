// busybox.exe @ 0x4542ac size=277

int __usercall sub_4542AC@<eax>(int *a1@<eax>, int a2@<edx>, int a3@<ecx>)
{
  int v4; // ebp
  int v5; // eax
  int v6; // eax
  _DWORD *v7; // eax
  int v8; // ecx
  int v10; // ebx
  int v11; // esi
  int v12; // edi
  int v13; // edx
  int v14; // ecx
  int v15; // edx
  char *v16; // eax
  unsigned int v17; // ecx
  const void *v18; // esi
  int v20; // [esp+8h] [ebp-1Ch]
  int v21; // [esp+Ch] [ebp-18h]
  int v22; // [esp+Ch] [ebp-18h]
  int v23; // [esp+10h] [ebp-14h]

  if ( a2 != 0 )
  {
    v4 = *(_DWORD *)(a2 + 4);
    if ( a3 != 0 )
    {
      if ( v4 > 0 )
      {
        v5 = *(_DWORD *)(a3 + 4);
        v20 = v5;
        if ( v5 > 0 )
        {
          v21 = a2;
          v6 = v4 + v5;
          *a1 = v6;
          v7 = malloc(4 * v6);
          a1[2] = (int)v7;
          v8 = 12;
          if ( v7 != nullptr )
          {
            v22 = *(_DWORD *)(v21 + 8);
            v23 = *(_DWORD *)(a3 + 8);
            v10 = 0;
            v11 = 0;
            v12 = 0;
            while ( 1 )
            {
              v13 = *(_DWORD *)(v22 + 4 * v12);
              v14 = *(_DWORD *)(v23 + 4 * v11);
              if ( v13 <= v14 )
              {
                if ( v13 == v14 )
                  ++v11;
                ++v12;
                v7[v10] = v13;
              }
              else
              {
                ++v11;
                v7[v10] = v14;
              }
              ++v10;
              if ( v4 <= v12 )
                break;
              if ( v20 <= v11 )
              {
                v15 = v4 - v12;
                v16 = (char *)&v7[v10];
                v17 = 4 * (v4 - v12);
                v18 = (const void *)(v22 + 4 * v12);
                goto LABEL_23;
              }
            }
            if ( v20 > v11 )
            {
              v15 = v20 - v11;
              v16 = (char *)&v7[v10];
              v17 = 4 * (v20 - v11);
              v18 = (const void *)(v23 + 4 * v11);
LABEL_23:
              qmemcpy(v16, v18, v17);
              v10 += v15;
            }
            a1[1] = v10;
            return 0;
          }
          return v8;
        }
        return sub_454254(a1, a2);
      }
    }
    else if ( v4 > 0 )
    {
      return sub_454254(a1, a2);
    }
  }
  if ( a3 != 0 && *(int *)(a3 + 4) > 0 )
  {
    a2 = a3;
    return sub_454254(a1, a2);
  }
  memset(a1, 0, 0xCu);
  return 0;
}

