// gettime.exe @ 0x408150 size=38

void __thiscall sub_408150(pairNode *this, int a2, bool a3)
{
  int v3; // eax

  v3 = pairNode::raw_length(this);
  sub_406440(this, a2 | v3, a3);
}

