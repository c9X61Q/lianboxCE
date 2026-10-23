// busybox.exe @ 0x444858 size=285

int __fastcall sub_444858(int a1, char *a2, int a3)
{
  char *Block; // edi
  int v5; // ebx
  const char *v6; // eax
  LPSTR v7; // eax
  char *v8; // ebx
  char *v9; // esi
  char *v12; // [esp+10h] [ebp-14h] BYREF

  if ( sub_430048(a2) >= 0 )
    goto LABEL_6;
  if ( sub_437D6C(a2) )
  {
    Block = (char *)sub_41422C(a2);
    sub_413848(Block);
    v5 = sub_4449B8(a3, 0);
    free(Block);
    if ( v5 == -1 && sub_4685AC(a2) != 0 )
    {
      v6 = sub_416E24(a2);
      if ( sub_430048(v6) >= 0 )
      {
LABEL_6:
        v7 = sub_433530();
        return sub_46204C(a1, v7, a3);
      }
    }
  }
  else if ( sub_44328C("PATH") != nullptr
         && (v8 = (char *)sub_47188C(), v12 = v8, v9 = sub_430504(a2, &v12), free(v8), v9 != nullptr) )
  {
    v5 = sub_4449B8(a3, 0);
    free(v9);
  }
  else
  {
    *_errno() = 2;
    return -1;
  }
  return v5;
}

