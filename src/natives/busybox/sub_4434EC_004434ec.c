// busybox.exe @ 0x4434ec size=26

char *__cdecl sub_4434EC(char *TemplateName)
{
  if ( mktemp(TemplateName) == nullptr )
    *TemplateName = 0;
  return TemplateName;
}

