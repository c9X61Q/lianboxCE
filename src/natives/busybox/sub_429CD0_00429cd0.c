// busybox.exe @ 0x429cd0 size=906

int sub_429CD0()
{
  DWORD LastError; // edx
  int result; // eax

  LastError = GetLastError();
  result = 16;
  if ( LastError != 2404 )
  {
    result = 40;
    if ( LastError <= 0x964 )
    {
      result = 16;
      if ( LastError != 2401 )
      {
        result = 40;
        if ( LastError <= 0x961 )
        {
          result = 22;
          if ( LastError != 2202 )
          {
            result = 40;
            if ( LastError <= 0x89A )
            {
              result = 114;
              if ( LastError != 1921 )
              {
                result = 40;
                if ( LastError <= 0x781 )
                {
                  result = 6;
                  if ( LastError != 1785 )
                  {
                    result = 40;
                    if ( LastError <= 0x6F9 )
                    {
                      result = 22;
                      if ( LastError != 1332 )
                      {
                        result = 40;
                        if ( LastError <= 0x533 )
                        {
                          result = 13;
                          if ( LastError <= 0x52D )
                          {
                            result = 40;
                            if ( LastError <= 0x522 )
                            {
                              result = 13;
                              if ( LastError <= 0x520 )
                              {
                                result = 40;
                                if ( LastError <= 0x51C )
                                {
                                  result = 22;
                                  if ( LastError <= 0x51A )
                                  {
                                    result = 19;
                                    if ( LastError != 1200 )
                                    {
                                      result = 40;
                                      if ( LastError <= 0x4B0 )
                                      {
                                        result = 31;
                                        if ( LastError != 1142 )
                                        {
                                          result = 40;
                                          if ( LastError <= 0x476 )
                                          {
                                            result = 22;
                                            if ( LastError != 1132 )
                                            {
                                              result = 40;
                                              if ( LastError <= 0x46C )
                                              {
                                                result = 5;
                                                if ( LastError != 1117 )
                                                {
                                                  result = 40;
                                                  if ( LastError <= 0x3F5 )
                                                  {
                                                    if ( LastError > 0x3E2 )
                                                    {
                                                      switch ( LastError )
                                                      {
                                                        case 0x3E3u:
                                                        case 0x3E4u:
                                                          result = 4;
                                                          break;
                                                        case 0x3E6u:
LABEL_74:
                                                          result = 14;
                                                          break;
                                                        case 0x3E7u:
LABEL_68:
                                                          result = 2;
                                                          break;
                                                        case 0x3E9u:
LABEL_67:
                                                          result = 12;
                                                          break;
                                                        case 0x3ECu:
LABEL_50:
                                                          result = 22;
                                                          break;
                                                        case 0x3EDu:
                                                        case 0x3EEu:
LABEL_70:
                                                          result = 19;
                                                          break;
                                                        case 0x3F3u:
                                                        case 0x3F4u:
                                                        case 0x3F5u:
LABEL_72:
                                                          result = 5;
                                                          break;
                                                        default:
LABEL_53:
                                                          result = 40;
                                                          break;
                                                      }
                                                    }
                                                    else if ( LastError <= 0x218 )
                                                    {
                                                      result = 32;
                                                      if ( LastError <= 0x216 )
                                                      {
                                                        result = 34;
                                                        if ( LastError != 534 )
                                                        {
                                                          result = 14;
                                                          if ( LastError != 487 )
                                                          {
                                                            result = 40;
                                                            if ( LastError <= 0x1E7 )
                                                            {
                                                              result = 22;
                                                              if ( LastError != 267 )
                                                              {
                                                                result = 40;
                                                                if ( LastError <= 0xEA )
                                                                {
                                                                  if ( LastError > 0xCA )
                                                                  {
                                                                    switch ( LastError )
                                                                    {
                                                                      case 0xCBu:
                                                                      case 0xD1u:
                                                                        goto LABEL_50;
                                                                      case 0xCEu:
LABEL_75:
                                                                        result = 38;
                                                                        break;
                                                                      case 0xD0u:
                                                                        result = 7;
                                                                        break;
                                                                      case 0xD4u:
                                                                      case 0xE7u:
LABEL_76:
                                                                        result = 16;
                                                                        break;
                                                                      case 0xD6u:
LABEL_69:
                                                                        result = 24;
                                                                        break;
                                                                      case 0xE6u:
                                                                      case 0xE8u:
                                                                      case 0xE9u:
                                                                      case 0xEAu:
LABEL_62:
                                                                        result = 32;
                                                                        break;
                                                                      default:
                                                                        goto LABEL_53;
                                                                    }
                                                                  }
                                                                  else
                                                                  {
                                                                    result = 8;
                                                                    if ( LastError != 193 )
                                                                    {
                                                                      result = 40;
                                                                      if ( LastError <= 0xC1 )
                                                                      {
                                                                        result = 8;
                                                                        if ( LastError != 192 )
                                                                        {
                                                                          result = 8;
                                                                          if ( LastError != 191 )
                                                                          {
                                                                            result = 17;
                                                                            if ( LastError != 183 )
                                                                            {
                                                                              result = 40;
                                                                              if ( LastError <= 0xB7 )
                                                                              {
                                                                                result = 16;
                                                                                if ( LastError != 170 )
                                                                                {
                                                                                  result = 40;
                                                                                  if ( LastError <= 0xAA )
                                                                                  {
                                                                                    if ( LastError > 0x94 )
                                                                                    {
                                                                                      return LastError != 161 ? 40 : 2;
                                                                                    }
                                                                                    else if ( LastError > 1 )
                                                                                    {
                                                                                      switch ( LastError )
                                                                                      {
                                                                                        case 2u:
                                                                                        case 3u:
                                                                                          goto LABEL_68;
                                                                                        case 4u:
                                                                                          goto LABEL_69;
                                                                                        case 5u:
                                                                                        case 0xCu:
                                                                                        case 0x10u:
                                                                                        case 0x20u:
                                                                                        case 0x21u:
                                                                                        case 0x52u:
                                                                                          result = 13;
                                                                                          break;
                                                                                        case 6u:
                                                                                          result = 9;
                                                                                          break;
                                                                                        case 8u:
                                                                                        case 0xEu:
                                                                                        case 0x7Au:
                                                                                          goto LABEL_67;
                                                                                        case 9u:
                                                                                          goto LABEL_74;
                                                                                        case 0xBu:
                                                                                          result = 8;
                                                                                          break;
                                                                                        case 0xDu:
                                                                                        case 0x18u:
                                                                                        case 0x57u:
                                                                                        case 0x7Bu:
                                                                                          goto LABEL_50;
                                                                                        case 0xFu:
                                                                                        case 0x14u:
                                                                                        case 0x37u:
                                                                                          goto LABEL_70;
                                                                                        case 0x11u:
                                                                                          result = 18;
                                                                                          break;
                                                                                        case 0x13u:
                                                                                          result = 30;
                                                                                          break;
                                                                                        case 0x15u:
                                                                                        case 0x59u:
                                                                                          result = 11;
                                                                                          break;
                                                                                        case 0x16u:
                                                                                        case 0x17u:
                                                                                        case 0x19u:
                                                                                        case 0x1Du:
                                                                                        case 0x1Eu:
                                                                                        case 0x1Fu:
                                                                                        case 0x6Bu:
                                                                                        case 0x6Eu:
                                                                                        case 0x71u:
                                                                                        case 0x72u:
                                                                                          goto LABEL_72;
                                                                                        case 0x24u:
                                                                                          result = 23;
                                                                                          break;
                                                                                        case 0x27u:
                                                                                        case 0x70u:
                                                                                          result = 28;
                                                                                          break;
                                                                                        case 0x50u:
                                                                                          result = 17;
                                                                                          break;
                                                                                        case 0x55u:
                                                                                        case 0x6Cu:
                                                                                        case 0x8Eu:
                                                                                        case 0x94u:
                                                                                          goto LABEL_76;
                                                                                        case 0x56u:
                                                                                          result = 1;
                                                                                          break;
                                                                                        case 0x6Du:
                                                                                          goto LABEL_62;
                                                                                        case 0x6Fu:
                                                                                          goto LABEL_75;
                                                                                        case 0x77u:
                                                                                          result = 6;
                                                                                          break;
                                                                                        case 0x80u:
                                                                                          result = 10;
                                                                                          break;
                                                                                        case 0x83u:
                                                                                        case 0x84u:
                                                                                          result = 29;
                                                                                          break;
                                                                                        case 0x91u:
                                                                                          result = 41;
                                                                                          break;
                                                                                        default:
                                                                                          goto LABEL_53;
                                                                                      }
                                                                                    }
                                                                                  }
                                                                                }
                                                                              }
                                                                            }
                                                                          }
                                                                        }
                                                                      }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return result;
}

