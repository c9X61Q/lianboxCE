// busybox.exe @ 0x4449b8 size=555

int __fastcall sub_4449B8(int a1, const char *a2, int a3, int a4)
{
  int v6; // eax
  char *v7; // eax
  char *v8; // eax
  char *v9; // ebx
  const char *v10; // eax
  char **v12; // ebx
  int v13; // ebp
  char *v14; // esi
  int v15; // eax
  LPSTR v16; // eax
  int v17; // [esp+Ch] [ebp-8Ch]
  int v18; // [esp+14h] [ebp-84h]
  char *v19; // [esp+18h] [ebp-80h]
  const char *v20; // [esp+1Ch] [ebp-7Ch]
  char *v21; // [esp+20h] [ebp-78h]
  char Str[2]; // [esp+24h] [ebp-74h] BYREF
  char String[114]; // [esp+26h] [ebp-72h] BYREF

  v6 = sub_447A88(99);
  if ( v6 <= 3 )
  {
    if ( v6 < 0 )
      return sub_46204C(a1, a2, a3);
  }
  else if ( *(_WORD *)Str == 8483 )
  {
    Str[v6] = 0;
    v7 = strchr(Str, 10);
    if ( v7 != nullptr )
    {
      v7[1] = 0;
      v8 = strtok(String, " \t\r\n");
      v9 = v8;
      if ( v8 != nullptr )
      {
        v10 = sub_416E24(v8);
        if ( *v10 != 0 )
        {
          v19 = v9;
          v20 = v10;
          v21 = strtok(nullptr, "\r\n");
          if ( v21 != nullptr && v21 == (char *)sub_467754() )
            goto LABEL_14;
LABEL_16:
          if ( a4 + 1 <= 4 )
          {
            v18 = sub_463690();
            v12 = (char **)sub_470E78();
            v12[1] = v21;
            v13 = (v21 != nullptr) + 1;
            v12[v13] = (char *)a2;
            qmemcpy(&v12[v13 + 1], (const void *)(a1 + 4), 4 * v18);
            v14 = (char *)sub_41422C(v19);
            if ( sub_413848(v14) != 0 || sub_42F668(v14) )
            {
              *v12 = v14;
              v15 = sub_4449B8(a3, a4 + 1);
            }
            else if ( sub_430048(v20) < 0 )
            {
              *_errno() = 2;
              v15 = -1;
            }
            else
            {
              v14 = (char *)sub_4708BC("%d:/%s", v13, v20);
              *v12 = v14;
              v16 = sub_433530();
              v15 = sub_46204C(v12, v16, a3);
            }
            v17 = v15;
            free(v14);
            free(v12);
            return v17;
          }
          else
          {
            *_errno() = 114;
            return -1;
          }
        }
      }
    }
  }
  if ( sub_43C63C(a2, ".sh") != nullptr )
  {
    v19 = "/bin/sh";
    v20 = "-/bin/sh" + 6;
LABEL_14:
    v21 = nullptr;
    goto LABEL_16;
  }
  return sub_46204C(a1, a2, a3);
}

