// busybox.exe @ 0x460bfc size=266

int __usercall sub_460BFC@<eax>(int a1@<eax>, int a2@<edx>)
{
  int result; // eax
  unsigned __int64 Offset; // rdi
  int v4; // eax
  unsigned __int64 v5; // kr00_8
  size_t v6; // edx
  size_t v7; // eax
  unsigned __int64 v8; // kr08_8
  size_t v9; // [esp+14h] [ebp-470h]
  _BYTE v10[16]; // [esp+18h] [ebp-46Ch] BYREF
  int v11; // [esp+28h] [ebp-45Ch]
  __int64 v12; // [esp+40h] [ebp-444h]
  _BYTE Buffer[1036]; // [esp+78h] [ebp-40Ch] BYREF

  HIDWORD(Offset) = a1;
  result = a1 | a2;
  LODWORD(Offset) = a2;
  if ( result != 0 )
  {
    while ( 1 )
    {
      if ( Stream == nullptr )
        sub_418210("can't skip past end of combined input");
      v4 = fileno(Stream);
      if ( sub_44305C(v4, (int)v10) != 0 || (v11 & 0xF000) != 0x8000 || v12 <= 0 )
      {
        v6 = 1024;
        do
        {
          if ( (HIDWORD(Offset) != 0) + (int)Offset <= 0 )
            break;
          if ( __SPAIR64__(Offset, HIDWORD(Offset)) < v6 )
            v6 = HIDWORD(Offset);
          v9 = v6;
          v7 = fread(Buffer, 1u, v6, Stream);
          v8 = __PAIR64__(Offset, HIDWORD(Offset)) - v7;
          Offset = __PAIR64__(v8, HIDWORD(v8));
          v6 = v9;
        }
        while ( v9 == v7 );
        result = HIDWORD(Offset) | Offset;
        if ( Offset == 0 )
          return result;
      }
      else
      {
        if ( v12 >= __SPAIR64__(Offset, HIDWORD(Offset)) )
        {
          result = fseek(Stream, SHIDWORD(Offset), 1);
          if ( result != 0 )
            LOBYTE(MultiByteStr) = 1;
          return result;
        }
        v5 = __PAIR64__(Offset, HIDWORD(Offset)) - v12;
        LODWORD(Offset) = (__PAIR64__(Offset, HIDWORD(Offset)) - v12) >> 32;
        HIDWORD(Offset) = v5;
      }
      sub_41BA2C();
      sub_447A00();
    }
  }
  return result;
}

