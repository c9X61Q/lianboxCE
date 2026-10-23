// gettime.exe @ 0x412d0f size=244

int __cdecl _ungetc_nolock(int Character, FILE *Stream)
{
  int *p_flag; // edx
  int v3; // eax
  _BYTE *v4; // edi
  int v5; // edx
  int v6; // ecx
  _BYTE *v7; // ebx
  char *ptr; // edi
  unsigned int v10; // eax
  char *v11; // ecx

  p_flag = &Stream->_flag;
  if ( (Stream->_flag & 0x1000) == 0 )
  {
    v3 = _fileno(Stream);
    v4 = &unk_437278;
    if ( v3 == -1 || v3 == -2 )
    {
      v6 = v3 >> 6;
      v7 = &unk_437278;
      v5 = v3 & 0x3F;
    }
    else
    {
      v5 = v3 & 0x3F;
      v6 = v3 >> 6;
      v7 = (_BYTE *)(dword_438A48[v3 >> 6] + 56 * v5);
    }
    if ( v7[41] != 0 )
      goto LABEL_11;
    if ( v3 != -1 && v3 != -2 )
      v4 = (_BYTE *)(dword_438A48[v6] + 56 * v5);
    if ( (v4[45] & 1) != 0 )
    {
LABEL_11:
      *_errno() = 22;
      _invalid_parameter_noinfo();
      return -1;
    }
    p_flag = &Stream->_flag;
  }
  if ( Character == -1 || (*p_flag & 1) == 0 && (*p_flag & 6) != 6 )
    return -1;
  if ( Stream->_cnt == 0 )
  {
    __acrt_stdio_allocate_buffer_nolock(Stream);
    p_flag = &Stream->_flag;
  }
  if ( Stream->_ptr == (char *)Stream->_cnt )
  {
    if ( Stream->_base != nullptr )
      return -1;
    ++Stream->_ptr;
  }
  ptr = Stream->_ptr;
  v10 = (unsigned int)*p_flag >> 12;
  v11 = Stream->_ptr - 1;
  Stream->_ptr = v11;
  if ( (v10 & 1) != 0 )
  {
    if ( *v11 != (_BYTE)Character )
    {
      Stream->_ptr = ptr;
      return -1;
    }
  }
  else
  {
    *v11 = Character;
  }
  ++Stream->_base;
  _InterlockedAnd(p_flag, 0xFFFFFFF7);
  _InterlockedOr(p_flag, 1u);
  return (unsigned __int8)Character;
}

