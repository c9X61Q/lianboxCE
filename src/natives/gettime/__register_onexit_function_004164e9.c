// gettime.exe @ 0x4164e9 size=51

int __cdecl _register_onexit_function(_onexit_table_t *Table, _onexit_t Function)
{
  _DWORD v3[2]; // [esp+0h] [ebp-14h] BYREF
  int v4; // [esp+8h] [ebp-Ch] BYREF
  int v5; // [esp+Ch] [ebp-8h] BYREF

  v3[0] = &Table;
  v3[1] = &Function;
  v5 = 2;
  v4 = 2;
  return sub_416235(&v4, (int)v3, &v5);
}

