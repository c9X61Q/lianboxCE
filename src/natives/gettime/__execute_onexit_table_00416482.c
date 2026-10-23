// gettime.exe @ 0x416482 size=57

int __cdecl _execute_onexit_table(_onexit_table_t *Table)
{
  int v2; // [esp+10h] [ebp-1Ch] BYREF
  _onexit_table_t **p_Table; // [esp+14h] [ebp-18h] BYREF
  int v4[5]; // [esp+18h] [ebp-14h] BYREF

  p_Table = &Table;
  v4[4] = 0;
  v4[0] = 2;
  v2 = 2;
  return sub_4161DA(&v2, (int)&p_Table, v4);
}

