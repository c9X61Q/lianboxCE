// busybox.exe @ 0x4192a4 size=1560

int __usercall sub_4192A4@<eax>(char *Str1@<ecx>, int a2@<eax>, int a3@<edx>, int a4)
{
  const char *v6; // edi
  unsigned int v7; // ebp
  unsigned int v8; // ebp
  unsigned int v9; // ebp
  unsigned int v10; // ebp
  unsigned int v11; // ebp
  int v12; // ecx
  unsigned int v13; // eax
  int v14; // edx
  unsigned int v15; // ebp
  unsigned int v16; // ebp
  unsigned int v17; // eax
  unsigned int v18; // ebp
  unsigned int v19; // ebp
  unsigned int v20; // edi
  int result; // eax

  v6 = Str1;
  if ( _bittest(&a4, 0x15u) && (strcmp(Str1, "upper") == 0 || strcmp(v6, "lower") == 0) )
    v6 = "alpha";
  v7 = strcmp(v6, "alnum");
  if ( v7 != 0 )
  {
    v8 = strcmp(v6, "cntrl");
    if ( v8 != 0 )
    {
      v9 = strcmp(v6, "lower");
      if ( v9 != 0 )
      {
        v10 = strcmp(v6, "space");
        if ( v10 != 0 )
        {
          v11 = strcmp(v6, "alpha");
          if ( v11 != 0 )
          {
            v12 = strcmp(v6, "digit");
            if ( v12 != 0 )
            {
              v15 = strcmp(v6, "print");
              if ( v15 != 0 )
              {
                v16 = strcmp(v6, "upper");
                if ( v16 != 0 )
                {
                  v17 = strcmp(v6, "blank");
                  if ( v17 != 0 )
                  {
                    v18 = strcmp(v6, "graph");
                    if ( v18 != 0 )
                    {
                      v19 = strcmp(v6, "punct");
                      if ( v19 != 0 )
                      {
                        v20 = strcmp(v6, "xdigit");
                        result = 4;
                        if ( v20 != 0 )
                          return result;
                        if ( a2 != 0 )
                        {
                          do
                          {
                            if ( isxdigit(v20) != 0 )
                              *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v20) >> 5)) |= 1 << *(_BYTE *)(a2 + v20);
                            ++v20;
                          }
                          while ( v20 != 256 );
                        }
                        else
                        {
                          do
                          {
                            if ( isxdigit(v20) != 0 )
                              *(_DWORD *)(a3 + 4 * (v20 >> 5)) |= 1 << v20;
                            ++v20;
                          }
                          while ( v20 != 256 );
                        }
                      }
                      else if ( a2 != 0 )
                      {
                        do
                        {
                          if ( ispunct(v19) != 0 )
                            *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v19) >> 5)) |= 1 << *(_BYTE *)(a2 + v19);
                          ++v19;
                        }
                        while ( v19 != 256 );
                      }
                      else
                      {
                        do
                        {
                          if ( ispunct(v19) != 0 )
                            *(_DWORD *)(a3 + 4 * (v19 >> 5)) |= 1 << v19;
                          ++v19;
                        }
                        while ( v19 != 256 );
                      }
                    }
                    else if ( a2 != 0 )
                    {
                      do
                      {
                        if ( isgraph(v18) != 0 )
                          *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v18) >> 5)) |= 1 << *(_BYTE *)(a2 + v18);
                        ++v18;
                      }
                      while ( v18 != 256 );
                    }
                    else
                    {
                      do
                      {
                        if ( isgraph(v18) != 0 )
                          *(_DWORD *)(a3 + 4 * (v18 >> 5)) |= 1 << v18;
                        ++v18;
                      }
                      while ( v18 != 256 );
                    }
                  }
                  else if ( a2 != 0 )
                  {
                    while ( ++v17 != 256 )
                    {
                      if ( v17 == 32 || v17 == 9 )
                        *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v17) >> 5)) |= 1 << *(_BYTE *)(a2 + v17);
                    }
                  }
                  else
                  {
                    while ( ++v17 != 256 )
                    {
                      if ( v17 == 32 || v17 == 9 )
                        *(_DWORD *)(a3 + 4 * (v17 >> 5)) |= 1 << v17;
                    }
                  }
                }
                else if ( a2 != 0 )
                {
                  do
                  {
                    if ( isupper(v16) != 0 )
                      *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v16) >> 5)) |= 1 << *(_BYTE *)(a2 + v16);
                    ++v16;
                  }
                  while ( v16 != 256 );
                }
                else
                {
                  do
                  {
                    if ( isupper(v16) != 0 )
                      *(_DWORD *)(a3 + 4 * (v16 >> 5)) |= 1 << v16;
                    ++v16;
                  }
                  while ( v16 != 256 );
                }
              }
              else if ( a2 != 0 )
              {
                do
                {
                  if ( isprint(v15) != 0 )
                    *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v15) >> 5)) |= 1 << *(_BYTE *)(a2 + v15);
                  ++v15;
                }
                while ( v15 != 256 );
              }
              else
              {
                do
                {
                  if ( isprint(v15) != 0 )
                    *(_DWORD *)(a3 + 4 * (v15 >> 5)) |= 1 << v15;
                  ++v15;
                }
                while ( v15 != 256 );
              }
            }
            else if ( a2 != 0 )
            {
              v13 = -48;
              while ( ++v13 != 208 )
              {
                if ( v13 <= 9 )
                {
                  v14 = *(_BYTE *)(a2 + v13 + 48) >> 5;
                  *(_DWORD *)(a3 + 4 * v14) |= 1 << *(_BYTE *)(a2 + v13 + 48);
                }
              }
            }
            else
            {
              do
              {
                if ( (unsigned int)(v12 - 48) <= 9 )
                  *(_DWORD *)(a3 + 4) |= 1 << v12;
                ++v12;
              }
              while ( v12 != 256 );
            }
          }
          else if ( a2 != 0 )
          {
            do
            {
              if ( isalpha(v11) != 0 )
                *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v11) >> 5)) |= 1 << *(_BYTE *)(a2 + v11);
              ++v11;
            }
            while ( v11 != 256 );
          }
          else
          {
            do
            {
              if ( isalpha(v11) != 0 )
                *(_DWORD *)(a3 + 4 * (v11 >> 5)) |= 1 << v11;
              ++v11;
            }
            while ( v11 != 256 );
          }
        }
        else if ( a2 != 0 )
        {
          do
          {
            if ( isspace(v10) != 0 )
              *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v10) >> 5)) |= 1 << *(_BYTE *)(a2 + v10);
            ++v10;
          }
          while ( v10 != 256 );
        }
        else
        {
          do
          {
            if ( isspace(v10) != 0 )
              *(_DWORD *)(a3 + 4 * (v10 >> 5)) |= 1 << v10;
            ++v10;
          }
          while ( v10 != 256 );
        }
      }
      else if ( a2 != 0 )
      {
        do
        {
          if ( islower(v9) != 0 )
            *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v9) >> 5)) |= 1 << *(_BYTE *)(a2 + v9);
          ++v9;
        }
        while ( v9 != 256 );
      }
      else
      {
        do
        {
          if ( islower(v9) != 0 )
            *(_DWORD *)(a3 + 4 * (v9 >> 5)) |= 1 << v9;
          ++v9;
        }
        while ( v9 != 256 );
      }
    }
    else if ( a2 != 0 )
    {
      do
      {
        if ( iscntrl(v8) != 0 )
          *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v8) >> 5)) |= 1 << *(_BYTE *)(a2 + v8);
        ++v8;
      }
      while ( v8 != 256 );
    }
    else
    {
      do
      {
        if ( iscntrl(v8) != 0 )
          *(_DWORD *)(a3 + 4 * (v8 >> 5)) |= 1 << v8;
        ++v8;
      }
      while ( v8 != 256 );
    }
  }
  else if ( a2 != 0 )
  {
    do
    {
      if ( isalnum(v7) != 0 )
        *(_DWORD *)(a3 + 4 * (*(_BYTE *)(a2 + v7) >> 5)) |= 1 << *(_BYTE *)(a2 + v7);
      ++v7;
    }
    while ( v7 != 256 );
  }
  else
  {
    do
    {
      if ( isalnum(v7) != 0 )
        *(_DWORD *)(a3 + 4 * (v7 >> 5)) |= 1 << v7;
      ++v7;
    }
    while ( v7 != 256 );
  }
  return 0;
}

