// busybox.exe @ 0x4657b0 size=195

void *__usercall sub_4657B0@<eax>(unsigned int a1@<eax>, unsigned int a2@<edx>, int a3@<ecx>)
{
  const void *Src; // edi
  void *v4; // esi
  int v5; // ebp
  unsigned int *v6; // ebx
  int v7; // ecx
  void *v8; // eax
  unsigned int v9; // eax
  unsigned int v10; // edx
  unsigned int v12; // [esp+Ch] [ebp-18h]
  int v13; // [esp+10h] [ebp-14h]

  if ( a2 < a1 )
  {
    Src = (const void *)(a1 + 1);
    v4 = (void *)a2;
  }
  else
  {
    Src = (const void *)(a2 + 1);
    v4 = (void *)a1;
  }
  v5 = a2 - a1 + 1;
  v6 = (unsigned int *)dword_486010;
  v13 = *(_DWORD *)(dword_486010 + 4);
  if ( a3 == 3 )
  {
    v7 = 5;
LABEL_12:
    sub_4681D0(v7, v5);
    goto LABEL_13;
  }
  if ( a3 <= 3 )
  {
    if ( a3 == 1 )
    {
      v7 = 1;
    }
    else
    {
      if ( a3 != 2 )
        goto LABEL_13;
      v7 = 3;
    }
    goto LABEL_12;
  }
LABEL_13:
  v12 = v6[5];
  v6[5] = v12 - 1;
  if ( *v6 <= (unsigned int)Src )
  {
    v8 = (void *)v6[1];
    if ( v8 >= Src && *v6 <= (unsigned int)v4 && v8 > v4 )
    {
      v6[5] = v12;
      if ( v8 != Src )
        memmove(v4, Src, v13 - (_DWORD)Src);
      v9 = v6[1] - v5;
      v6[1] = v9;
      if ( v9 <= (unsigned int)v4 )
        v4 = (void *)(v9 - 1);
      v10 = *v6;
      if ( v9 <= *v6 )
      {
        v6[1] = v10;
        return (void *)v10;
      }
    }
  }
  return v4;
}

