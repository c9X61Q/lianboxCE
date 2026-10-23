// busybox.exe @ 0x421d70 size=127

int __usercall sub_421D70@<eax>(_DWORD *a1@<eax>)
{
  int v2; // ebp
  int v3; // ebx
  int v4; // eax
  int v6; // et2

  v2 = a1[5];
  v3 = v2 + 1900 - (a1[4] <= 1);
  v4 = a1[3]
     + (unsigned __int16)word_47D460[a1[4]]
     + v3 / 4
     + 365 * (v2 - 70)
     - 473
     - (((v3 < -3) + v3 / 4) / 25
      - (v3 < -3))
     + v3 / 400
     - 1;
  v6 = (v4 % 7 + 7) % 7;
  a1[6] = v6;
  return (v4 % 7 + 7) / 7;
}

