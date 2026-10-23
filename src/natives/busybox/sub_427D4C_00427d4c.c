// busybox.exe @ 0x427d4c size=402

int __cdecl sub_427D4C(int a1, int a2)
{
  _DWORD *v2; // ebx
  _DWORD *v3; // esi
  char v4; // bp
  char *v5; // edi
  int v6; // eax

  v2 = (_DWORD *)sub_43AC28();
  v3 = (_DWORD *)sub_43AC28();
  v3[26] = v2;
  v3[2] = sub_42FCCC;
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  sub_43E368();
  v4 = sub_435D44(a2, "^cefXx");
  v5 = *(char **)(a2 + 4 * dword_473090 + 4);
  if ( (v4 & 1) == 0 || (v2[8] = sub_438628, v5 == nullptr) )
  {
    if ( (v4 & 4) == 0 || (v3[3] = 0, sub_43E368(), v2[2] = sub_42FCB8, v2[9] = sub_4218CC, v5 == nullptr) )
    {
      if ( (v4 & 2) != 0 )
      {
        v3[3] = 0;
        v2[9] = sub_42149C;
        if ( v5 == nullptr )
          v5 = "./DEBIAN";
      }
      if ( (v4 & 0x18) == 0 )
        goto LABEL_13;
      if ( (v4 & 8) != 0 )
        v2[8] = sub_438614;
      v2[9] = sub_42149C;
      if ( v5 != nullptr )
      {
LABEL_13:
        v6 = sub_471588();
        v3[1] = v6;
        v2[1] = v6;
        if ( v5 != nullptr )
        {
          sub_443494(v5);
          sub_470B28();
        }
        sub_468B54();
        return 0;
      }
    }
  }
  sub_418164();
}

