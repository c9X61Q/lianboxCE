// busybox.exe @ 0x42905c size=391

unsigned int __usercall sub_42905C@<eax>(const char *a1@<eax>)
{
  int v1; // edx
  unsigned int v2; // esi
  unsigned int v3; // edi
  _DWORD *v4; // ebx
  int v5; // eax
  int v6; // eax
  int v7; // ecx
  unsigned __int64 v8; // kr00_8
  void *Block; // [esp+8h] [ebp-74h]
  _DWORD v12[4]; // [esp+10h] [ebp-6Ch] BYREF
  int v13; // [esp+20h] [ebp-5Ch]
  int v14; // [esp+24h] [ebp-58h]
  unsigned int v15; // [esp+60h] [ebp-1Ch]
  unsigned int v16; // [esp+64h] [ebp-18h]

  if ( sub_443484(a1, v12) != 0 )
    goto LABEL_2;
  if ( (dword_486008 & 0x20) != 0 )
  {
    if ( qword_485BF0 != nullptr )
    {
      if ( *(&qword_485BF0 + 1) != (char *)v12[0] )
        return 0;
    }
    else
    {
      *(&qword_485BF0 + 1) = (char *)v12[0];
    }
  }
  v2 = v15;
  v3 = v16;
  if ( (v13 & 0xF000) == 0xA000 && *(&NumOfElements + 1) > (int)qword_485BF0 )
  {
    if ( sub_444C28(a1, v12) != 0 )
    {
LABEL_2:
      sub_418224(a1, v1);
      LOBYTE(NumOfElements) = 1;
      return 0;
    }
    v2 = v15;
    v3 = v16;
    if ( *(&NumOfElements + 1) == 1 )
      *(&NumOfElements + 1) = 0x7FFFFFFF;
  }
  if ( (dword_486008 & 0x80u) == 0 && v14 > 1 )
  {
    if ( sub_43C518() != 0 )
      return 0;
    sub_4137B0(v12, nullptr);
  }
  if ( (v13 & 0xF000) == 0x4000 )
  {
    v4 = (_DWORD *)sub_46DC58();
    if ( v4 == nullptr )
    {
      LOBYTE(NumOfElements) = 1;
      return v2;
    }
    while ( 1 )
    {
      v6 = sub_402F30((int)v4);
      if ( v6 == 0 )
        break;
      v5 = sub_41EA10(a1, v6 + 8, v7);
      if ( v5 != 0 )
      {
        ++qword_485BF0;
        Block = (void *)v5;
        v8 = sub_42905C() + __PAIR64__(v3, v2);
        v3 = HIDWORD(v8);
        v2 = v8;
        --qword_485BF0;
        free(Block);
      }
    }
    sub_403050(v4);
  }
  else if ( (dword_486008 & 1) == 0 && qword_485BF0 != nullptr )
  {
    return v2;
  }
  if ( (int)qword_485BF0 <= (int)*(&MultiByteStr + 1) )
    sub_44DD50(a1, v3);
  return v2;
}

