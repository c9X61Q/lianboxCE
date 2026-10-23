// busybox.exe @ 0x423008 size=139

void *__usercall sub_423008@<eax>(int a1@<eax>, int a2@<edx>, void *a3@<ecx>)
{
  _DWORD *v5; // ebp
  int v6; // ebx
  int v7; // edi
  _DWORD *v8; // esi
  _DWORD *v9; // eax
  void *Block; // [esp+0h] [ebp-14h]

  Block = a3;
  if ( sub_416B48(a1, a2, "delete") == 0 )
  {
    v5 = (_DWORD *)sub_42FF18();
    if ( v5 != nullptr )
    {
      v6 = dword_486010;
      if ( *(_DWORD *)dword_486010 <= a2 && *(_DWORD *)dword_486010 >= a1 )
      {
        if ( a2 >= *(_DWORD *)(dword_486010 + 4) && a1 <= 1 )
          *(_DWORD *)dword_486010 = 0;
        else
          sub_45E41C();
      }
      v7 = a2 - a1 + 1;
      if ( *(_DWORD *)v6 > a2 )
        *(_DWORD *)v6 -= v7;
      *(_DWORD *)(v6 + 4) -= v7;
      while ( v7 > 0 )
      {
        --v7;
        v8 = (_DWORD *)*v5;
        v9 = (_DWORD *)v5[1];
        *v9 = *v5;
        v8[1] = v9;
        free(v5);
        v5 = v8;
      }
      *(_BYTE *)(v6 + 48) = 1;
    }
  }
  return Block;
}

